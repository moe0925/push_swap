/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compress.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moeota <moeota@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 19:41:33 by moeota            #+#    #+#             */
/*   Updated: 2023/04/10 14:10:58 by moeota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void compress_1(t_stack *stack_a, int size)
{
    t_stack *cur;
    t_stack *tmp;
    int tmp_max;
    int i;
    int tmp_index;

    i = 1;
    // i = size;
    tmp_index = size;
    
    while (i <= size)
    {
        cur = stack_a;
        tmp = stack_a;
        
        while(1)
        {
            if (!(tmp->index) && tmp)
            {
                break;
            }
            tmp = tmp->next;
            if (!tmp)
                break;
        }
        
        while (cur)/////search_biggest
        {
            // printf("value;%d\n", cur->value);
            // printf("tmp;%d\n", tmp_max);

            if (cur->value > tmp->value && (!(cur->index)))
            {
                tmp = cur;
            }
            cur = cur->next;    
        }
        tmp->index = tmp_index;
        tmp_index--;
        i++;

    }
        
        // i++;
    // }
}
                                  

int size(t_stack *stack_a)
{
    int count;
    t_stack *cur;

    count = 0;
    cur = stack_a;

    while(cur)
    {
        count++;
        cur = cur->next;

        // if (cur == stack_a) {
        //     break;
        // }//これいる？？
    }
    
    return (count);
}