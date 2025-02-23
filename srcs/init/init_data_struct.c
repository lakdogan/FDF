/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_data_struct.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lakdogan <lakdogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 22:54:48 by lakdogan          #+#    #+#             */
/*   Updated: 2025/02/22 21:01:59 by lakdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../../inc/fdf.h"

static void	init_data_struct_a(t_data *data)
{
	data->min_x = 0.0;
	data->min_y = 0.0;
	data->max_x = 0.0;
	data->max_y = 0.0;
	data->obj_cent_x = 0.0;
	data->obj_cent_y = 0.0;
	data->img_cent_x = 0.0;
	data->img_cent_y = 0.0;
	data->offset_x = 0.0;
	data->offset_y = 0.0;
	data->rotate_y = 0.0;
	data->rotate_x = 0.0;
	data->rotate_z = 0.0;
	data->move_y = 0;
	data->switch_man_auto = 0;
}

static void	init_data_struct_b(t_data *data)
{
	data->x0 = 0;
	data->y0 = 0;
	data->x1 = 0;
	data->y1 = 0;
	data->rows = 0;
	data->cols = 0;
	data->rotate = 0;
	data->index = 0;
	data->color = 0;
	data->movementscaler = 0.0;
	data->auto_move_x = 0;
	data->auto_move_y = 0;
	data->inverted_color = 0;
	data->mapv_reversed = NULL;
	data->index_counter = 0;
	data->rotate_y = 0.0;
	data->rotate_x = 0.0;
	data->total = 0;
}

static void	init_data_struct_c(t_data *data)
{
	data->right_index = 0;
	data->bottom_index = 0;
	data->dx = 0;
	data->dy = 0;
	data->sx = 0;
	data->sy = 0;
	data->err = 0;
	data->e2 = 0;
	data->final_x = 0;
	data->final_y = 0;
	data->dst = NULL;
	data->max_z = 0;
	data->scale_rad = M_PI / 180;
	data->xyautomatic = 0;
	data->xautomatic = 0;
	data->yautomatic = 0;
	data->zoomautomatic = 0;
	data->patternchanger = 0;
	data->add_lines = 1;
	data->zvaluechanger = 0;
	data->move_x = 0.0;
	data->org_x1 = 0;
}

void	init_data_struct(t_data *data)
{
	data->org_y1 = 0;
	data->parallel_view = 0;
	data->rotate_on_plane = 270;
	init_data_struct_a(data);
	init_data_struct_b(data);
	init_data_struct_c(data);
}
