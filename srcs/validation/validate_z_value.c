/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_z_value.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lakdogan <lakdogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 20:07:05 by lakdogan          #+#    #+#             */
/*   Updated: 2025/02/17 22:04:02 by lakdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../../inc/fdf.h"

static int	is_digit_char(char c)
{
	return ((c >= '0' && c <= '9'));
}

static void	print_error_z_value(t_data *data)
{
	int	i;
	int	j;

	i = size_t_to_int(data->w.i);
	j = size_t_to_int(data->w.j);
	ft_printf("\nERROR: Corrupted map!\nInvalid z-value: %s !\n",
		data->line_reader.arr[data->w.i][data->w.j]);
	ft_printf("In line: %i, coordinate no: %i\n\n", i + 1, j + 1);
	handle_error(data,
		"Please change the x-coordinate"
		"z-value(integer numbers) and try again.\n\n");
}

static int	validate_the_digits(t_data *data)
{
	if (data->line_reader.arr[data->w.i][data->w.j][data->w.k] == '-')
	{
		if (data->w.k != 0
			|| data->line_reader.arr[data->w.i][data->w.j][data->w.k
			+ 1] == '\0')
			return (0);
	}
	else
		return (0);
	return (1);
}

static int	itterate_strings(t_data *data)
{
	data->w.hexprefix = 2;
	data->w.j = 0;
	while (data->w.j < data->line_reader.max_string_count)
	{
		data->w.k = 0;
		while (data->line_reader.arr[data->w.i][data->w.j][data->w.k] != '\0'
			&& data->line_reader.arr[data->w.i][data->w.j][data->w.k] != '\n')
		{
			if (!(is_digit_char
					(data->line_reader.arr[data->w.i][data->w.j][data->w.k])))
			{
				if (!validate_the_digits(data))
					print_error_z_value(data);
			}
			data->w.k++;
		}
		data->w.j++;
	}
	return (1);
}

int	validate_zvalue(t_data *data)
{
	data->w.i = 0;
	while (data->w.i < data->line_reader.line_count)
	{
		if (!(itterate_strings(data)))
			return (0);
		data->w.i++;
	}
	return (1);
}
