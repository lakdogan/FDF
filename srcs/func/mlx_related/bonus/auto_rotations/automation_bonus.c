/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   automation_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lakdogan <lakdogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 02:45:00 by lakdogan          #+#    #+#             */
/*   Updated: 2025/02/22 08:20:12 by lakdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../inc/fdf_bonus.h"

int	rotate_automation(void *param)
{
	t_data	*data;

	data = (t_data *)param;
	auto_rotation_collection(data);
	auto_zoom(data);
	zoom_booster(data);
	auto_move_in_x(data);
	auto_move_in_y(data);
	invert_color(data);
	return (0);
}

int	auto_rotation_collection(t_data *data)
{
	auto_rotate_x(data);
	auto_rotate_y(data);
	auto_rotate_z(data);
	auto_rotate_xy(data);
	auto_rotate_yx(data);
	auto_rotate_xz(data);
	auto_rotate_zx(data);
	auto_rotate_yz(data);
	auto_rotate_zy(data);
	auto_rotate_xyz(data);
	auto_rotate_xzy(data);
	auto_rotate_yxz(data);
	auto_rotate_yzx(data);
	auto_rotate_zxy(data);
	auto_rotate_zyx(data);
	return (0);
}

int	automation_switches(t_data *data, int keycode)
{
	switch_ten(data, keycode);
	switch_eleven(data, keycode);
	auto_rotate_in_y_axis(data, keycode);
	auto_rotate_in_x_axis(data, keycode);
	auto_rotate_in_z_axis(data, keycode);
	auto_rotate_in_xy(data, keycode);
	auto_rotate_in_yx(data, keycode);
	auto_rotate_in_xz(data, keycode);
	auto_rotate_in_zx(data, keycode);
	auto_rotate_in_yz(data, keycode);
	auto_rotate_in_zy(data, keycode);
	auto_rotate_in_xyz(data, keycode);
	auto_rotate_in_xzy(data, keycode);
	auto_rotate_in_yxz(data, keycode);
	auto_rotate_in_yzx(data, keycode);
	auto_rotate_in_zxy(data, keycode);
	auto_rotate_in_zyx(data, keycode);
	return (0);
}
