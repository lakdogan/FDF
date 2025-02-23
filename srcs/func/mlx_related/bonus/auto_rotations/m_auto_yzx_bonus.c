/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_auto_yzx_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lakdogan <lakdogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 14:53:09 by lakdogan          #+#    #+#             */
/*   Updated: 2025/02/22 08:21:08 by lakdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../inc/fdf_bonus.h"

int	auto_rotate_in_yzx(t_data *data, int keycode)
{
	if (keycode == KEYPAGEUP)
	{
		if (data->yzxautomatic == 0 || data->yzxautomatic == 2)
			data->yzxautomatic = 1;
		else
			data->yzxautomatic = 2;
	}
	return (0);
}

int	auto_rotate_yzx(t_data *data)
{
	if (data->yzxautomatic == 1)
	{
		rotate_x_axis(data);
		rotate_yzx_axis_plus(data);
		mlx_destroy_image(data->graphics.mlx_ptr, data->graphics.img);
		print_mapv_mlx(data);
	}
	if (data->yzxautomatic == 2)
	{
		rotate_yzx_axis_minus(data);
		mlx_destroy_image(data->graphics.mlx_ptr, data->graphics.img);
		print_mapv_mlx(data);
	}
	return (0);
}
