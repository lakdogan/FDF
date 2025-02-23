/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_map_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lakdogan <lakdogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 18:39:38 by lakdogan          #+#    #+#             */
/*   Updated: 2025/02/22 08:23:29 by lakdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../inc/fdf_bonus.h"

void	move_in_x_plus(t_data *data)
{
	data->move_x += 1 + data->movementscaler;
	fill_mapv(data);
	transform_isometric(data);
}

void	move_in_x_minus(t_data *data)
{
	data->move_x -= 1 + data->movementscaler;
	fill_mapv(data);
	transform_isometric(data);
}

void	move_in_y_plus(t_data *data)
{
	data->move_y += 1 + data->movementscaler;
	fill_mapv(data);
	transform_isometric(data);
}

void	move_in_y_minus(t_data *data)
{
	data->move_y -= 1 + data->movementscaler;
	fill_mapv(data);
	transform_isometric(data);
}
