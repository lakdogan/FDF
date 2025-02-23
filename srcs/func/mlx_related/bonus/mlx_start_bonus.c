/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx_start_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lakdogan <lakdogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 21:52:11 by lakdogan          #+#    #+#             */
/*   Updated: 2025/02/22 20:50:45 by lakdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./inc/fdf_bonus.h"

void	create_image_bon(t_data *data)
{
	calculate_optimal_scale(data);
	scale_map(data);
	transform_isometric(data);
	find_offset(data);
	print_features(data);
	print_mapv_mlx(data);
}

int	run_mlx_bon(t_data *data)
{
	int	width;
	int	height;

	reset_radians(data);
	init_graphic_data(data);
	init_mlx(data);
	init_mlx_win(data);
	create_image_bon(data);
	data->control_banner = mlx_xpm_file_to_image(data->graphics.mlx_ptr,
			"controls.xpm", &width, &height);
	if (!data->control_banner)
	{
		mlx_clear_window(data->graphics.mlx_ptr, data->graphics.mlx_win);
		free_all_arrays(data);
		exit(EXIT_FAILURE);
	}
	mlx_put_image_to_window(data->graphics.mlx_ptr, data->graphics.mlx_win,
		data->control_banner, 1080, 880);
	mlx_key_hook(data->graphics.mlx_win, key_hook, data);
	mlx_loop_hook(data->graphics.mlx_ptr, rotate_automation, data);
	mlx_hook(data->graphics.mlx_win, 17, 0, exit_mlx, data);
	mlx_loop(data->graphics.mlx_ptr);
	return (0);
}
