/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_structs_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lakdogan <lakdogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 15:00:21 by lakdogan          #+#    #+#             */
/*   Updated: 2025/02/22 14:08:22 by lakdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../inc/fdf_bonus.h"

void	init_line_reader(t_data *data)
{
	data->line_reader.lines = NULL;
	data->line_reader.arr = NULL;
	data->line_reader.carr = NULL;
	data->line_reader.mapname = NULL;
	data->line_reader.fd = 0;
	data->line_reader.countchar = 0;
	data->line_reader.string_length = 0;
	data->line_reader.string_count = 0;
	data->line_reader.size = 0;
	data->line_reader.capacity = 100;
	data->line_reader.line_count = 0;
	data->line_reader.max_string_count = 0;
	data->line_reader.max_string_length = 0;
	data->line_reader.first_string_count = 0;
}

void	init_map(t_data *data)
{
	data->map.org = 1;
	data->map.size = 0;
	data->map.capacity = 0;
	data->map.mod = 1;
	data->map.colmod = 1;
	data->map.x = NULL;
	data->map.y = NULL;
	data->map.z = NULL;
	data->map.mapcol = NULL;
	data->mapv = NULL;
	data->map.angle_x = 0;
	data->map.angle_y = 0;
	data->map.angle_z = 0;
	data->map.distance = 0;
}

void	init_all_structs_bon(t_data *data)
{
	init_line_reader(data);
	init_map(data);
	init_struct_var(data);
	init_struct_v(data);
	init_struct_w(data);
	init_data_struct_bon(data);
}
