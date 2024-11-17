/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboukhmi <aboukhmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 22:25:54 by aboukhmi          #+#    #+#             */
/*   Updated: 2024/10/31 22:37:40 by aboukhmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdlib.h>

static int	is_in(char s, char *set1)
{
	int	i;

	i = 0;
	while (set1[i] != '\0')
	{
		if (set1[i] == s)
			return (1);
		i++;
	}
	return (0);
}

static size_t	skip_start(char const *s1, char const *set)
{
	size_t	i;

	i = 0;
	while (s1[i] && is_in(s1[i], (char *)set))
		i++;
	return (i);
}

static size_t	skip_end(char const *s1, char const *set, size_t len)
{
	size_t	j;

	j = len - 1;
	while (j > 0 && is_in(s1[j], (char *)set))
		j--;
	return (j);
}

static void	copy_trimmed(char *ptr, char const *s1, size_t start, size_t end)
{
	size_t	k;

	k = 0;
	while (start <= end)
		ptr[k++] = s1[start++];
	ptr[k] = '\0';
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	size_t	start;
	size_t	len;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	len = ft_strlen(s1);
	start = skip_start(s1, set);
	if (start == len)
	{
		ptr = (char *)malloc(1);
		if (!ptr)
			return (NULL);
		ptr[0] = '\0';
		return (ptr);
	}
	end = skip_end(s1, set, len);
	ptr = (char *)malloc(end - start + 2);
	if (!ptr)
		return (NULL);
	copy_trimmed(ptr, s1, start, end);
	return (ptr);
}
