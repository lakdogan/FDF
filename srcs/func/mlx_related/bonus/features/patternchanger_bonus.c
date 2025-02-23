/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   patternchanger_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lakdogan <lakdogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 16:15:34 by lakdogan          #+#    #+#             */
/*   Updated: 2025/02/22 08:21:34 by lakdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../inc/fdf_bonus.h"

int	change_pattern(t_data *data, int keycode)
{
	if (keycode == KEYZERO)
	{
		if (data->patternchanger == 0)
			data->patternchanger = 1;
		else if (data->patternchanger == 1)
			data->patternchanger = 2;
		else
			data->patternchanger = 0;
	}
	return (0);
}
