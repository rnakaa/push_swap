/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 04:22:24 by rnaka             #+#    #+#             */
/*   Updated: 2023/02/11 04:34:42 by rnaka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct s_stack
{
	int	num;
	int	index;
}	t_stack;

#include <stdio.h>

void	print_func(t_stack *stack)
{
	printf("%d\n", (*stack).num);
	printf("%d\n", stack->index);
}

void	prin(t_stack stack)
{
	printf("%d\n", stack.num);
	printf("%d\n", stack.index);
}

int main(void)
{
	struct s_stack		stack_a;

	stack_a.num = 1;
	stack_a.index = 2;
	print_func(&stack_a);
	prin(stack_a);
}

