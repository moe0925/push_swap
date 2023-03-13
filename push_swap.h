/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moeota <moeota@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 19:41:38 by moeota            #+#    #+#             */
/*   Updated: 2023/03/13 19:49:18 by moeota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

typedef struct stack{
	int value;
	int index;
	struct stack *next;
	struct stack *prev;
} t_stack;

// typedef struct stack_b{
// 	int value;
// 	int index;
// 	struct stack_b *next;
// 	struct stack_b *prev;
// } t_stack_b;

int		ft_atoi(const char *str);
void	sa_command(t_stack **stack_a);
void	sb_command(t_stack **stack_b);
void	ss_command(t_stack **stack_a, t_stack **stack_b);
void	pa_command(t_stack **stack_a, t_stack **stack_b);

void	ft_putstr_fd(char *s, int fd);
void	do_swap(t_stack *stack);

// typedef struct stack_b{
// 	int value;
// 	int index;
// 	struct stack_b *next;
// 	struct stack_b *prev;
// } t_stack;

#endif