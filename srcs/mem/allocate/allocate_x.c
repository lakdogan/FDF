/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   allocate_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lakdogan <lakdogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 04:22:50 by lakdogan          #+#    #+#             */
/*   Updated: 2025/02/04 22:22:32 by lakdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../../../inc/fdf.h"

/* Allocate memory for the second dimension of dynamic 3d pointer float array */
static void	allocate_float_x_second_dimension(t_data *data)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (i < (data->map.mod + data->map.org))
	{
		data->map.x[i] = malloc(data->line_reader.line_count
				* sizeof(float *));
		if (!data->map.x[i])
			handle_error(data, "Memory allocation failed for x array.");
		j = 0;
		while (j < data->line_reader.line_count)
		{
			data->map.x[i][j] = ft_calloc(data->line_reader.max_string_count,
					sizeof(float));
			if (!data->map.x[i][j])
				handle_error(data,
					"Memory allocation failed for a float array.");
			j++;
		}
		i++;
	}
}

/* Allocate memory for the first dimension of dynamic 3d pointer float array
data.map.x[mod][line_count][max_string_count] */
int	ft_allocate_x(t_data *data)
{
	data->map.x = malloc((data->map.mod + data->map.org) * sizeof(float **));
	if (!data->map.x)
	{
		ft_printf("Memory allocation failed for the list of float arrays.\n");
		return (0);
	}
	allocate_float_x_second_dimension(data);
	return (1);
}
