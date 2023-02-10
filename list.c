/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 04:49:11 by rnaka             #+#    #+#             */
/*   Updated: 2023/02/11 06:08:49 by rnaka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <libc.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

t_list	*ft_lstnew(void *content)
{
	t_list	*lst;

	lst = malloc(sizeof(t_list));
	if (!lst)
		return (NULL);
	lst->content = content;
	lst->next = NULL;
	return (lst);
}

void	ft_lstaddfront(t_list	**lst, t_list *new)
{
	if (!lst)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	new->next = *lst;
	*lst = new;
	return ;
}

int	ft_lstsize(t_list *lst)
{
	int	i;
	
	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

t_list	*ft_lstlast(t_list *lst)
{
	int	i;
	
	if (!lst)
		return (NULL);
	i = 0;
	while (lst->next != NULL)
	{
		lst = lst->next;
		i++;
	}
	return (lst);
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if(!lst)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	ft_lstlast(*lst)->next = new;
}

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst)
		return ;
	del(lst->content);
	free(lst);
}

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*save;
	
	if (!lst)
		return (NULL);
	while (*lst)
	{
		save = *lst;
		*lst = (*lst)->next;
		ft_lstdelone(*save, del);
	}
	*lst = NULL;
}

//int main(void)
//{
//	t_list	*list;
//
//	list = ft_lstnew(NULL);
//	ft_lstadd_back(&list, ft_lstnew(NULL));
//	printf("%d\n", ft_lstsize(list));
//	return (0);
//}

//#include <libc.h>
//void	func_1(char *str)
//{
//	str[0] = 'a';
//	str = NULL;
//}
//
//void	func_2(char **str)
//{
//	*str[0] = 'a';
//	*str = NULL;
//}
//
//int main()
//{
//	char	*str_1;
//	char	*str_2;
//
//	str_1 = calloc(10, 1);
//	str_2 = calloc(10, 1);
//	strcpy(str_1, "42Tokyo");
//	strcpy(str_2, "42Tokyo");
//	printf("%s\t%p\n", str_1, str_1);
//	printf("%s\t%p\n", str_2, str_2);
//	func_1(str_1);
//	func_2(&str_2);
//	printf("%s\t%p\n", str_1, str_1);
//	printf("%s\t%p\n", str_2, str_2);
//	return (0);
//}
//
