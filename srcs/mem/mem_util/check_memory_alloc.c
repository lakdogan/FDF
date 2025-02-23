/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_memory_alloc.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lakdogan <lakdogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 11:33:23 by lakdogan          #+#    #+#             */
/*   Updated: 2025/01/26 09:35:04 by lakdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../../../inc/fdf.h"

void	*check_memory_allocation(void *ptr)
{
	if (!ptr)
	{
		perror("Memory allocation failed!");
		return (NULL);
	}
	return (ptr);
}

void	*check_memory_reallocation(void *ptr)
{
	if (!ptr)
	{
		perror("Failed to reallocate memory!");
		return (NULL);
	}
	return (ptr);
}
