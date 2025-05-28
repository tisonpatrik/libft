/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patrik <patrik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 19:22:57 by patrik            #+#    #+#             */
/*   Updated: 2025/05/26 19:33:08 by patrik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Adds a node at the end of the list
 *
 * This function adds the node 'new' at the end of the list.
 * If the list is empty, the new node becomes the first node.
 *
 * @param lst The address of a pointer to the first node of a list
 * @param new The address of a pointer to the node to be added
 */
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	(*last).next = new;
}
