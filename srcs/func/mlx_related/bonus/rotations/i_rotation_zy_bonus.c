/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   i_rotation_zy_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lakdogan <lakdogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 12:58:28 by lakdogan          #+#    #+#             */
/*   Updated: 2025/02/22 08:24:27 by lakdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../inc/fdf_bonus.h"

void	rotate_zy_axis_plus(t_data *data)
{
	data->rotate_z = data->scale_rad;
	data->rotate_y = data->scale_rad;
	rotate_z_axis(data);
	rotate_y_axis(data);
}

void	rotate_zy_axis_minus(t_data *data)
{
	data->rotate_z = -data->scale_rad;
	data->rotate_y = -data->scale_rad;
	rotate_z_axis(data);
	rotate_y_axis(data);
}
