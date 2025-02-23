/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lakdogan <lakdogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 17:09:42 by lakdogan          #+#    #+#             */
/*   Updated: 2025/02/19 03:18:30 by lakdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../../../../inc/fdf.h"

int	exit_mlx(void *param)
{
	t_data	*data;

	data = (t_data *)param;
	mlx_destroy_window(data->graphics.mlx_ptr, data->graphics.mlx_win);
	free_all_arrays(data);
	exit(0);
}

int	keyhook_clean_exit(t_data *data, int keycode)
{
	if (keycode == ESCAPE)
	{
		free_all_arrays(data);
		mlx_clear_window(data->graphics.mlx_ptr, data->graphics.mlx_win);
		exit(0);
	}
	return (0);
}
