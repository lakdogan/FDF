/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_arrays.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lakdogan <lakdogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 14:52:38 by lakdogan          #+#    #+#             */
/*   Updated: 2025/02/17 00:59:41 by lakdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../../../inc/fdf.h"

static int	memory_allocations(t_data *data)
{
	if (!ft_allocate_arrays(data))
		return (0);
	return (1);
}

void	fill_up_the_arrays(t_data *data)
{
	ft_split_lines_to_arr(data);
	ft_split_colour(data);
}

int	manage_arrays(t_data *data)
{
	if (!(memory_allocations(data)))
		return (0);
	fill_up_the_arrays(data);
	if (!(validate_colour(data)))
		return (0);
	if (!(validate_zvalue(data)))
		return (0);
	fill_map(data);
	fill_map_colour(data);
	fill_mapv(data);
	return (1);
}
