/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keyhooks_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lakdogan <lakdogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 21:21:01 by lakdogan          #+#    #+#             */
/*   Updated: 2025/02/22 08:21:57 by lakdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../inc/fdf_bonus.h"

// Function to handle key presses
int	key_hook(int keycode, void *param)
{
	t_data	*data;

	data = (t_data *)param;
	rotate_xy_twod(keycode, data);
	rotate_xy_twod_neg(keycode, data);
	switch_to_parallel_view(data, keycode);
	switch_to_invert_color(data, keycode);
	automation_switches(data, keycode);
	keyhook_reset_all_automatic(data, keycode);
	change_pattern(data, keycode);
	manual_rotation_collection(data, keycode);
	keyhook_change_radians(data, keycode);
	keyhook_reset_map(data, keycode);
	keyhook_manuel_zoom(data, keycode);
	auto_zoom_boost(data, keycode);
	keyhook_clean_exit(data, keycode);
	auto_zoom(data);
	return (0);
}

int	manual_rotation_collection(t_data *data, int keycode)
{
	keyhook_x_axis_rotations(data, keycode);
	keyhook_y_axis_rotations(data, keycode);
	keyhook_z_axis_rotations(data, keycode);
	keyhook_xy_axis_rotations(data, keycode);
	keyhook_yx_axis_rotations(data, keycode);
	keyhook_xz_rotations(data, keycode);
	keyhook_zx_rotations(data, keycode);
	keyhook_xyz_rotations(data, keycode);
	keyhook_xzy_rotations(data, keycode);
	keyhook_yxz_rotations(data, keycode);
	keyhook_yzx_rotations(data, keycode);
	keyhook_zxy_rotations(data, keycode);
	keyhook_zyx_rotations(data, keycode);
	return (0);
}
