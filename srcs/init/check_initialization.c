/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_initialization.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lakdogan <lakdogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 15:36:07 by lakdogan          #+#    #+#             */
/*   Updated: 2025/01/26 22:05:53 by lakdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../../inc/fdf.h"

int	check_initialization_mlx_ptr(t_data *data)
{
	if (!data->graphics.mlx_ptr)
	{
		ft_printf("MLX initialization failed!\n");
		return (1);
	}
	return (0);
}

int	check_initialization_mlx_win(t_data *data)
{
	if (!data->graphics.mlx_win)
	{
		ft_printf("Creating window failed!\n");
		return (1);
	}
	return (0);
}

int	check_initialization_img(t_data *data)
{
	if (!data->graphics.img)
	{
		ft_printf("Creating image failed!\n");
		return (1);
	}
	return (0);
}

int	check_initialization_img_addr(t_data *data)
{
	if (!data->graphics.img_addr)
	{
		ft_printf("Failed to get image data address!\n");
		return (1);
	}
	return (0);
}
