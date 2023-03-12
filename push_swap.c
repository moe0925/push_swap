/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moeota <moeota@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 19:41:33 by moeota            #+#    #+#             */
/*   Updated: 2023/03/12 19:41:34 by moeota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

typedef struct stack_a{
	int value;
	int index;
	struct stack_a *next;
	struct stack_a *prev;
} t_stack;


// typedef struct stack_b{
// 	int value;
// 	int index;
// 	struct stack_b *next;
// 	struct stack_b *prev;
// } t_stack;

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

static void execution_sa_command(struct stack_a)
{

}


void printList(t_stack *stack)
{
    while (stack != NULL) {
        printf("%d ", stack->value);
        stack = stack->next;
    }
    printf("\n");
}

int main(int argc, char **argv)
{
	t_stack *stack_a = make_stack();
	int i;
	int value;

	value = 0;
	i = 0;
	while (argv[i])
	{
		value = ft_atoi(argv[i]);
		push(&stack_a,value, i);
		i++;
	}

	if (argc <= 2)
		return (0);
	
	printList(stack_a);
	// else if (argc == 3)
	// {
	// 	execution_ss_command(stack_a);
	// }



    

    return 0;
}

//