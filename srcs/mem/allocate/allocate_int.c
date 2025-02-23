/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   allocate_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lakdogan <lakdogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 18:46:53 by lakdogan          #+#    #+#             */
/*   Updated: 2025/01/30 17:30:10 by lakdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../../../inc/fdf.h"

static int	*allocate_int(t_data *data)
{
	int	*new_ptr;

	new_ptr = ft_calloc((data->line_reader.max_string_length + 1), sizeof(int));
	if (!new_ptr)
		handle_error(data, "Memory allocation for int failed.");
	return (new_ptr);
}

int	**allocate_int_list(t_data *data)
{
	int		**new_ptr;
	size_t	i;

	new_ptr = malloc((data->line_reader.max_string_count + 1) * sizeof(int *));
	if (!new_ptr)
		handle_error(data, "Memory allocation for the line array failed.");
	i = 0;
	while (i < data->line_reader.max_string_count)
	{
		new_ptr[i] = allocate_int(data);
		if (!new_ptr[i])
			handle_error(data, "Memory allocation failed for a int array.");
		i++;
	}
	new_ptr[data->line_reader.max_string_count] = NULL;
	return (new_ptr);
}

int	***allocate_int_index(t_data *data)
{
	int	***new_ptr;

	new_ptr = malloc((data->line_reader.line_count) * sizeof(int **));
	if (!new_ptr)
		handle_error(data,
			"Memory allocation failed for the list of int arrays.");
	return (new_ptr);
}
