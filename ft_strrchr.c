/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboukhmi <aboukhmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 22:41:21 by aboukhmi          #+#    #+#             */
/*   Updated: 2024/10/31 22:53:40 by aboukhmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int o)
{
	int		m;
	int		i;
	char	c;

	i = 0;
	m = 0;
	c = o;
	if (c == '\0')
		return ((char *)(str + ft_strlen(str)));
	while (str[i] != '\0')
	{
		if (str[i] == c)
			m = i;
		i++;
	}
	if (c == '\0')
		return ((char *)(str + ft_strlen(str)));
	if (str[m] == c)
		return ((char *)(str + m));
	return (NULL);
}
