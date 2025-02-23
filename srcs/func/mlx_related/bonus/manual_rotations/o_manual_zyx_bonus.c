/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   o_manual_zyx_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lakdogan <lakdogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 15:02:39 by lakdogan          #+#    #+#             */
/*   Updated: 2025/02/22 08:23:02 by lakdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../inc/fdf_bonus.h"

int	keyhook_zyx_rotations(t_data *data, int keycode)
{
	if (keycode == KEYDOT)
	{
		rotate_zyx_axis_minus(data);
		mlx_destroy_image(data->graphics.mlx_ptr, data->graphics.img);
		print_mapv_mlx(data);
	}
	if (keycode == KEYSLASH)
	{
		rotate_zyx_axis_plus(data);
		mlx_destroy_image(data->graphics.mlx_ptr, data->graphics.img);
		print_mapv_mlx(data);
	}
	return (0);
}
