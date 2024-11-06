/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboukhmi <aboukhmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 23:01:51 by aboukhmi          #+#    #+#             */
/*   Updated: 2024/10/31 23:02:41 by aboukhmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*dst;
	char	*sc;

	dst = (char *)dest;
	sc = (char *)src;
	if (!dest && !src)
		return (NULL);
	if (sc < dst)
	{
		while (n-- > 0)
		{
			dst[n] = sc[n];
		}
		return (dest);
	}
	ft_memcpy(dst, src, n);
	return (dest);
}
