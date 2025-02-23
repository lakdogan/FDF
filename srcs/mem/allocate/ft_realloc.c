/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lakdogan <lakdogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 12:19:57 by lakdogan          #+#    #+#             */
/*   Updated: 2025/02/20 17:50:39 by lakdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../../../inc/fdf.h"

static int	validate_size_and_free(void *ptr, size_t new_size,
		size_t *allocated_size)
{
	if (new_size == 0)
	{
		free(ptr);
		*allocated_size = 0;
		return (0);
	}
	return (1);
}

static void	copy_memory_and_free(void *new_ptr, void *ptr, size_t new_size,
		size_t allocated_size)
{
	size_t	copy_size;

	if (allocated_size < new_size)
		copy_size = allocated_size;
	else
		copy_size = new_size;
	ft_memcpy(new_ptr, ptr, copy_size);
	free(ptr);
}

/* 	Validate and handle potential size issue
	Handle NULL pointer case
	Allocate new memory and check allocation success
	Copy old memory content and free the old pointer */
void	*ft_realloc(void *ptr, size_t new_size, size_t *allocated_size)
{
	void	*new_ptr;
	size_t	allocated_size_for_calloc;

	allocated_size_for_calloc = *allocated_size;
	if (!validate_size_and_free(ptr, new_size, allocated_size))
		return (NULL);
	if (ptr == NULL)
	{
		new_ptr = ft_calloc(new_size, allocated_size_for_calloc);
		return (new_ptr);
	}
	new_ptr = ft_calloc(1, new_size);
	if (check_memory_allocation(new_ptr) == NULL)
		return (NULL);
	copy_memory_and_free(new_ptr, ptr, new_size, *allocated_size);
	*allocated_size = new_size;
	return (new_ptr);
}
