/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   plane_rotate_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lakdogan <lakdogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 21:57:34 by lakdogan          #+#    #+#             */
/*   Updated: 2025/02/22 08:25:01 by lakdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../inc/fdf_bonus.h"

/*
 * Computes the isometric projection of a 3D point (x, y, z)
 * onto a 2D screen, returning the projected X coordinate.
 *
 * Formula:
 *   screen_x = (x - y) * cos(30°)
 *
 * Explanation:
 *   - This transformation converts the 3D X and Y coordinates
 *     into a **flattened** X position for rendering in an
 *     isometric view.
 *   - The angle **30°** is used because it is the standard for
 *     isometric projection.
 *
 * Parameters:
 *   x: The original x-coordinate in 3D space.
 *   y: The original y-coordinate in 3D space.
 *
 * Returns:
 *   The transformed screen_x coordinate.
 */
float	ft_isometric_x_rotate(float x, float y, t_data *data)
{
	float	screen_x;

	ft_rotate_xy(&x, &y, data->rotate_on_plane);
	screen_x = (x - y) * cos(21.9 * M_PI / 180);
	return (screen_x);
}

/*
 * Computes the isometric projection of a 3D point (x, y, z)
 * onto a 2D screen, returning the projected Y coordinate.
 *
 * Formula:
 *   screen_y = (x + y) * sin(30°) - z
 *
 * Explanation:
 *   - This transformation converts the 3D X, Y, and Z coordinates
 *     into a **flattened** Y position for rendering in an
 *     isometric view.
 *   - The **z** component is subtracted to create the depth illusion.
 *
 * Parameters:
 *   x: The original x-coordinate in 3D space.
 *   y: The original y-coordinate in 3D space.
 *   z: The original z-coordinate in 3D space.
 *
 * Returns:
 *   The transformed screen_y coordinate.
 */
float	ft_isometric_y_rotate(float x, float y, float z, t_data *data)
{
	float	screen_y;

	ft_rotate_xy(&x, &y, data->rotate_on_plane);
	screen_y = (x + y) * sin(21.9 * M_PI / 180) - z;
	return (screen_y);
}
