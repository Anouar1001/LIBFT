/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboukhmi <aboukhmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 23:54:54 by aboukhmi          #+#    #+#             */
/*   Updated: 2024/10/31 23:10:28 by aboukhmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *ptr, size_t i)
{
	unsigned char	*ptr1;
	size_t			j;

	ptr1 = (unsigned char *)ptr;
	j = 0;
	if (i == 0)
		return ;
	while (j < i)
	{
		ptr1[j] = 0;
		j++;
	}
}
