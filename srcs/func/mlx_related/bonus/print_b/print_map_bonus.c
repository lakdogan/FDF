/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_map_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lakdogan <lakdogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 22:38:34 by lakdogan          #+#    #+#             */
/*   Updated: 2025/02/22 08:23:38 by lakdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../inc/fdf_bonus.h"

void	print_mapv_mlx(t_data *data)
{
	reset_radians(data);
	init_mlx_new_image(data);
	get_img_addr(data);
	init_struct_v(data);
	if (data->patternchanger == 0)
		draw_wireframe_a(data);
	else if (data->patternchanger == 1)
		draw_wireframe_b(data);
	else
	{
		data->add_lines = 0;
		draw_wireframe_b(data);
	}
	data->add_lines = 1;
	mlx_put_image_to_window(data->graphics.mlx_ptr, data->graphics.mlx_win,
		data->graphics.img, 0, 0);
}
