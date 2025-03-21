/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_manual_x_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lakdogan <lakdogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 15:02:51 by lakdogan          #+#    #+#             */
/*   Updated: 2025/02/22 08:22:02 by lakdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../inc/fdf_bonus.h"

int	keyhook_x_axis_rotations(t_data *data, int keycode)
{
	if (keycode == KEYW)
	{
		rotate_x_axis_plus(data);
		mlx_destroy_image(data->graphics.mlx_ptr, data->graphics.img);
		print_mapv_mlx(data);
	}
	if (keycode == KEYQ)
	{
		rotate_x_axis_minus(data);
		mlx_destroy_image(data->graphics.mlx_ptr, data->graphics.img);
		print_mapv_mlx(data);
	}
	return (0);
}
