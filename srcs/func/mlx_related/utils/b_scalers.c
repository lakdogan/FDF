/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_scalers.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lakdogan <lakdogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 05:53:21 by lakdogan          #+#    #+#             */
/*   Updated: 2025/02/22 05:53:40 by lakdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../../../../inc/fdf.h"

void	scale_six(t_data *data, float *scale_x, float *scale_y)
{
	*scale_x = (float)data->graphics.win_width / data->map.size / 6;
	*scale_y = (float)data->graphics.win_height / data->map.capacity / 6;
}

void	scale_seven(t_data *data, float *scale_x, float *scale_y)
{
	*scale_x = (float)data->graphics.win_width / data->map.size / 2;
	*scale_y = (float)data->graphics.win_height / data->map.capacity / 2;
}

void	scale_eight(t_data *data, float *scale_x, float *scale_y)
{
	*scale_x = (float)data->graphics.win_width / data->map.size / 3.2;
	*scale_y = (float)data->graphics.win_height / data->map.capacity / 3.2;
}

void	scale_nine(t_data *data, float *scale_x, float *scale_y)
{
	*scale_x = (float)data->graphics.win_width / data->map.size / 1.75;
	*scale_y = (float)data->graphics.win_height / data->map.capacity / 1.75;
}

void	scale_ten(t_data *data, float *scale_x, float *scale_y)
{
	*scale_x = (float)data->graphics.win_width / data->map.size / 7;
	*scale_y = (float)data->graphics.win_height / data->map.capacity / 7;
}
