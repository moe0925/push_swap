/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moeota <moeota@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 19:41:38 by moeota            #+#    #+#             */
/*   Updated: 2023/03/19 09:19:44 by moeota           ###   ########.fr       */
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
void	pb_command(t_stack **stack_a, t_stack **stack_b);
void	ra_command(t_stack **stack_a);
void	rb_command(t_stack **stack_a);
void	rr_command(t_stack **stack_a, t_stack **stack_b);

void	rra_command(t_stack **stack_a);
int		compare_two(t_stack *stack);
int 	compare_three(t_stack **stack);
int 	search_min(t_stack **stack);
void 	sort_five(t_stack **stack_a, t_stack **stack_b);

void	ft_putstr_fd(char *s, int fd);
void	do_swap(t_stack *stack);

// typedef struct stack_b{
// 	int value;
// 	int index;
// 	struct stack_b *next;
// 	struct stack_b *prev;
// } t_stack;

#endif