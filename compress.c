/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compress.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moeota <moeota@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 19:41:33 by moeota            #+#    #+#             */
/*   Updated: 2023/04/15 16:23:30 by moeota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void compress_1(t_stack *stack_a, int size)
{
    t_stack *cur;
    t_stack *tmp;
    int i;
    int tmp_index;

    i = 0;
    tmp_index = size;
    
    while (i < size)
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
}

void compress_2(t_stack *stack_a)
{
    t_stack *cur = stack_a;

    while (cur)
    {
        cur->value = cur->index;
        cur = cur->next;
    }
}



void divide_number(t_stack **stack_a, t_stack **stack_b, int size)
{
    int i;
    int j;
    t_stack *cur = *stack_a;
    
    j = 0;  
    i = 0;  
    // printf("%d", cur->next->next->value);
    while (j + i <= size)
    {
        i = 0;  
        while (i < 14 && i < size)
        {
            if (cur->value < 14 + j)
            {
                // sa_command(stack_a);
                pb_command(stack_a,stack_b);
                printf("%d", cur->value);
            }
            cur = cur->next;
            i++;
        }
        j += 10;
    }
    // if (8 <= size && size < 500)
    // {
    //     while ( < size)
    //     {
    //         i = 0;
    //         while (i < 14 && ((j/10) + i) < size )
    //         {
    //             if(cur->index < 14 + j)
    //             {
    //                 pb_command(stack_a, stack_b);
    //             }
    //             i++;
    //             cur = cur->next;
    //         }
    //         j += 10; 
    //     }
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