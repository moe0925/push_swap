/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moeota <moeota@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 19:41:20 by moeota            #+#    #+#             */
/*   Updated: 2023/03/14 21:06:03 by moeota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
void first_put(t_stack *stack_a, t_stack *stack_b);

void sa_command(t_stack **stack_a)
{
    do_swap(*stack_a);
    ft_putstr_fd("sa\n",1);
}

void sb_command(t_stack **stack_b)
{
    do_swap(*stack_b);
    ft_putstr_fd("sb\n",1);
}

void ss_command(t_stack **stack_a, t_stack **stack_b)
{
    do_swap(*stack_a);
    do_swap(*stack_b);
    ft_putstr_fd("ss\n",1);
}

void pa_command(t_stack **stack_a, t_stack **stack_b)//bの先頭の要素を取り出し、aの先頭に置く
{
    first_put(*stack_a, *stack_b);
}

void first_put(t_stack *stack_a, t_stack *stack_b)//bの先頭の要素を取り出し、aの先頭に置く
{
    t_stack *head_a = stack_a;
    t_stack *head_b = stack_b;

    if (!stack_a)
        return ;

    head_b = head_a->next;

    head_b->prev->next = head_b->next;
    head_b->next->prev = head_b->prev;

    head_a->next->prev = head_b;
    head_b->next = head_a->next;
    head_a->next = head_b;
    head_b->prev = head_b;
    
    ft_putstr_fd("pa\n",1);
}

// void	ft_lstadd_back(t_list **lst, t_list *new)
// {
// 	if (new == NULL)
// 		return ;
// 	while (*lst != NULL)
// 		lst = &((*lst)-> next);
// 	*lst = new;
// }

void ra_command()
{
    
    
}



void do_swap(t_stack *stack)
{
    if (stack && stack->next)
    {
        int temp;
        temp = stack->value;
        stack->value = stack->next->value;
        stack->next->value = temp;
        temp = stack->index;
        stack->index = stack->next->index;
        stack->next->index = temp;
    }
}




