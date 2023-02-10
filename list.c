/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 04:59:54 by rnaka             #+#    #+#             */
/*   Updated: 2023/02/11 05:09:13 by rnaka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <libc.h>
void	func_1(char *str)
{
	str[0] = 'a';
	str = NULL;
}

void	func_2(char **str)
{
	*str[0] = 'a';
	*str = NULL;
}

int main()
{
	char	*str_1;
	char	*str_2;

	str_1 = calloc(10, 1);
	str_2 = calloc(10, 1);
	strcpy(str_1, "42Tokyo");
	strcpy(str_2, "42Tokyo");
	printf("%s\t%p\n", str_1, str_1);
	printf("%s\t%p\n", str_2, str_2);
	func_1(str_1);
	func_2(&str_2);
	printf("%s\t%p\n", str_1, str_1);
	printf("%s\t%p\n", str_2, str_2);
	return (0);
}
