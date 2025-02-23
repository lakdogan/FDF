/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   h_auto_yz_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lakdogan <lakdogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 14:53:37 by lakdogan          #+#    #+#             */
/*   Updated: 2025/02/22 08:20:44 by lakdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../inc/fdf_bonus.h"

int	auto_rotate_in_yz(t_data *data, int keycode)
{
	if (keycode == KEYNUMSEVEN)
	{
		if (data->yzautomatic == 0 || data->yzautomatic == 2)
			data->yzautomatic = 1;
		else
			data->yzautomatic = 2;
	}
	return (0);
}

int	auto_rotate_yz(t_data *data)
{
	if (data->yzautomatic == 1)
	{
		rotate_yz_axis_plus(data);
		mlx_destroy_image(data->graphics.mlx_ptr, data->graphics.img);
		print_mapv_mlx(data);
	}
	if (data->yzautomatic == 2)
	{
		rotate_yz_axis_minus(data);
		mlx_destroy_image(data->graphics.mlx_ptr, data->graphics.img);
		print_mapv_mlx(data);
	}
	return (0);
}
