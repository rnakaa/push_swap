/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaka <rnaka@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 06:47:39 by rnaka             #+#    #+#             */
/*   Updated: 2023/02/27 14:04:20 by rnaka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>
#include <ctype.h>

static void	is_number(int argc, const char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			if (isspace(argv[i][j]) || isdigit(argv[i][j]) || argv[i][j] == '+' || argv[i][j] == '-')
				j++;
			else
			{
				printf("Error\n");
				exit(1);
			}
		}
		i++;
	}

}

void	check_argument(int argc, const char **argv)
{
	if (argc == 1)
	{
		exit(1);
	}
	is_number(argc, argv);
	//is_over_int(argc, argv);
	//is_duplicate(argc, argv);
}
