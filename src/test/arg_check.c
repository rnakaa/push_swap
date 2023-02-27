/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_check.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaka <rnaka@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 14:32:30 by rnaka             #+#    #+#             */
/*   Updated: 2023/02/27 15:27:01 by rnaka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	arg_chek_char(const char *argv[])
{
	int	i;
	int	j;
	int	flag;

	i = 0;
	j = 0;
	flag = 0;
	while (argv[i])
	{
		while (argv[i][j])
		{
			if ((argv[i][j] == '-' || argv[i][j] == '+') && flag)
			{
				write("error", 0, 6);
				return (1);
			}
			if (argv[i][j] == '-' || argv[i][j] == '+')
				flag++;
			j++;
		}
		flag = 0;
		i++;
	}
	return (0);
}

int	arg_check(const char *argv[])
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (argv[i])
	{
		while (argv[i][j])
		{
			if (!(isspace(argv[i][j]) || isdigit(argv[i][j]) \
			|| argv[i][j] == '-' || argv[i][j] == '+'))
			{
				write("error", 0, 6);
				return (1);
			}
			j++;
		}
		j = 0;
		i++;
	}
	if (arg_chek_char(argv))
		return (1);
	return (0);
}
