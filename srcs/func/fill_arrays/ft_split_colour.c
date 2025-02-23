/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_colour.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lakdogan <lakdogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 23:51:32 by lakdogan          #+#    #+#             */
/*   Updated: 2025/02/17 21:40:19 by lakdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../../../inc/fdf.h"

// Process characters until null-terminator is encountered
// Null terminate the string in carr
// Clear characters before delimiter in arr
// Update values back to the data structure after processing
static void	process_chars(t_data *data)
{
	size_t	k;
	size_t	m;
	size_t	l;
	size_t	n;

	k = data->var.k;
	m = data->var.m;
	l = data->var.l;
	n = data->var.n;
	while (data->line_reader.arr[data->var.i][data->var.j][k] != '\0'
		&& k < ft_strlen(data->line_reader.arr[data->var.i][data->var.j]))
	{
		l++;
		data->line_reader.carr[data->var.i][data->var.j][m]
			= data->line_reader.arr[data->var.i][data->var.j][k];
		m++;
		k++;
		if (data->line_reader.arr[data->var.i][data->var.j][k] == '\0')
		{
			data->line_reader.carr[data->var.i][data->var.j][m] = '\0';
			while (l-- && k > n)
				data->line_reader.arr[data->var.i][data->var.j][k - n++
					- 1] = '\0';
		}
	}
}

// Check for delimiter and invoke the process_chars function
static void	check_for_delimiter(t_data *data)
{
	if (data->line_reader.arr[data->var.i][data->var.j][data->var.k]
		== data->var.del)
	{
		data->var.k++;
		process_chars(data);
	}
}

// Main loop to iterate through characters in the current string
// Exit if we reach the end of the string
static void	iterate_chars(t_data *data)
{
	size_t	k;
	size_t	string_length;

	k = 0;
	string_length = ft_strlen(data->line_reader.arr[data->var.i][data->var.j]);
	while (k < string_length)
	{
		data->var.k = k;
		check_for_delimiter(data);
		k++;
	}
}

// Iterate through the strings in the current line
static void	iterate_strings(t_data *data)
{
	size_t	j;

	j = 0;
	while (j < data->line_reader.max_string_count)
	{
		data->var.j = j;
		iterate_chars(data);
		j++;
	}
}

// Main function to process all lines in the 3D array
// Process each string in the current line
void	ft_split_colour(t_data *data)
{
	size_t	i;

	i = 0;
	while (i < data->line_reader.line_count)
	{
		data->var.i = i;
		iterate_strings(data);
		i++;
	}
}
