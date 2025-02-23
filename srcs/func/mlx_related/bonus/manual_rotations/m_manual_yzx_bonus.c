/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_manual_yzx_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lakdogan <lakdogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 15:03:49 by lakdogan          #+#    #+#             */
/*   Updated: 2025/02/22 08:22:52 by lakdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../inc/fdf_bonus.h"

int	keyhook_yzx_rotations(t_data *data, int keycode)
{
	if (keycode == KEYO)
	{
		rotate_yzx_axis_minus(data);
		mlx_destroy_image(data->graphics.mlx_ptr, data->graphics.img);
		print_mapv_mlx(data);
	}
	if (keycode == KEYP)
	{
		rotate_yzx_axis_plus(data);
		mlx_destroy_image(data->graphics.mlx_ptr, data->graphics.img);
		print_mapv_mlx(data);
	}
	return (0);
}
