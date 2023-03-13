/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moeota <moeota@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 19:41:20 by moeota            #+#    #+#             */
/*   Updated: 2023/03/13 20:06:38 by moeota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

void first_put(t_stack *stack_a, t_stack *stack_b)
{
    int temp;
    
    if (!stack_a)
        return ;
    if (!stack_b)
    {
        temp = stack_a->
    }
    ft_putstr_fd("pa\n",1);
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




