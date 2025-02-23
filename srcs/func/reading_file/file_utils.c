/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lakdogan <lakdogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 10:21:31 by lakdogan          #+#    #+#             */
/*   Updated: 2025/02/21 06:47:01 by lakdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../../../inc/fdf.h"

int	open_file(const char *filename)
{
	int	fd;

	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		perror("Error opening file!");
		return (-1);
	}
	ft_printf("File opened successfully!\n");
	return (fd);
}

int	close_file(t_data *data)
{
	if (close(data->line_reader.fd) < 0)
	{
		perror("Error closing file!");
		return (1);
	}
	ft_printf("File closed successfully!\n");
	return (0);
}

void	get_map_name(t_data *data, const char *mapname)
{
	size_t	slen;
	size_t	i;

	i = 0;
	slen = ft_strlen(mapname);
	data->line_reader.mapname = malloc(slen + 1 * sizeof(char));
	while (mapname[i] != '\0')
	{
		data->line_reader.mapname[i] = mapname[i];
		i++;
	}
	data->line_reader.mapname[i] = '\0';
}
