/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboukhmi <aboukhmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:36:43 by aboukhmi          #+#    #+#             */
/*   Updated: 2024/10/31 23:01:41 by aboukhmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t i)
{
	unsigned char	*ptr;
	size_t			j;

	j = 0;
	ptr = (unsigned char *)str;
	while (j < i)
	{
		ptr[j] = (unsigned char)c;
		j++;
	}
	return (str);
}
