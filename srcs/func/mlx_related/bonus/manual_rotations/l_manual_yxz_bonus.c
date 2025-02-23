/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   l_manual_yxz_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lakdogan <lakdogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 15:03:45 by lakdogan          #+#    #+#             */
/*   Updated: 2025/02/22 08:22:47 by lakdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../inc/fdf_bonus.h"

int	keyhook_yxz_rotations(t_data *data, int keycode)
{
	if (keycode == KEYM)
	{
		rotate_yxz_axis_minus(data);
		mlx_destroy_image(data->graphics.mlx_ptr, data->graphics.img);
		print_mapv_mlx(data);
	}
	if (keycode == KEYCOMMA)
	{
		rotate_yxz_axis_plus(data);
		mlx_destroy_image(data->graphics.mlx_ptr, data->graphics.img);
		print_mapv_mlx(data);
	}
	return (0);
}
