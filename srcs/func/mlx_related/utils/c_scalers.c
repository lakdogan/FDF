/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_scalers.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lakdogan <lakdogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 05:54:09 by lakdogan          #+#    #+#             */
/*   Updated: 2025/02/22 05:54:33 by lakdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../../../../inc/fdf.h"

void	scale_eleven(t_data *data, float *scale_x, float *scale_y)
{
	*scale_x = (float)data->graphics.win_width / data->map.size / 8;
	*scale_y = (float)data->graphics.win_height / data->map.capacity / 8;
}

void	scale_twelve(t_data *data, float *scale_x, float *scale_y)
{
	*scale_x = (float)data->graphics.win_width / data->map.size / 3.5;
	*scale_y = (float)data->graphics.win_height / data->map.capacity / 3.5;
}

void	scale_thirten(t_data *data, float *scale_x, float *scale_y)
{
	*scale_x = (float)data->graphics.win_width / data->map.size / 3.5;
	*scale_y = (float)data->graphics.win_height / data->map.capacity / 3.5;
}

void	scale_fourteen(t_data *data, float *scale_x, float *scale_y)
{
	*scale_x = (float)data->graphics.win_width / data->map.size / 4;
	*scale_y = (float)data->graphics.win_height / data->map.capacity / 4;
}

void	scale_fifteen(t_data *data, float *scale_x, float *scale_y)
{
	*scale_x = (float)data->graphics.win_width / data->map.size / 1.75;
	*scale_y = (float)data->graphics.win_height / data->map.capacity / 1.75;
}
