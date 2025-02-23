/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handler.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lakdogan <lakdogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 00:12:47 by lakdogan          #+#    #+#             */
/*   Updated: 2025/01/26 21:57:24 by lakdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../../../inc/fdf.h"

/* error handling */
// free all alocated mem
// print error message
// close opened file
// instant exit as failure
void	handle_error(t_data *data, const char *msg)
{
	free_all_arrays(data);
	ft_printf("\n%s\n\n", msg);
	close_file(data);
	exit(EXIT_FAILURE);
}
