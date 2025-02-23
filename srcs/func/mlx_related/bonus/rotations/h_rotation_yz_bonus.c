/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   h_rotation_yz_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lakdogan <lakdogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 12:58:24 by lakdogan          #+#    #+#             */
/*   Updated: 2025/02/22 08:24:23 by lakdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../inc/fdf_bonus.h"

void	rotate_yz_axis_plus(t_data *data)
{
	data->rotate_y = data->scale_rad;
	data->rotate_z = data->scale_rad;
	rotate_y_axis(data);
	rotate_z_axis(data);
}

void	rotate_yz_axis_minus(t_data *data)
{
	data->rotate_y = -data->scale_rad;
	data->rotate_z = -data->scale_rad;
	rotate_y_axis(data);
	rotate_z_axis(data);
}
