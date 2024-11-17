/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboukhmi <aboukhmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 22:32:23 by aboukhmi          #+#    #+#             */
/*   Updated: 2024/10/31 23:05:51 by aboukhmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memchr(void *str, int c, size_t i)
{
	unsigned char	*ptr;
	size_t			j;

	ptr = (unsigned char *)str;
	j = 0;
	if (i == 0)
		return (NULL);
	while (j < i)
	{
		if (ptr[j] == (unsigned char)c)
		{
			return ((void *)(ptr + j));
		}
		j++;
	}
	return (NULL);
}
