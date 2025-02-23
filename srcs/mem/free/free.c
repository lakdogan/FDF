/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lakdogan <lakdogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 02:07:57 by lakdogan          #+#    #+#             */
/*   Updated: 2025/02/17 00:39:26 by lakdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../../../inc/fdf.h"

/* free the array */
void	free_lines_arr(t_data *data)
{
	size_t	i;
	size_t	j;

	if (!data->line_reader.arr)
		return ;
	i = 0;
	while (i < data->line_reader.line_count)
	{
		if (!data->line_reader.arr[i])
		{
			i++;
			continue ;
		}
		j = 0;
		while (j < data->line_reader.max_string_count)
		{
			free(data->line_reader.arr[i][j]);
			j++;
		}
		free(data->line_reader.arr[i]);
		i++;
	}
	free(data->line_reader.arr);
	data->line_reader.arr = NULL;
}

void	free_lines_carr(t_data *data)
{
	size_t	i;
	size_t	j;

	if (!data->line_reader.carr)
		return ;
	i = 0;
	while (i < data->line_reader.line_count)
	{
		if (!data->line_reader.carr[i])
		{
			i++;
			continue ;
		}
		j = 0;
		while (j < data->line_reader.max_string_count)
		{
			free(data->line_reader.carr[i][j]);
			j++;
		}
		free(data->line_reader.carr[i]);
		i++;
	}
	free(data->line_reader.carr);
	data->line_reader.carr = NULL;
}

static void	free_map_name(t_data *data)
{
	if (data->line_reader.mapname)
	{
		free(data->line_reader.mapname);
		data->line_reader.mapname = NULL;
	}
}

void	free_lines(t_data *data)
{
	size_t	i;

	if (!data->line_reader.lines)
		return ;
	i = 0;
	while (data->line_reader.lines[i])
	{
		free(data->line_reader.lines[i]);
		i++;
	}
	free(data->line_reader.lines);
	data->line_reader.lines = NULL;
}

void	free_all_arrays(t_data *data)
{
	free_map_name(data);
	free_lines(data);
	free_lines_arr(data);
	free_lines_carr(data);
	free_int_arr(data);
	free_float_x_arr(data);
	free_float_y_arr(data);
	free_float_z_arr(data);
	free_mapv(data);
}
