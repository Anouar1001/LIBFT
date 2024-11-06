/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboukhmi <aboukhmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 22:39:29 by aboukhmi          #+#    #+#             */
/*   Updated: 2024/10/31 22:39:29 by aboukhmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	size_t	i;
	char	*substring;

	s_len = ft_strlen(s);
	if (!s)
		return (NULL);
	if (start > s_len)
	{
		substring = ft_calloc(1, 1);
		return (substring);
	}
	if (len > s_len - start)
		len = s_len - start;
	substring = (char *)malloc(len + 1);
	if (!substring)
		return (NULL);
	i = 0;
	while (i < len)
	{
		substring[i] = s[start + i];
		i++;
	}
	substring[i] = '\0';
	return (substring);
}
