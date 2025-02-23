/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_manual_y_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lakdogan <lakdogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 15:02:57 by lakdogan          #+#    #+#             */
/*   Updated: 2025/02/22 08:22:07 by lakdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../inc/fdf_bonus.h"

int	keyhook_y_axis_rotations(t_data *data, int keycode)
{
	if (keycode == KEYA)
	{
		rotate_y_axis_minus(data);
		mlx_destroy_image(data->graphics.mlx_ptr, data->graphics.img);
		print_mapv_mlx(data);
	}
	if (keycode == KEYS)
	{
		rotate_y_axis_plus(data);
		mlx_destroy_image(data->graphics.mlx_ptr, data->graphics.img);
		print_mapv_mlx(data);
	}
	return (0);
}
