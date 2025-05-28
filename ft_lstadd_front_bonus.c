/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patrik <patrik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 19:23:06 by patrik            #+#    #+#             */
/*   Updated: 2025/05/26 19:33:00 by patrik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Adds a node at the beginning of the list
 *
 * This function adds the node 'new' at the beginning of the list.
 * The new node becomes the first node of the list.
 *
 * @param lst The address of a pointer to the first node of a list
 * @param new The address of a pointer to the node to be added
 */
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	(*new).next = *lst;
	*lst = new;
}
