/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lakdogan <lakdogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 14:29:07 by lakdogan          #+#    #+#             */
/*   Updated: 2025/02/22 13:45:46 by lakdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./inc/fdf_bonus.h"

int	main(int argc, char **argv)
{
	t_data	data;

	init_all_structs_bon(&data);
	validate_input(&data, argc, argv);
	get_map_name(&data, argv[1]);
	data.line_reader.fd = open_file(argv[1]);
	if (data.line_reader.fd < 0)
		return (-1);
	if (!(ft_read_lines(&data)))
		handle_error(&data, "Failed to read the lines");
	get_statistics(&data);
	if (!(manage_arrays(&data)))
	{
		free_all_arrays(&data);
		return (0);
	}
	if (close_file(&data) < 0)
		return (-1);
	run_mlx_bon(&data);
	free_all_arrays(&data);
	return (0);
}
