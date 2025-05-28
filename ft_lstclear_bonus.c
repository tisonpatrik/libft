/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patrik <patrik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 19:23:19 by patrik            #+#    #+#             */
/*   Updated: 2025/05/26 19:29:28 by patrik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/**
 * @brief Deletes and frees the entire list
 *
 * This function deletes and frees the given node and all its successors,
 * using the function 'del' and free. Finally, it sets the pointer to
 * the list to NULL.
 *
 * @param lst The address of a pointer to a node
 * @param del The address of the function used to delete the content of the node
 */
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*next;

	if (!lst || !del)
		return ;
	current = *lst;
	while (current)
	{
		next = (*current).next;
		ft_lstdelone(current, del);
		current = next;
	}
	*lst = NULL;
}
