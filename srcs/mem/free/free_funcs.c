/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_funcs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lakdogan <lakdogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 21:23:22 by lakdogan          #+#    #+#             */
/*   Updated: 2025/02/17 22:02:45 by lakdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../../../inc/fdf.h"

// Free the third dimension (float *)
// Free the second dimension (float **)
// Free the top-level dimension (float ***)
void	free_float_y_arr(t_data *data)
{
	size_t	i;

	if (!data->map.y)
		return ;
	i = 0;
	while (i < (data->map.mod + data->map.org))
	{
		if (data->map.y[i] != NULL)
		{
			free(data->map.y[i]);
		}
		i++;
	}
	free(data->map.y);
	data->map.y = NULL;
}

void	free_float_x_arr(t_data *data)
{
	size_t	i;
	size_t	j;

	if (!data->map.x)
		return ;
	i = 0;
	while (i < (data->map.mod + data->map.org))
	{
		if (data->map.x[i] != NULL)
		{
			j = 0;
			while (j < data->line_reader.line_count)
			{
				if (data->map.x[i][j] != NULL)
					free(data->map.x[i][j]);
				j++;
			}
			free(data->map.x[i]);
		}
		i++;
	}
	free(data->map.x);
	data->map.x = NULL;
}

void	free_float_z_arr(t_data *data)
{
	size_t	i;
	size_t	j;

	if (!data->map.z)
		return ;
	i = 0;
	while (i < (data->map.mod + data->map.org))
	{
		if (data->map.z[i] != NULL)
		{
			j = 0;
			while (j < data->line_reader.line_count)
			{
				if (data->map.z[i][j] != NULL)
					free(data->map.z[i][j]);
				j++;
			}
			free(data->map.z[i]);
		}
		i++;
	}
	free(data->map.z);
	data->map.z = NULL;
}

void	free_int_arr(t_data *data)
{
	size_t	i;
	size_t	j;

	if (!data->map.mapcol)
		return ;
	i = 0;
	while (i < data->line_reader.line_count)
	{
		j = 0;
		while (j < data->line_reader.max_string_count)
		{
			free(data->map.mapcol[i][j]);
			j++;
		}
		free(data->map.mapcol[i]);
		i++;
	}
	free(data->map.mapcol);
	data->map.mapcol = NULL;
}

void	free_mapv(t_data *data)
{
	size_t	i;

	if (!data->mapv)
		return ;
	i = 0;
	while (i < data->map.capacity * data->map.size)
	{
		if (data->mapv[i] != NULL)
			free(data->mapv[i]);
		i++;
	}
	free(data->mapv);
	data->mapv = NULL;
}
