/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moeota <moeota@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 19:41:20 by moeota            #+#    #+#             */
/*   Updated: 2023/03/19 09:24:37 by moeota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
static void first_put(t_stack **pull, t_stack **put);//先頭の要素(pull)を取り出し、先頭(put)に置く
void shift_up(t_stack **stack);
void shift_down(t_stack **stack);
void	reverse_rotate(t_stack **stack);


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

void pa_command(t_stack **stack_a, t_stack **stack_b)
{
    first_put(stack_b, stack_a);
    ft_putstr_fd("pa\n",1);
}

void pb_command(t_stack **stack_a, t_stack **stack_b)
{
    first_put(stack_a, stack_b);
    ft_putstr_fd("pb\n",1);
}

static void first_put(t_stack **pull, t_stack **put)
{
    t_stack *temp;

    if (!(*pull))
        return;
    temp = (*pull)->next;
    (*pull)->next = *put;
    *put = *pull;
    *pull = temp;
}

void ra_command(t_stack **stack_a)
{
    shift_up(stack_a);
    ft_putstr_fd("ra\n",1);
}

void rb_command(t_stack **stack_b)
{
    shift_up(stack_b);
    ft_putstr_fd("rb\n",1);
}

void	rr_command(t_stack **stack_a, t_stack **stack_b)
{
    shift_up(stack_a);
    shift_up(stack_b);
    ft_putstr_fd("rr\n",1);
}

void rra_command(t_stack **stack_a)
{
    shift_down(stack_a);
    ft_putstr_fd("rra\n",1);
}

void rrb_command(t_stack **stack_b)
{
    shift_down(stack_b);
    ft_putstr_fd("rrb\n",1);
}

void rrr_command(t_stack **stack_a, t_stack **stack_b)
{
    shift_down(stack_a);
    shift_down(stack_b);
    ft_putstr_fd("rrr\n",1);
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

void shift_up(t_stack **stack)
{
    t_stack *cur;
    t_stack *head;

	if(!(*stack) || !(*stack)->next)
		return ;
	cur = *stack;
	head = *stack;
	while((cur->next))
	{
		cur = cur->next;
	}
	*stack = head->next;
	head->next = NULL;
	cur->next = head;
}

// void shift_down(t_stack **stack)
// {
//     t_stack *cur;
//     t_stack *temp;

// 	if(!(*stack) || !(*stack)->next)
// 		return ;
// 	cur = *stack;
// 	temp = *stack;
// 	while((cur->next))
// 	{
// 		temp = cur;
// 		cur = cur->next;
// 	}
// 	cur->next = *stack;
// 	*stack = cur;
// 	temp->next = NULL;
// }

void shift_down(t_stack **stack)
{
    t_stack *cur;
    t_stack *temp;
    t_stack *head;

	if(!(*stack) || !(*stack)->next)
		return ;
	cur = *stack;
	head = *stack;
	temp = *stack;

	while((cur->next))
	{
		cur = cur->next;
	}
	temp = cur->prev;
	cur->next = *stack;
	*stack = cur;
	temp->next = NULL;
}
