/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_node.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: healeksa <healeksa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 15:24:02 by healeksa          #+#    #+#             */
/*   Updated: 2024/12/21 22:28:27 by healeksa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <list_c.h>

t_node_ptr	make_node(void *data, size_t size)
{
	t_node_ptr	node;

	node = (t_node_ptr)ft_malloc(sizeof(t_node));
	node->next = NULL;
	node->prev = NULL;
	node->data = NULL;
	if (data)
	{
		node->data = ft_malloc(size);
		ft_memcpy(node->data, data, size);
	}
	return (node);
}
