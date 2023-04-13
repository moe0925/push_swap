/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moeota <moeota@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 19:41:33 by moeota            #+#    #+#             */
/*   Updated: 2023/04/13 19:52:07 by moeota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack *make_stack()
{
	t_stack *stack = NULL;
	return (stack);
}

void push(t_stack **stack, int value, int index)
{
	t_stack *new_node = (t_stack*)malloc(sizeof(t_stack));
	new_node -> value = value;
	new_node -> index = index;
	new_node -> next = (*stack);
	new_node -> prev = NULL;
	if((*stack) != NULL)
	{
		(*stack)-> prev = new_node;
	}
	(*stack) = new_node;
}


void printList(t_stack *stack)
{
    while (stack != NULL) {
        printf("%d ", stack->value);
        stack = stack->next;
    }
    printf("\n");
}

void printList_index(t_stack *stack)
{
    while (stack != NULL) {
        printf("%d", stack->index);
        stack = stack->next;
    }
    printf("\n");
}

void printList2(t_stack *stack)
{
	int i = 0;
    while (i < 6) 
	{
        printf("%d ", stack->value);
        stack = stack->next;
		i++;
    }
    printf("\n");
}



int main(int argc, char **argv)
{
	t_stack *stack_a = make_stack();
	t_stack *stack_b = make_stack();
	int i;
	int value;

	value = 0;
	i = 1;
	while (argv[i])
	{
		value = ft_atoi(argv[i]);
		push(&stack_a,value, 0);
		i++;
	}

	// printList(stack_a);
	
	////
	/// 数が少ない時の場合
	if (argc <= 2)
		return (0);
	else if (argc == 3)
	{
		if(compare_two(stack_a))
			sa_command(&stack_a);
	}
	else if (argc == 4)
	{
		compare_three(&stack_a);
	}
	else if (argc == 6)
	{
		sort_five(&stack_a, &stack_b);
	}
	////
	/// 数が少ない時の場合


	
	// printList_index(stack_a);
	printList(stack_a);

	compress_1(stack_a,9);
	compress_2(stack_a);
	printList(stack_a);
	printList_index(stack_a);

	divide_number(&stack_a, &stack_b, 9);
	printList(stack_b);
	// printList_index(stack_a);
	// rra_command(&stack_a);

	// printList(stack_a);


	// printList(stack_b);
	// rra_command(&stack_a);

	// printf("---------stackb----------\n");
	// printList(stack_b);

	// printf("listB\n");
	// printList(stack_b);


	
    return 0;
}

