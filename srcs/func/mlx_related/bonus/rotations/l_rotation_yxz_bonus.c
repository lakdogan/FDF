/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   l_rotation_yxz_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lakdogan <lakdogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 12:58:40 by lakdogan          #+#    #+#             */
/*   Updated: 2025/02/22 08:24:40 by lakdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../inc/fdf_bonus.h"

void	rotate_yxz_axis_plus(t_data *data)
{
	data->rotate_x = data->scale_rad;
	data->rotate_y = data->scale_rad;
	data->rotate_z = data->scale_rad;
	rotate_y_axis(data);
	rotate_x_axis(data);
	rotate_z_axis(data);
}

void	rotate_yxz_axis_minus(t_data *data)
{
	data->rotate_x = -data->scale_rad;
	data->rotate_y = -data->scale_rad;
	data->rotate_z = -data->scale_rad;
	rotate_y_axis(data);
	rotate_x_axis(data);
	rotate_z_axis(data);
}
