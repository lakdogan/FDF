/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   allocate_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lakdogan <lakdogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 20:14:19 by lakdogan          #+#    #+#             */
/*   Updated: 2025/02/19 03:13:29 by lakdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../../../inc/fdf.h"

float	**allocate_mem_for_map(t_data *data)
{
	float	**new_ptr;
	size_t	i;

	new_ptr = malloc(data->map.capacity * data->map.size * sizeof(float *));
	if (!new_ptr)
		return (NULL);
	i = 0;
	while (i < data->map.size * data->map.capacity)
	{
		new_ptr[i] = ft_calloc(4, sizeof(float));
		if (!new_ptr[i])
		{
			while (i--)
				free(new_ptr[i]);
			free(new_ptr);
			return (NULL);
		}
		i++;
	}
	return (new_ptr);
}

/* allocate memory for the map data
 * mapv[capacity][size], each index
 * of size 0 to 3, and the value
 * is saved as x, y, z, color
 * as float numbers.
 */
int	allocate_map(t_data *data)
{
	data->map.size = data->line_reader.max_string_count;
	data->map.capacity = data->line_reader.line_count;
	data->mapv = allocate_mem_for_map(data);
	if (!data->mapv)
	{
		ft_printf("Memory allocation for map data failed!");
		return (0);
	}
	return (1);
}
