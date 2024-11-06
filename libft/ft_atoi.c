/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboukhmi <aboukhmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 09:33:19 by aboukhmi          #+#    #+#             */
/*   Updated: 2024/11/05 17:52:17 by aboukhmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_signe(int signe)
{
	if (signe < 0)
		return (0);
	else
		return ((-1));
}

int	ft_atoi(const char *str)
{
	long long int	prev;
	long long int	result;
	int				sign;
	int				i;

	prev = 0;
	result = 0;
	sign = 1;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			sign *= -1;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		prev = result;
		result = (result * 10) + (sign * (str[i] - '0'));
		if ((result / 10) != prev)
			return (check_signe(sign));
		i++;
	}
	return ((int)(result));
}
