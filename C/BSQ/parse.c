/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmedeir <edmedeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 09:38:40 by edmedeir          #+#    #+#             */
/*   Updated: 2026/03/18 17:56:01 by edmedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

static char	*read_file(int fd)
{
	char	*buf;
	char	*tmp;
	char	chunk[4096];
	int		bytes;
	int		total;
	int		new_size;
	int		k;

	k = 0;
	buf = NULL;
	total = 0;
	while ((bytes = read(fd, chunk, 4095)) > 0)
	{
		new_size = total + bytes + 1;
		tmp = malloc(new_size);
		if (!tmp)
		{
			free(buf);
			return (NULL);
		}
		if (buf)
		{
			while (k < total)
			{
				tmp[k] = buf[k];
				k++;
			}
			free(buf);
		}
		k = 0;
		while (k < bytes)
		{
			tmp[total + k] = chunk[k];
			k++;
		}
		total += bytes;
		tmp[total] = '\0';
		buf = tmp;
	}
	if (bytes < 0)
	{
		free(buf);
		return (NULL);
	}
	return (buf);
}

static int	parse_header(const char *line, t_map *map)
{
	int	i;
	int	num;

	i = 0;
	num = 0;
	if (line[i] < '1' || line[i] > '9')
		return (0);
	while (line[i] >= '0' && line[i] <= '9')
	{
		num = num * 10 + (line[i] - '0');
		i++;
	}
	if (line[i] == '\0' || line[i + 1] == '\0' || line[i + 2] == '\0')
		return (0);
	if (line[i + 3] && line[i + 3] != '\n')
		return (0);
	map->rows = num;
	map->empty = line[i];
	map->obstacle = line[i + 1];
	map->full = line[i + 2];
	if (map->empty == map->obstacle || map->empty == map->full
		|| map->obstacle == map->full)
		return (0);
	return (1);
}

static void	free_lines(char **lines, int count)
{
	int	k;

	k = 0;
	while (k < count)
		free(lines[k++]);
	free(lines);
}

static char	**split_lines(char *buf, int expected_rows, int *cols_out)
{
	char	**lines;
	int		i;
	int		start;
	int		len;
	int		first_len;
	int		j;
	int		k;

	lines = malloc(sizeof(char *) * (expected_rows + 1));
	if (!lines)
		return (NULL);
	i = 0;
	start = 0;
	first_len = -1;
	while (i < expected_rows)
	{
		j = start;
		while (buf[j] && buf[j] != '\n')
			j++;
		len = j - start;
		if (len == 0 || (first_len != -1 && len != first_len))
		{
			free_lines(lines, i);
			return (NULL);
		}
		if (first_len == -1)
			first_len = len;
		lines[i] = malloc(len + 1);
		if (!lines[i])
		{
			free_lines(lines, i);
			return (NULL);
		}
		k = 0;
		while (k < len)
		{
			lines[i][k] = buf[start + k];
			k++;
		}
		lines[i][len] = '\0';
		i++;
		start = j + 1;
	}
	if (buf[start] && !(buf[start] == '\n' && buf[start + 1] == '\0'))
	{
		free_lines(lines, expected_rows);
		return (NULL);
	}
	lines[expected_rows] = NULL;
	*cols_out = first_len;
	return (lines);
}

static int	validate_grid(t_map *map)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	while (i < map->rows)
	{
		j = 0;
		while (j < map->cols)
		{
			c = map->grid[i][j];
			if (c != map->empty && c != map->obstacle)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

t_map	*parse_map(char *buf)
{
	t_map	*map;
	int		header_end;
	char	*body;

	map = malloc(sizeof(t_map));
	if (!map)
		return (NULL);
	header_end = 0;
	while (buf[header_end] && buf[header_end] != '\n')
		header_end++;
	if (buf[header_end] != '\n')
	{
		free(map);
		return (NULL);
	}
	buf[header_end] = '\0';
	if (!parse_header(buf, map))
	{
		buf[header_end] = '\n';
		free(map);
		return (NULL);
	}
	buf[header_end] = '\n';
	body = buf + header_end + 1;
	map->grid = split_lines(body, map->rows, &map->cols);
	if (!map->grid)
	{
		free(map);
		return (NULL);
	}
	if (!validate_grid(map))
	{
		free_map(map);
		return (NULL);
	}
	return (map);
}

void	free_map(t_map *map)
{
	int	i;

	if (!map)
		return ;
	if (map->grid)
	{
		i = 0;
		while (i < map->rows)
			free(map->grid[i++]);
		free(map->grid);
	}
	free(map);
}

void	process_map(int fd)
{
	char	*buf;
	t_map	*map;

	buf = read_file(fd);
	if (fd != 0)
		close(fd);
	if (!buf)
	{
		write(1, "map error\n", 10);
		return ;
	}
	map = parse_map(buf);
	free(buf);
	if (!map)
	{
		write(1, "map error\n", 10);
		return ;
	}
	solve_and_print(map);
	free_map(map);
}
