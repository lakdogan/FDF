/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   allocate_colour.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lakdogan <lakdogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 18:48:27 by lakdogan          #+#    #+#             */
/*   Updated: 2025/02/17 22:00:40 by lakdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../../../inc/fdf.h"

/* Allocate memory for the second dimension (2D array) of int ***mapcol */
static void	allocate_int_second_dimension(t_data *data)
{
	init_struct_v(data);
	while (data->v.i < data->line_reader.line_count)
	{
		if (data->line_reader.line_count > data->line_reader.max_string_count)
			data->map.mapcol[data->v.i] = malloc((data->line_reader.line_count)
					* sizeof(int *));
		else
			data->map.mapcol[data->v.i]
				= malloc((data->line_reader.max_string_count)
					* sizeof(int *));
		if (!data->map.mapcol[data->v.i])
			handle_error(data, "Memory allocation failed for mapcol array.");
		data->v.j = 0;
		while (data->v.j < data->line_reader.max_string_count)
		{
			data->map.mapcol[data->v.i][data->v.j] = ft_calloc((data->map.mod
						+ data->map.org), sizeof(int));
			if (!data->map.mapcol[data->v.i][data->v.j])
				handle_error(data, "Memory allocation failed for a int array.");
			data->v.j++;
		}
		data->v.i++;
	}
}

/* Allocate memory for the 3D array of int ***mapcol */
// Allocate top-level dimension
// Allocates the 2D arrays (second dimension)
static int	***allocate_mapcol_index_array(t_data *data)
{
	data->map.mapcol = malloc((data->line_reader.line_count) * sizeof(int **));
	if (!data->map.mapcol)
		handle_error(data, "Memory allocation failed for mapcol array.");
	allocate_int_second_dimension(data);
	return (data->map.mapcol);
}

/* Allocate memory for the entire dynamic 3D array mapcol */
int	ft_allocate_mapcol(t_data *data)
{
	data->map.mapcol = allocate_mapcol_index_array(data);
	if (!data->map.mapcol)
	{
		ft_printf("Memory allocation failed.\n");
		return (0);
	}
	return (1);
}
