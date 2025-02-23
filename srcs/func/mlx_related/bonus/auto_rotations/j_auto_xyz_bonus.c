/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   j_auto_xyz_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lakdogan <lakdogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 14:53:26 by lakdogan          #+#    #+#             */
/*   Updated: 2025/02/22 08:20:54 by lakdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../inc/fdf_bonus.h"

int	auto_rotate_in_xyz(t_data *data, int keycode)
{
	if (keycode == KEYNUMNINE)
	{
		if (data->xyzautomatic == 0 || data->xyzautomatic == 2)
			data->xyzautomatic = 1;
		else
			data->xyzautomatic = 2;
	}
	return (0);
}

int	auto_rotate_xyz(t_data *data)
{
	if (data->xyzautomatic == 1)
	{
		rotate_xyz_axis_plus(data);
		mlx_destroy_image(data->graphics.mlx_ptr, data->graphics.img);
		print_mapv_mlx(data);
	}
	if (data->xyzautomatic == 2)
	{
		rotate_xyz_axis_minus(data);
		mlx_destroy_image(data->graphics.mlx_ptr, data->graphics.img);
		print_mapv_mlx(data);
	}
	return (0);
}
