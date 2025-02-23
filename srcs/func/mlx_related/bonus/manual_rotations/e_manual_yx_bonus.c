/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   e_manual_yx_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lakdogan <lakdogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 15:03:12 by lakdogan          #+#    #+#             */
/*   Updated: 2025/02/22 08:22:21 by lakdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../inc/fdf_bonus.h"

int	keyhook_yx_axis_rotations(t_data *data, int keycode)
{
	if (keycode == KEYD)
	{
		rotate_yx_axis_minus(data);
		mlx_destroy_image(data->graphics.mlx_ptr, data->graphics.img);
		print_mapv_mlx(data);
	}
	if (keycode == KEYF)
	{
		rotate_yx_axis_plus(data);
		mlx_destroy_image(data->graphics.mlx_ptr, data->graphics.img);
		print_mapv_mlx(data);
	}
	return (0);
}
