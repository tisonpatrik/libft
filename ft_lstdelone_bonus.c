/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patrik <patrik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 19:15:00 by patrik            #+#    #+#             */
/*   Updated: 2025/05/26 19:28:50 by patrik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/**
 * @brief Deletes and frees a single node
 *
 * This function takes a node as parameter and frees its content using
 * the function 'del'. It then frees the node itself but does NOT free
 * the next node.
 *
 * @param lst The node to free
 * @param del The address of the function used to delete the content
 */
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del((*lst).content);
	free(lst);
} 