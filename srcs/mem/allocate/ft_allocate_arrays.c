/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_allocate_arrays.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lakdogan <lakdogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 23:06:20 by lakdogan          #+#    #+#             */
/*   Updated: 2025/02/11 20:50:04 by lakdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../../../inc/fdf.h"

// Allocates the 2D arrays
static void	allocate_list_carr(t_data *data)
{
	size_t	i;

	i = 0;
	while (i < data->line_reader.line_count)
	{
		data->line_reader.carr[i] = allocate_list(data);
		if (data->line_reader.carr[i] == NULL)
			handle_error(data, "Memory allocation failed for list array.");
		i++;
	}
	data->line_reader.carr[data->line_reader.line_count] = NULL;
}

/* Allocate memory for the 3D array list */
static char	***allocate_index_array(t_data *data)
{
	validate_data(data);
	data->line_reader.carr = allocate_index(data);
	if (!data->line_reader.carr)
		handle_error(data, "Memory allocation failed for index array.");
	allocate_list_carr(data);
	return (data->line_reader.carr);
}

/* Allocate memory for a dynamic 3D array list */
static int	ft_allocate_list_for_carr(t_data *data)
{
	validate_data(data);
	data->line_reader.carr = allocate_index_array(data);
	if (!data->line_reader.carr)
	{
		ft_printf("Memory allocation failed.\n");
		return (0);
	}
	return (1);
}

/* function in combination with ft_split to
allocate memory for a dynamic 3d array list */
static int	ft_allocate_list_for_arr(t_data *data)
{
	size_t	i;

	i = 0;
	validate_data(data);
	data->line_reader.arr = allocate_index(data);
	if (!data->line_reader.arr)
	{
		ft_printf("Memory allocation failed.\n");
		return (0);
	}
	while (i < data->line_reader.line_count)
	{
		data->line_reader.arr[i] = NULL;
		i++;
	}
	return (1);
}

int	ft_allocate_arrays(t_data *data)
{
	if (!ft_allocate_list_for_arr(data))
		return (0);
	if (!ft_allocate_list_for_carr(data))
		return (0);
	if (!ft_allocate_mapcol(data))
		return (0);
	if (!ft_allocate_x(data))
		return (0);
	if (!ft_allocate_y(data))
		return (0);
	if (!ft_allocate_z(data))
		return (0);
	if (!allocate_map(data))
		return (0);
	return (1);
}
