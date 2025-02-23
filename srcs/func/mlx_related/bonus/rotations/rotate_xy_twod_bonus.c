/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_xy_twod_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lakdogan <lakdogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 02:16:35 by lakdogan          #+#    #+#             */
/*   Updated: 2025/02/22 08:24:54 by lakdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../inc/fdf_bonus.h"

int	rotate_xy_twod(int keycode, t_data *data)
{
	if (keycode == KEYFSIX)
	{
		data->rotate_on_plane += 1;
		fill_mapv(data);
		transform_isometric(data);
		calculate_optimal_scale(data);
		scale_map(data);
		find_offset(data);
		print_mapv_mlx(data);
	}
	return (0);
}

int	rotate_xy_twod_neg(int keycode, t_data *data)
{
	if (keycode == KEYFFIVE)
	{
		data->rotate_on_plane -= 1;
		fill_mapv(data);
		transform_isometric(data);
		calculate_optimal_scale(data);
		scale_map(data);
		find_offset(data);
		print_mapv_mlx(data);
	}
	return (0);
}
