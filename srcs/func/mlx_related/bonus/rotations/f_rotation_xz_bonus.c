/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_rotation_xz_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lakdogan <lakdogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 12:58:14 by lakdogan          #+#    #+#             */
/*   Updated: 2025/02/22 08:24:12 by lakdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../inc/fdf_bonus.h"

void	rotate_xz_axis_minus(t_data *data)
{
	data->rotate_x = -data->scale_rad;
	data->rotate_z = -data->scale_rad;
	rotate_x_axis(data);
	rotate_z_axis(data);
}

void	rotate_xz_axis_plus(t_data *data)
{
	data->rotate_x = data->scale_rad;
	data->rotate_z = data->scale_rad;
	rotate_x_axis(data);
	rotate_z_axis(data);
}
