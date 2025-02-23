/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_line_processing.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lakdogan <lakdogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 17:46:22 by lakdogan          #+#    #+#             */
/*   Updated: 2025/01/26 22:27:36 by lakdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../../../inc/fdf.h"

static int	ft_are_lines_allocated(t_data *data)
{
	size_t	i;

	if (data->line_reader.lines == NULL)
		return (0);
	i = 0;
	while (i < data->line_reader.line_count)
	{
		if (data->line_reader.lines[i] == NULL)
			return (0);
		i++;
	}
	return (1);
}

static void	ft_update_string_counts(t_data *data)
{
	if (data->line_reader.string_length > 0)
	{
		data->line_reader.string_count++;
		if (data->line_reader.string_count
			!= data->line_reader.max_string_count)
			data->line_reader.max_string_count
				= data->line_reader.string_count;
	}
}

static void	ft_process_line(t_data *data, size_t *i, size_t *j)
{
	while (data->line_reader.lines[*i][*j] != '\0')
	{
		ft_skip_separator(data, i, j);
		data->line_reader.string_length
			= ft_count_string_characters(data, i,
				j);
		ft_update_string_counts(data);
	}
}

static void	ft_iterate_in_the_line(t_data *data)
{
	size_t	i;
	size_t	j;
	size_t	init;

	init = 0;
	i = 0;
	if (ft_are_lines_allocated(data) == 0)
		return ;
	while (i < data->line_reader.line_count)
	{
		data->line_reader.string_count = 0;
		j = 0;
		ft_process_line(data, &i, &j);
		if (init != 1)
		{
			data->line_reader.first_string_count
				= data->line_reader.string_count;
			init = 1;
		}
		validate_gridsize(data);
		i++;
	}
}

void	get_statistics(t_data *data)
{
	ft_iterate_in_the_line(data);
}
