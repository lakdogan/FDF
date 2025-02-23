/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_data_struct_bonus.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lakdogan <lakdogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 22:54:48 by lakdogan          #+#    #+#             */
/*   Updated: 2025/02/22 14:07:47 by lakdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../inc/fdf_bonus.h"

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
	data->xzyautomatic = 0;
	data->yxzautomatic = 0;
	data->yzxautomatic = 0;
	data->zxyautomatic = 0;
	data->zyxautomatic = 0;
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
	data->zautomatic = 0;
	data->yxautomatic = 0;
	data->xzautomatic = 0;
	data->zxautomatic = 0;
	data->yzautomatic = 0;
	data->zyautomatic = 0;
	data->xyzautomatic = 0;
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
	data->zoom_in = 1.01;
	data->zoom_out = 0.99;
	data->zoombooster = 0;
	data->zvaluechanger = 0;
	data->move_x = 0.0;
	data->org_x1 = 0;
}

void	init_data_struct_bon(t_data *data)
{
	data->org_y1 = 0;
	data->parallel_view = 0;
	data->rotate_on_plane = 270;
	init_data_struct_a(data);
	init_data_struct_b(data);
	init_data_struct_c(data);
}
