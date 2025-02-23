/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printings_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lakdogan <lakdogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 06:45:39 by lakdogan          #+#    #+#             */
/*   Updated: 2025/02/22 08:21:39 by lakdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../inc/fdf_bonus.h"

void	edge_case(int *digits, size_t *temp)
{
	if (*temp == 0)
		*digits = 1;
	else
	{
		while (*temp > 0)
		{
			(*digits)++;
			*temp /= 10;
		}
	}
}

char	*size_t_to_string(size_t value)
{
	char	*str;
	size_t	temp;
	int		digits;

	digits = 0;
	temp = value;
	edge_case(&digits, &temp);
	str = malloc(digits + 1);
	if (!str)
		return (NULL);
	str[digits] = '\0';
	if (value == 0)
	{
		str[0] = '0';
		return (str);
	}
	while (value > 0)
	{
		str[--digits] = '0' + (value % 10);
		value /= 10;
	}
	return (str);
}

void	put_strings(t_data *data)
{
	char	*mapsize;

	mapsize = size_t_to_string(data->map.size);
	mlx_string_put(data->graphics.mlx_ptr, data->graphics.mlx_win, 120, 1030,
		15461355, mapsize);
	free(mapsize);
	mapsize = size_t_to_string(data->map.capacity);
	mlx_string_put(data->graphics.mlx_ptr, data->graphics.mlx_win, 170, 1030,
		15461355, mapsize);
	free(mapsize);
	mlx_string_put(data->graphics.mlx_ptr, data->graphics.mlx_win, 145, 1030,
		15461355, " x ");
	mlx_string_put(data->graphics.mlx_ptr, data->graphics.mlx_win, 240, 1030,
		15461355, "MAP: ");
	mlx_string_put(data->graphics.mlx_ptr, data->graphics.mlx_win, 290, 1030,
		15461355, data->line_reader.mapname);
	mlx_string_put(data->graphics.mlx_ptr, data->graphics.mlx_win, 20, 1030,
		15461355, "MAP Size: ");
}

void	print_features(t_data *data)
{
	put_strings(data);
}
