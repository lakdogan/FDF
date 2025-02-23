/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lakdogan <lakdogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 16:40:15 by lakdogan          #+#    #+#             */
/*   Updated: 2025/02/17 22:03:47 by lakdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../../inc/fdf.h"

void	validate_input(t_data *data, int argc, char **argv)
{
	int	len;

	if (argc < 2)
		handle_error(data, "Too few arguments!\nUsage: fdf <filename>.fdf");
	if (argc > 2)
	{
		if (argv[1][0] == '*' && argv[2] == NULL)
			handle_error(data,
				"*.fdf detected add '\\' in front of it: \\*.fdf");
		handle_error(data, "Too many arguments!\nUsage: fdf <filename>.fdf");
	}
	len = ft_strlen(argv[1]);
	if (len < 4 || ft_strncmp(&argv[1][len - 4], ".fdf", 4) != 0)
		handle_error(data,
			"The map file must have a .fdf"
			" extension!\nUsage: fdf <filename>.fdf");
}
