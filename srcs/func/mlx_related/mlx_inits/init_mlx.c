/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_mlx.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lakdogan <lakdogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 18:58:00 by lakdogan          #+#    #+#             */
/*   Updated: 2025/02/22 08:43:58 by lakdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../../../../inc/fdf.h"

// Initialize the mlx pointer
void	init_mlx(t_data *data)
{
	data->graphics.mlx_ptr = mlx_init();
	if (!data->graphics.mlx_ptr)
		handle_error(data, "MLX initialization failed.\n");
}

// Create a new window
void	init_mlx_win(t_data *data)
{
	data->graphics.mlx_win
		= mlx_new_window(data->graphics.mlx_ptr, data->graphics.win_width,
			data->graphics.win_height, "FDF");
	if (!data->graphics.mlx_win)
	{
		free(data->graphics.mlx_ptr);
		handle_error(data, "Window creation failed.\n");
	}
}

// Create a new image
void	init_mlx_new_image(t_data *data)
{
	data->graphics.img = mlx_new_image(data->graphics.mlx_ptr,
			data->graphics.img_width, data->graphics.img_height);
	if (!data->graphics.img)
	{
		mlx_destroy_window(data->graphics.mlx_ptr, data->graphics.mlx_win);
		free(data->graphics.mlx_ptr);
		handle_error(data, "Image creation failed.\n");
	}
}

// Get image data address
void	get_img_addr(t_data *data)
{
	data->graphics.img_addr = mlx_get_data_addr(data->graphics.img,
			&data->graphics.bpp, &data->graphics.size_line,
			&data->graphics.endian);
	if (!data->graphics.img_addr)
	{
		mlx_destroy_image(data->graphics.mlx_ptr, data->graphics.img);
		mlx_destroy_window(data->graphics.mlx_ptr, data->graphics.mlx_win);
		free(data->graphics.mlx_ptr);
		handle_error(data, "Failed to get image data address.\n");
	}
}

void	init_graphic_data(t_data *data)
{
	data->graphics.scale = 1;
	data->graphics.img_width = 1720;
	data->graphics.img_height = 880;
	data->graphics.win_width = 1920;
	data->graphics.win_height = 1080;
}
