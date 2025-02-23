/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   allocate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lakdogan <lakdogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 00:11:37 by lakdogan          #+#    #+#             */
/*   Updated: 2025/02/17 21:49:55 by lakdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../../../inc/fdf.h"

static char	*allocate_string(t_data *data)
{
	char	*new_ptr;

	new_ptr
		= ft_calloc((data->line_reader.max_string_length + 2), sizeof(char));
	if (!new_ptr)
		handle_error(data, "Memory allocation for char failed.");
	new_ptr[data->line_reader.max_string_length] = '\0';
	return (new_ptr);
}

char	**allocate_list(t_data *data)
{
	char	**new_ptr;
	size_t	i;

	new_ptr = malloc((data->line_reader.max_string_count + 1) * sizeof(char *));
	if (!new_ptr)
		handle_error(data, "Memory allocation for the line array failed.");
	i = 0;
	while (i < data->line_reader.max_string_count)
	{
		new_ptr[i] = allocate_string(data);
		if (!new_ptr[i])
			handle_error(data, "Memory allocation failed for a string.");
		i++;
	}
	new_ptr[data->line_reader.max_string_count] = NULL;
	return (new_ptr);
}

char	***allocate_index(t_data *data)
{
	char	***new_ptr;

	new_ptr = malloc((data->line_reader.line_count + 1) * sizeof(char **));
	if (!new_ptr)
		handle_error(data, "Memory allocation failed for the list.");
	new_ptr[data->line_reader.line_count] = NULL;
	return (new_ptr);
}
