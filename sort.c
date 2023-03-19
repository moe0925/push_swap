/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moeota <moeota@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 22:58:58 by moeota            #+#    #+#             */
/*   Updated: 2023/03/19 09:25:19 by moeota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int compare_two(t_stack *stack)
{
	if ((stack->value) > (stack->next->value))
		return (1);
	return (0);
}

int compare_three(t_stack **stack)
{
	int temp1;
	int temp2;
	int temp3;

	temp1 = (*stack)->value;
	temp2 = (*stack)->next->value;
	temp3 = (*stack)->next->next->value;
	if (temp2 < temp1 && temp1 < temp3)
    	sa_command(stack);
	else if (temp2 < temp1 && temp3 < temp2)
    {
        sa_command(stack);
        rra_command(stack);
    }
	else if(temp2 < temp3 && temp3 < temp1)
        ra_command(stack);
	else if(temp1 < temp3 && temp3 < temp2)
	{
        sa_command(stack);
		ra_command(stack);
	}
	else if(temp3 < temp1 && temp1 < temp2)
        rra_command(stack);
    return (0);
}

void sort_seven(t_stack **stack_a, t_stack **stack_b)
{
	search_min(stack_a);
	// printf("search_min%d\n",search_min(stack_a));
	// compare_three(stack_a);//ここまで最大4手
}

void sort_five(t_stack **stack_a, t_stack **stack_b)
{
	pb_command(stack_a,stack_b);
	pb_command(stack_a,stack_b);
	compare_three(stack_a);
	// printf("search_min%d\n",search_min(stack_a));
	// compare_three(stack_a);//ここまで最大4手
}
// void min_top_move(t_stack **stack)
// {
// 	if ()
// }
int search_min(t_stack **stack)
{
	int temp;
	int temp_i;

	temp = (*stack)->value;
	temp_i = (*stack)->index;
	while((*stack)->next)
	{
		// printf("index%d\n", (*stack)->index);
		if((*stack)->next->value < temp)
		{
			temp = (*stack)->next->value;
			temp_i = (*stack)->next->index;
		}
		(*stack) = (*stack)->next;
	}
	return(temp_i);
}


