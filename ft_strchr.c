/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboukhmi <aboukhmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 22:56:19 by aboukhmi          #+#    #+#             */
/*   Updated: 2024/10/31 23:19:15 by aboukhmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int		i;
	char	o;

	i = 0;
	o = c;
	while (str[i] != '\0')
	{
		if (str[i] == o)
			return ((char *)(str + i));
		i++;
	}
	if (str[i] == o)
		return ((char *)(str + i));
	return (NULL);
}
