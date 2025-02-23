/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_scalers.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lakdogan <lakdogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 05:52:09 by lakdogan          #+#    #+#             */
/*   Updated: 2025/02/22 05:53:07 by lakdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../../../../inc/fdf.h"

void	scale_one(t_data *data, float *scale_x, float *scale_y)
{
	*scale_x = (float)data->graphics.win_width / data->map.size / 5;
	*scale_y = (float)data->graphics.win_height / data->map.capacity / 5;
}

void	scale_two(t_data *data, float *scale_x, float *scale_y)
{
	*scale_x = (float)data->graphics.win_width / data->map.size / 12;
	*scale_y = (float)data->graphics.win_height / data->map.capacity / 12;
}

void	scale_three(t_data *data, float *scale_x, float *scale_y)
{
	*scale_x = (float)data->graphics.win_width / data->map.size / 3;
	*scale_y = (float)data->graphics.win_height / data->map.capacity / 3;
}

void	scale_four(t_data *data, float *scale_x, float *scale_y)
{
	*scale_x = (float)data->graphics.win_width / data->map.size / 2.25;
	*scale_y = (float)data->graphics.win_height / data->map.capacity / 2.25;
}

void	scale_five(t_data *data, float *scale_x, float *scale_y)
{
	*scale_x = (float)data->graphics.win_width / data->map.size / 1.4;
	*scale_y = (float)data->graphics.win_height / data->map.capacity / 1.4;
}
