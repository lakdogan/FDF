/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resets_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lakdogan <lakdogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 16:32:37 by lakdogan          #+#    #+#             */
/*   Updated: 2025/02/22 08:23:45 by lakdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../inc/fdf_bonus.h"

int	keyhook_reset_map(t_data *data, int keycode)
{
	if (keycode == KEYCAPSLOCK)
	{
		keyhook_reset_all_automatic(data, KEYSPACE);
		fill_mapv(data);
	}
	if (keycode == KEYSHIFT)
	{
		fill_mapv(data);
		transform_isometric(data);
	}
	return (0);
}

void	reset_radians(t_data *data)
{
	data->rotate_x = 0.0;
	data->rotate_y = 0.0;
	data->rotate_z = 0.0;
}

int	keyhook_reset_all_automatic(t_data *data, int keycode)
{
	if (keycode == KEYSPACE)
	{
		reset_all_rotations(data);
		reset_radians(data);
		data->zoomautomatic = 0;
		data->zoom_in = 1.01;
		data->zvaluechanger = 0;
		data->auto_move_x = 0;
		data->auto_move_y = 0;
	}
	return (0);
}

void	reset_all_rotations(t_data *data)
{
	data->xautomatic = 0;
	data->yautomatic = 0;
	data->zautomatic = 0;
	data->yxautomatic = 0;
	data->xzautomatic = 0;
	data->zxautomatic = 0;
	data->yzautomatic = 0;
	data->zyautomatic = 0;
	data->xyzautomatic = 0;
	data->xzyautomatic = 0;
	data->yxzautomatic = 0;
	data->yzxautomatic = 0;
	data->zxyautomatic = 0;
	data->zyxautomatic = 0;
	data->switch_man_auto = 0;
	data->xyautomatic = 0;
}
