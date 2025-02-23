/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   n_manual_zxy_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lakdogan <lakdogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 15:03:54 by lakdogan          #+#    #+#             */
/*   Updated: 2025/02/22 08:22:57 by lakdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../inc/fdf_bonus.h"

int	keyhook_zxy_rotations(t_data *data, int keycode)
{
	if (keycode == KEYL)
	{
		rotate_zxy_axis_minus(data);
		mlx_destroy_image(data->graphics.mlx_ptr, data->graphics.img);
		print_mapv_mlx(data);
	}
	if (keycode == KEYSEMICOLON)
	{
		rotate_zxy_axis_plus(data);
		mlx_destroy_image(data->graphics.mlx_ptr, data->graphics.img);
		print_mapv_mlx(data);
	}
	return (0);
}
