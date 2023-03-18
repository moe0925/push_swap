/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moeota <moeota@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 22:58:58 by moeota            #+#    #+#             */
/*   Updated: 2023/03/18 22:31:43 by moeota           ###   ########.fr       */
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

int sort_seven(t_stack **stack)
{
	
}


