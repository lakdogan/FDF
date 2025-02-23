/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lakdogan <lakdogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 07:23:51 by lakdogan          #+#    #+#             */
/*   Updated: 2025/02/22 01:19:58 by lakdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../../../../inc/fdf.h"

void	print_mapv_mlx_man(t_data *data)
{
	init_mlx_new_image(data);
	get_img_addr(data);
	init_struct_v(data);
	draw_wireframe_man(data);
	mlx_put_image_to_window(data->graphics.mlx_ptr, data->graphics.mlx_win,
		data->graphics.img, 0, 0);
}
