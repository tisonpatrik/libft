/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patrik <patrik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 19:21:58 by patrik            #+#    #+#             */
/*   Updated: 2025/05/26 19:34:18 by patrik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

/**
 * @brief Counts the number of nodes in a list
 *
 * This function counts the number of nodes in the list starting
 * from the given node.
 *
 * @param lst The beginning of the list
 * @return The length of the list
 */
int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		count++;
		lst = (*lst).next;
	}
	return (count);
} 