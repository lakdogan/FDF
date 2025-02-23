/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   k_manual_xzy_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lakdogan <lakdogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 15:03:40 by lakdogan          #+#    #+#             */
/*   Updated: 2025/02/22 08:22:43 by lakdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../inc/fdf_bonus.h"

int	keyhook_xzy_rotations(t_data *data, int keycode)
{
	if (keycode == KEYJ)
	{
		rotate_xzy_axis_minus(data);
		mlx_destroy_image(data->graphics.mlx_ptr, data->graphics.img);
		print_mapv_mlx(data);
	}
	if (keycode == KEYK)
	{
		rotate_xzy_axis_plus(data);
		mlx_destroy_image(data->graphics.mlx_ptr, data->graphics.img);
		print_mapv_mlx(data);
	}
	return (0);
}
