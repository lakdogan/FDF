/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_map_c.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lakdogan <lakdogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 19:00:22 by lakdogan          #+#    #+#             */
/*   Updated: 2025/02/17 21:11:46 by lakdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../../../inc/fdf.h"

// Shift left by 4 bits (multiply by 16)
// Convert character to integer
// Convert hex letter to integer (A=10, B=11, etc.)
// Convert hex letter to integer (a=10, b=11, etc.)
static int	hex_to_int(const char *hex)
{
	int	result;
	int	i;

	result = 0;
	i = 0;
	while (hex[i] != '\0')
	{
		result *= 16;
		if (hex[i] >= '0' && hex[i] <= '9')
		{
			result += hex[i] - '0';
		}
		else if (hex[i] >= 'A' && hex[i] <= 'F')
		{
			result += hex[i] - 'A' + 10;
		}
		else if (hex[i] >= 'a' && hex[i] <= 'f')
		{
			result += hex[i] - 'a' + 10;
		}
		i++;
	}
	return (result);
}

static void	parse_the_hexstrings(t_data *data)
{
	size_t	x;
	size_t	y;
	size_t	i;
	size_t	j;

	i = data->v.i;
	j = data->v.j;
	y = data->v.y;
	x = 0;
	while (data->line_reader.carr[i][j] != NULL)
	{
		if (data->line_reader.carr[i][j][0] != '\0')
			data->v.color = hex_to_int(data->line_reader.carr[i][j]);
		else
			data->v.color = 16777215;
		data->map.mapcol[y][x][0] = data->v.color;
		j++;
		x++;
	}
}

// Initialize the structure
// Iterate over the first dimension (i)
// Iterate over the second dimension (j)
// Iterate over the third dimension (k)
// Convert the entire string at the current position from hex into a int
// Store the color in the first index of the third dimension (k = 0)
// Mark the end of the third dimension (k) with -1000000
// Terminate the second dimension (j) with NULL
// Terminate the first dimension (i) with NULL
void	fill_map_colour(t_data *data)
{
	init_struct_v(data);
	if (data->line_reader.carr == NULL)
		return ;
	data->v.y = 0;
	while (data->line_reader.carr[data->v.i] != NULL)
	{
		data->v.j = 0;
		parse_the_hexstrings(data);
		data->v.i++;
		data->v.y++;
	}
	free_lines_carr(data);
}
