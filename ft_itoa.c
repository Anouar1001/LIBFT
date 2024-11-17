/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboukhmi <aboukhmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 23:55:51 by aboukhmi          #+#    #+#             */
/*   Updated: 2024/11/08 16:47:36 by aboukhmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len_n(long long int n)
{
	int	len;

	len = 0;
	if (n == 0)
		len = 1;
	if (n < 0)
	{
		len ++;
		n = -n;
	}
	while (n > 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int				len;
	long long int	temp;
	char			*ptr;

	temp = n;
	len = len_n(temp);
	ptr = (char *)malloc(len + 1);
	if (!ptr)
		return (NULL);
	ptr[len] = '\0';
	if (temp == 0)
		ptr[0] = '0';
	if (temp < 0)
	{
		ptr[0] = '-';
		temp = -temp;
	}
	while (temp > 0 && --len >= 0)
	{
		ptr[len] = (temp % 10) + '0';
		temp = temp / 10;
	}
	return (ptr);
}
