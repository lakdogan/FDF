/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   j_manual_xyz_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lakdogan <lakdogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 15:03:35 by lakdogan          #+#    #+#             */
/*   Updated: 2025/02/22 08:22:38 by lakdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../inc/fdf_bonus.h"

int	keyhook_xyz_rotations(t_data *data, int keycode)
{
	if (keycode == KEYU)
	{
		rotate_xyz_axis_minus(data);
		mlx_destroy_image(data->graphics.mlx_ptr, data->graphics.img);
		print_mapv_mlx(data);
	}
	if (keycode == KEYI)
	{
		rotate_xyz_axis_plus(data);
		mlx_destroy_image(data->graphics.mlx_ptr, data->graphics.img);
		print_mapv_mlx(data);
	}
	return (0);
}
