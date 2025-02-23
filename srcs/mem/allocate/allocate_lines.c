/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   allocate_lines.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lakdogan <lakdogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 16:23:03 by lakdogan          #+#    #+#             */
/*   Updated: 2025/01/26 12:27:25 by lakdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../../../inc/fdf.h"

int	allocate_lines(t_data *data)
{
	size_t	new_size;
	size_t	*old_size;
	size_t	old_size_value;

	old_size_value = data->line_reader.capacity * sizeof(char *);
	old_size = &old_size_value;
	data->line_reader.capacity *= 2;
	new_size = data->line_reader.capacity * sizeof(char *);
	data->line_reader.lines = ft_realloc(data->line_reader.lines, new_size,
			old_size);
	if (check_memory_reallocation(data->line_reader.lines) == NULL)
		return (0);
	return (1);
}
