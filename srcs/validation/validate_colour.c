/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_colour.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lakdogan <lakdogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 17:33:02 by lakdogan          #+#    #+#             */
/*   Updated: 2025/01/26 22:04:22 by lakdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../../inc/fdf.h"

int	is_hex_char(char c)
{
	return ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || (c >= 'A'
			&& c <= 'F'));
}

int	validate_hexa_prefix(t_data *data)
{
	if (data->line_reader.carr[data->v.i][data->v.j][data->v.k] == '0'
		&& data->line_reader.carr[data->v.i][data->v.j][data->v.k + 1] == '\0')
	{
		print_error_hex_prefix(data);
	}
	if (data->line_reader.carr[data->v.i][data->v.j][data->v.k] == '0'
		&& data->line_reader.carr[data->v.i][data->v.j][data->v.k + 1] != 'x')
	{
		print_error_hex_prefix(data);
	}
	if (data->line_reader.carr[data->v.i][data->v.j][data->v.k] != '0'
		&& data->line_reader.carr[data->v.i][data->v.j][data->v.k] != '\0')
	{
		print_error_hex_prefix(data);
	}
	data->v.k++;
	if (data->line_reader.carr[data->v.i][data->v.j][data->v.k] != 'x'
		&& data->line_reader.carr[data->v.i][data->v.j][data->v.k] != '\0')
	{
		print_error_hex_value(data);
	}
	data->v.k++;
	return (1);
}

int	itterate_hexa_prefix(t_data *data)
{
	data->v.k = 0;
	while (data->v.k < data->v.hexprefix)
	{
		if (!(validate_hexa_prefix(data)))
			return (0);
		if (data->line_reader.carr[data->v.i][data->v.j][data->v.k] == '\0'
			&& data->line_reader.carr[data->v.i][data->v.j][data->v.k
			- 1] == 'x')
		{
			print_error_hex_value(data);
			return (0);
		}
	}
	return (1);
}

int	itterate_strings(t_data *data)
{
	data->v.hexprefix = 2;
	data->v.j = 0;
	while (data->v.j < data->line_reader.max_string_count)
	{
		if (!(itterate_hexa_prefix(data)))
			return (0);
		data->v.l = 0;
		while (data->line_reader.carr[data->v.i][data->v.j][data->v.k] != '\0'
			&& data->line_reader.carr[data->v.i][data->v.j][data->v.k] != '\n')
		{
			if (!is_hex_char
				(data->line_reader.carr[data->v.i][data->v.j][data->v.k]))
			{
				print_error_hex_value(data);
				return (0);
			}
			data->v.k++;
		}
		data->v.j++;
	}
	return (1);
}

int	validate_colour(t_data *data)
{
	data->v.i = 0;
	while (data->v.i < data->line_reader.line_count)
	{
		if (!(itterate_strings(data)))
			return (0);
		data->v.i++;
	}
	return (1);
}
