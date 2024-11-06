/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboukhmi <aboukhmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 22:50:56 by aboukhmi          #+#    #+#             */
/*   Updated: 2024/11/06 15:56:35 by aboukhmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	p;
	size_t	j;

	if (!dst && size == 0)
		return (ft_strlen(src));
	i = ft_strlen(dst);
	p = i;
	if (i >= size)
		return (ft_strlen(src) + size);
	else
	{
		j = 0;
		while (i < size - 1 && src[j])
		{
			dst[i] = src[j];
			i++;
			j++;
		}
		dst[i] = '\0';
		return (ft_strlen(src) + p);
	}
}
// int main()
// {
// 	printf("%lu", ft_strlcat(NULL, "hello world", 0));
// 	// printf("%lu", strlcat(NULL, "hello world", 0));
// }