/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboukhmi <aboukhmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 22:46:27 by aboukhmi          #+#    #+#             */
/*   Updated: 2024/10/31 22:48:21 by aboukhmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	unsigned char	*ptr;
	unsigned char	*ptr1;
	size_t			i;

	ptr = (unsigned char *)str1;
	ptr1 = (unsigned char *)str2;
	i = 0;
	if (n == 0)
		return (0);
	while ((str1[i] != '\0' || str2[i] != '\0')
		&& str1[i] == str2[i] && i < n - 1)
		i++;
	return (ptr[i] - ptr1[i]);
}
