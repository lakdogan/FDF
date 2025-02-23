/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx_start.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lakdogan <lakdogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 21:52:11 by lakdogan          #+#    #+#             */
/*   Updated: 2025/02/22 12:15:25 by lakdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../../../inc/fdf.h"

void	create_image(t_data *data)
{
	calculate_optimal_scale(data);
	scale_map(data);
	transform_isometric(data);
	find_offset(data);
	print_mapv_mlx_man(data);
}

int	key_hook_man(int keycode, void *param)
{
	t_data	*data;

	data = (t_data *)param;
	keyhook_clean_exit(data, keycode);
	return (0);
}

int	run_mlx(t_data *data)
{
	init_graphic_data(data);
	init_mlx(data);
	init_mlx_win(data);
	create_image(data);
	mlx_key_hook(data->graphics.mlx_win, key_hook_man, data);
	mlx_hook(data->graphics.mlx_win, 17, 0, exit_mlx, data);
	mlx_loop(data->graphics.mlx_ptr);
	return (0);
}
