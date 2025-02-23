/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   features_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lakdogan <lakdogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 16:17:07 by lakdogan          #+#    #+#             */
/*   Updated: 2025/02/22 08:21:23 by lakdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../inc/fdf_bonus.h"

int	invert_color(t_data *data)
{
	if (data->inverted_color == 1 || data->inverted_color == 0)
	{
		mlx_destroy_image(data->graphics.mlx_ptr, data->graphics.img);
		print_mapv_mlx(data);
	}
	return (0);
}

int	switch_to_invert_color(t_data *data, int keycode)
{
	if (keycode == KEYPLUS)
	{
		if (data->inverted_color == 0)
			data->inverted_color = 1;
		else if (data->inverted_color != 0)
			data->inverted_color = 0;
	}
	return (0);
}

int	change_z_value(t_data *data, int keycode)
{
	if (keycode == KEYNUMPEIGHT)
	{
		if (data->zvaluechanger == 0 || data->zvaluechanger == 2)
			data->zvaluechanger = 1;
		else
			data->zvaluechanger = 0;
	}
	if (keycode == KEYNUMPFIVE)
	{
		if (data->zvaluechanger == 0 || data->zvaluechanger == 1)
			data->zvaluechanger = 2;
		else
			data->zvaluechanger = 0;
	}
	return (0);
}
