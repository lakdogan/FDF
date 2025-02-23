/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   allocate_z.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lakdogan <lakdogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 11:03:33 by lakdogan          #+#    #+#             */
/*   Updated: 2025/02/04 22:23:22 by lakdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../../../inc/fdf.h"

/* Allocate memory for the second dimension
of dynamic 3d pointer float array z */
static void	allocate_float_z_second_dimension(t_data *data)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (i < (data->map.mod + data->map.org))
	{
		data->map.z[i] = malloc(data->line_reader.line_count
				* sizeof(float *));
		if (!data->map.z[i])
			handle_error(data, "Memory allocation failed for z array.");
		j = 0;
		while (j < data->line_reader.line_count)
		{
			data->map.z[i][j] = ft_calloc(data->line_reader.max_string_count,
					sizeof(float));
			if (!data->map.z[i][j])
				handle_error(data,
					"Memory allocation failed for a float array.");
			j++;
		}
		i++;
	}
}

/* Allocate memory for the first dimension
of dynamic 3d pointer float array
data.map.z[map.mod][line_count][max_string_count] */
int	ft_allocate_z(t_data *data)
{
	data->map.z = malloc((data->map.mod + data->map.org) * sizeof(float **));
	if (!data->map.z)
	{
		ft_printf("Memory allocation failed for the list of float arrays.\n");
		return (0);
	}
	allocate_float_z_second_dimension(data);
	return (1);
}
