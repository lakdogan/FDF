/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_lines_to_arr.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lakdogan <lakdogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 03:14:03 by lakdogan          #+#    #+#             */
/*   Updated: 2025/01/26 22:37:01 by lakdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../../../inc/fdf.h"

/* for instering the strings into the array
	- second dimension of ***arr */
void	ft_split_lines_to_arr(t_data *data)
{
	int	i;

	i = 0;
	while (data->line_reader.lines[i] != NULL)
	{
		data->line_reader.arr[i]
			= ft_split(data->line_reader.lines[i], ' ');
		if (data->line_reader.arr[i] == NULL)
		{
			free_lines(data);
			return ;
		}
		i++;
	}
}
