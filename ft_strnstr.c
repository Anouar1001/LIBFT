/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboukhmi <aboukhmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 22:41:53 by aboukhmi          #+#    #+#             */
/*   Updated: 2024/11/08 16:13:02 by aboukhmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *bigs, const char *substr, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!bigs && !len)
		return ("\0");
	if (substr[0] == '\0')
		return ((char *)bigs);
	while (bigs[i] != '\0' && i < len)
	{
		j = 0;
		if (bigs[i] == substr[j])
		{
			while (bigs[i + j] == substr[j] && i + j < len && substr[j] != '\0')
				j++;
			if (substr[j] == '\0')
				return ((char *)(bigs + i));
		}
		i++;
	}
	return (NULL);
}
