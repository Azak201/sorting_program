/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amismail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 14:39:33 by amismail          #+#    #+#             */
/*   Updated: 2024/12/19 14:39:37 by amismail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <libft.h>

typedef struct s_dlist
{
	int				content;
	struct s_dlist	*next;
	int				index;
}	t_dlist;

void		ft_dlstadd_back(t_dlist **lst, t_dlist *new);
void		ft_dlstadd_front(t_dlist **lst, t_dlist *new);
void		ft_dlstclear(t_dlist **lst, void (*del)(int));
void		ft_dlstdelone(t_dlist *lst, void (*del)(int));
void		ft_dlstiter(t_dlist *lst, void (*f)(int));
t_dlist		*ft_dlstlast(t_dlist *lst);
t_dlist		*ft_dlstmap(t_dlist *lst, void *(*f)(int), void (*del)(int));
t_dlist		*ft_dlstnew(int content);
int			ft_dlstsize(t_dlist *lst);
char		**spliter(int arc, char **arv);
void		handler(char **inputs);
void		ft_exit(int flag, char **str);
int			inserter(char **inputs);
int			sorter(t_dlist *stack_a);
void		swap_a(t_dlist **stack_a);
void		swap_b(t_dlist **stack_b);
void		swap_s(t_dlist **stack_a, t_dlist **stack_b);
void		push_a(t_dlist **stack_a, t_dlist **stack_b);
void		push_b(t_dlist **stack_a, t_dlist **stack_b);
void		rotate_a(t_dlist **stack_a);
void		rotate_b(t_dlist **stack_b);
void		rotate_r(t_dlist **stack_a, t_dlist **stack_b);
void		r_rotate_a(t_dlist **stack_a);
void		r_rotate_b(t_dlist **stack_b);
void		r_rotate_r(t_dlist **stack_a, t_dlist **stack_b);
void		handle2(t_dlist **stack, int flag);
void		handle3(t_dlist **stack_a);
void		handle4(t_dlist **stack_a, t_dlist **stack_b);
void		handle5(t_dlist **stack_a, t_dlist **stack_b);
int			is_sorted(t_dlist *stack);
#endif
