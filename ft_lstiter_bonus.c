/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patrik <patrik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 19:22:37 by patrik            #+#    #+#             */
/*   Updated: 2025/05/26 19:32:54 by patrik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Iterates through the list and applies a function to each node
 *
 * This function iterates through the list 'lst' and applies the function 'f'
 * to the content of each node.
 *
 * @param lst The address of a pointer to a node
 * @param f The address of the function to apply to each node's content
 */
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f((*lst).content);
		lst = (*lst).next;
	}
}
