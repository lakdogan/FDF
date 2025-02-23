/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radians_changer_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lakdogan <lakdogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 16:46:17 by lakdogan          #+#    #+#             */
/*   Updated: 2025/02/22 08:21:44 by lakdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../inc/fdf_bonus.h"

int	keyhook_change_radians(t_data *data, int keycode)
{
	if (keycode == KEYNUMPLUS)
		data->scale_rad += (M_PI / 180) / 2;
	if (keycode == KEYMINUS)
		data->scale_rad -= (M_PI / 180) * 2;
	if (keycode == KEYMULTI)
		data->scale_rad *= 2;
	if (keycode == KEYDIV)
		data->scale_rad /= 2;
	if (keycode == KEYCLEAR)
		data->scale_rad = M_PI / 180;
	return (0);
}
