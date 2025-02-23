/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_gridsize.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lakdogan <lakdogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 22:18:25 by lakdogan          #+#    #+#             */
/*   Updated: 2025/01/26 22:26:37 by lakdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../../inc/fdf.h"

void	validate_gridsize(t_data *data)
{
	if (data->line_reader.max_string_count
		!= data->line_reader.first_string_count)
		handle_error(data,
			"ERROR: Corrupted MAP FILE! The y-coordinates "
			"have different amount of x-coordinates!");
	if (data->line_reader.string_count == 0)
		handle_error(data,
			"ERROR: Corrupted MAP FILE!"
			" Please remove the empty rows!");
}
