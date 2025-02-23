/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   allocate_y.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lakdogan <lakdogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 04:23:06 by lakdogan          #+#    #+#             */
/*   Updated: 2025/02/04 22:02:44 by lakdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../../../inc/fdf.h"

/* Allocate memory for the first and second dimension of **y */
float	**allocate_y_float_mod(t_data *data)
{
	float	**new_ptr;
	size_t	i;

	new_ptr = malloc((data->map.mod + data->map.org) * sizeof(float *));
	if (!new_ptr)
		handle_error(data, "Memory allocation for the line array failed.");
	i = 0;
	while (i < (data->map.mod + data->map.org))
	{
		new_ptr[i] = ft_calloc(data->line_reader.line_count, sizeof(float));
		if (!new_ptr[i])
			handle_error(data, "Memory allocation failed for a float array.");
		i++;
	}
	return (new_ptr);
}

/* Allocate memory for the dynamic 2D array
data.map.y[data.map.mod][data.line_reader.line_count] */
int	ft_allocate_y(t_data *data)
{
	data->map.y = allocate_y_float_mod(data);
	return (1);
}
