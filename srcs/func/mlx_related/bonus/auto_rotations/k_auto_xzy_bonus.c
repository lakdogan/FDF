/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   k_auto_xzy_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lakdogan <lakdogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 14:53:20 by lakdogan          #+#    #+#             */
/*   Updated: 2025/02/22 08:20:59 by lakdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../inc/fdf_bonus.h"

int	auto_rotate_in_xzy(t_data *data, int keycode)
{
	if (keycode == KEYFNINETEEN)
	{
		if (data->xzyautomatic == 0 || data->xzyautomatic == 2)
			data->xzyautomatic = 1;
		else
			data->xzyautomatic = 2;
	}
	return (0);
}

int	auto_rotate_xzy(t_data *data)
{
	if (data->xzyautomatic == 1)
	{
		rotate_xzy_axis_plus(data);
		mlx_destroy_image(data->graphics.mlx_ptr, data->graphics.img);
		print_mapv_mlx(data);
	}
	if (data->xzyautomatic == 2)
	{
		rotate_xzy_axis_minus(data);
		mlx_destroy_image(data->graphics.mlx_ptr, data->graphics.img);
		print_mapv_mlx(data);
	}
	return (0);
}
