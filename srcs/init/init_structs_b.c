/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_structs_b.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lakdogan <lakdogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 21:45:19 by lakdogan          #+#    #+#             */
/*   Updated: 2025/02/17 21:45:52 by lakdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../../inc/fdf.h"

void	init_struct_var(t_data *data)
{
	data->var.i = 0;
	data->var.j = 0;
	data->var.k = 0;
	data->var.l = 1;
	data->var.m = 0;
	data->var.n = 0;
	data->v.x = 0;
	data->v.y = 0;
	data->var.del = ',';
	data->v.hexprefix = 2;
	data->v.color = 0;
}

void	init_struct_v(t_data *data)
{
	data->map.size = data->line_reader.max_string_count;
	data->map.capacity = data->line_reader.line_count;
	data->v.i = 0;
	data->v.j = 0;
	data->v.k = 0;
	data->v.l = 0;
	data->v.m = 0;
	data->v.n = 0;
	data->v.x = 0;
	data->v.y = 0;
	data->v.z = 0;
	data->v.xf = 0;
	data->v.yf = 0;
	data->v.del = ',';
	data->v.hexprefix = 2;
	data->v.color = 0;
}

void	init_struct_w(t_data *data)
{
	data->w.i = 0;
	data->w.j = 0;
	data->w.k = 0;
	data->w.l = 0;
	data->w.m = 0;
	data->w.n = 0;
	data->w.del = ',';
	data->w.hexprefix = 2;
	data->v.color = 0;
}
