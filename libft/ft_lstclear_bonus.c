/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboukhmi <aboukhmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 15:48:51 by aboukhmi          #+#    #+#             */
/*   Updated: 2024/11/06 15:50:00 by aboukhmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;
	t_list	*copy;

	copy = *lst;
	while (copy)
	{
		temp = copy->next;
		ft_lstdelone(copy, del);
		copy = temp;
	}
	*lst = NULL;
}

// int main()
// {
//     t_list *head = ft_lstnew("hello world");
//     t_list *n1 = ft_lstnew("welcom to our new world");
//     head->next = n1;

//     ft_lstclear(&head, del);
//     printf("%s", head ->content);

// }