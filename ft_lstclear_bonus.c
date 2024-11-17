/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboukhmi <aboukhmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 15:48:51 by aboukhmi          #+#    #+#             */
/*   Updated: 2024/11/08 16:06:52 by aboukhmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;
	t_list	*copy;

	if (!lst || !del)
		return ;
	copy = *lst;
	while (copy)
	{
		temp = copy->next;
		ft_lstdelone(copy, del);
		copy = temp;
	}
	*lst = NULL;
}
