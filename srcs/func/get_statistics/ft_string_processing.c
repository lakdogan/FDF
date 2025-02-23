/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_processing.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lakdogan <lakdogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 17:45:28 by lakdogan          #+#    #+#             */
/*   Updated: 2025/01/26 22:27:47 by lakdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../../../inc/fdf.h"

static int	ft_is_string_char(char c)
{
	return (c != ' ' && c != '\n' && c != '\0');
}

static int	ft_is_separator(char c)
{
	return (c == ' ' || c == '\n');
}

void	ft_skip_separator(t_data *data, size_t *i, size_t *j)
{
	while (ft_is_separator(data->line_reader.lines[*i][*j]))
		(*j)++;
}

int	ft_count_string_characters(t_data *data, size_t *i, size_t *j)
{
	size_t	string_length;

	string_length = 0;
	while (ft_is_string_char(data->line_reader.lines[*i][*j]))
	{
		string_length++;
		(*j)++;
	}
	if (string_length > data->line_reader.max_string_length)
		data->line_reader.max_string_length = string_length;
	return (string_length);
}
