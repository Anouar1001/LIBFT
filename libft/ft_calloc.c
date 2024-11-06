/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboukhmi <aboukhmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 23:54:59 by aboukhmi          #+#    #+#             */
/*   Updated: 2024/10/31 23:09:33 by aboukhmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*ptr;

	if (size != 0 && num > SIZE_MAX / size)
		return (NULL);
	ptr = malloc(num * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, num * size);
	return (ptr);
}
