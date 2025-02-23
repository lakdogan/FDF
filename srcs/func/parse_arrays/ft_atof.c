/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lakdogan <lakdogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 20:35:45 by lakdogan          #+#    #+#             */
/*   Updated: 2025/02/19 03:07:32 by lakdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../../../inc/fdf.h"

// Skip leading whitespaces
const char	*ft_skip_leading_whitespaces(const char *str)
{
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	return (str);
}

// Handle the sign
const char	*ft_handle_sign(const char *str, int *sign)
{
	if (*str == '-')
	{
		*sign = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	return (str);
}

// Process the integer part
const char	*ft_process_integer_part(const char *str, double *result)
{
	while (*str >= '0' && *str <= '9')
		*result = *result * 10.0 + (*str++ - '0');
	return (str);
}

// Process the fractional part
const char	*ft_process_fractional_part(const char *str, double *fraction,
		double *divisor)
{
	if (*str == '.')
	{
		str++;
		while (*str >= '0' && *str <= '9')
		{
			*fraction = *fraction * 10.0 + (*str++ - '0');
			*divisor *= 10.0;
		}
	}
	return (str);
}

// Combine integer and fractional parts, apply the sign
// If the result and fraction are both 0, return just 0.0.
double	ft_atof(const char *str)
{
	double	result;
	double	fraction;
	double	divisor;
	int		sign;

	result = 0.0;
	fraction = 0.0;
	divisor = 1.0;
	sign = 1;
	str = ft_skip_leading_whitespaces(str);
	str = ft_handle_sign(str, &sign);
	str = ft_process_integer_part(str, &result);
	str = ft_process_fractional_part(str, &fraction, &divisor);
	if (result == 0.0 && fraction == 0.0)
		return (0.0);
	return (sign * (result + fraction / divisor));
}
