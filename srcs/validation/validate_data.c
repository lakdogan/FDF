/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_data.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lakdogan <lakdogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 02:18:37 by lakdogan          #+#    #+#             */
/*   Updated: 2025/01/26 14:38:04 by lakdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../../inc/fdf.h"

void	validate_data(t_data *data)
{
	if (data->line_reader.line_count == 0)
		handle_error(data,
			"\nERROR: Corrupted map!\nThe map is missing data.\n\n");
	if (data->line_reader.max_string_count == 0)
		handle_error(data, "There are no strings to allocate.");
	if (data->line_reader.max_string_length == 0)
		handle_error(data, "The size of the string is missing.");
}
