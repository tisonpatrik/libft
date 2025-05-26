/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patrik <patrik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 19:22:12 by patrik            #+#    #+#             */
/*   Updated: 2025/05/26 19:32:47 by patrik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/**
 * @brief Creates a new list by applying a function to each node
 *
 * This function iterates through the list 'lst', applies the function 'f'
 * to each node's content, and creates a new list resulting from the
 * successive applications of the function 'f'. The 'del' function is used
 * to delete the content of a node if needed.
 *
 * @param lst The address of a pointer to a node
 * @param f The address of the function applied to each node's content
 * @param del The address of the function used to delete a node's content if needed
 * @return The new list, or NULL if the allocation fails
 */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*new_content;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		new_content = f((*lst).content);
		new_node = ft_lstnew(new_content);
		if (!new_node)
		{
			del(new_content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = (*lst).next;
	}
	return (new_list);
} 