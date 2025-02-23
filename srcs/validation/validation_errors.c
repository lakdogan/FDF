/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation_errors.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lakdogan <lakdogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 19:58:02 by lakdogan          #+#    #+#             */
/*   Updated: 2025/01/26 22:01:10 by lakdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../../inc/fdf.h"

int	size_t_to_int(size_t value)
{
	if (value > (size_t)INT_MAX)
	{
		return (-1);
	}
	return ((int)value);
}

void	print_error_hex_prefix(t_data *data)
{
	int	i;
	int	j;

	i = size_t_to_int(data->v.i);
	j = size_t_to_int(data->v.j);
	ft_printf("\nERROR: Corrupted map!\nInvalid hexa code prefix: %s !\n",
		data->line_reader.carr[data->v.i][data->v.j]);
	ft_printf("In line: %i, coordinate no: %i\n\n", i + 1, j + 1);
	handle_error(data, "Please change prefix to '0x' and try again.");
}

void	print_error_hex_value(t_data *data)
{
	int	i;
	int	j;

	i = size_t_to_int(data->v.i);
	j = size_t_to_int(data->v.j);
	ft_printf("\nERROR: Corrupted map!\n Hexa value is invalid: %s !\n",
		data->line_reader.carr[data->v.i][data->v.j]);
	ft_printf("In line: %i, coordinate no: %i\n\n", i + 1, j + 1);
	handle_error(data,
		"Please change the hexa value(0 to F) and try again.");
}
