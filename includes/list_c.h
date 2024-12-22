/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_c.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: healeksa <healeksa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 15:37:26 by healeksa          #+#    #+#             */
/*   Updated: 2024/12/22 17:03:37 by healeksa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_C_H
# define LIST_C_H

# include <stdbool.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

typedef struct s_node	t_node;
typedef struct s_list	t_list;
typedef t_node			*t_node_ptr;
typedef t_list			*t_list_ptr;
typedef struct aloc		tst;

struct					s_node
{
	void				*data;
	struct s_node		*prev;
	struct s_node		*next;
};

struct					s_list
{
	t_node				*head;
	t_node				*tail;
	int					size;
};

struct					aloc
{
	int					x;
	long				y;
};

// init
t_list_ptr				init_lt(void);
// is empty
bool					is_empty_lt(t_list_ptr list);
// size
int						get_size_lt(t_list_ptr list);
// utils
void					*ft_malloc(size_t size);
void					*ft_memcpy(void *dest, const void *src, size_t n);
void					ft_free(void **ptr);
// make_node
t_node_ptr				make_node_mv(void *data);
t_node_ptr				make_node(void *data, size_t size);
// insertion
void					push_back_mv_lt(t_list_ptr list, void *data);
void					push_back_lt(t_list_ptr list, void *data, size_t size);
void					push_front_lt(t_list_ptr list, void *data, size_t size);
void					push_front_mv_lst(t_list_ptr list, void *data);
// deletion
void					pop_back_lt(t_list_ptr list);
void					pop_front_lt(t_list_ptr list);
void					clear_lt(t_list_ptr *list);
// free node
void					free_node_lt(t_node **node);
// get index
t_node_ptr				get_index_node_lt(t_list_ptr list, int index);
void					*get_index_data_lt(t_list_ptr list, int index);

#endif
