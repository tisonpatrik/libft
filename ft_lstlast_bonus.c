/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patrik <patrik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 19:22:25 by patrik            #+#    #+#             */
/*   Updated: 2025/05/26 19:29:12 by patrik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "libft.h"

/**
 * @brief Returns the last node of the list
 *
 * This function traverses the list and returns a pointer to the last node.
 * If the list is empty, it returns NULL.
 *
 * @param lst The beginning of the list
 * @return Last node of the list, or NULL if the list is empty
 */
t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while ((*lst).next)
		lst = (*lst).next;
	return (lst);
} 