/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silndoj <silndoj@student.42heilbronn       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 13:42:54 by silndoj           #+#    #+#             */
/*   Updated: 2023/12/08 00:15:51 by silndoj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_swap(int a, int b)
{
	int temp;

	temp = a;
	a = b;
	b = temp;
}
void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	//int temp;

	i = 0;
	while(i < (size / 2))
	{
	ft_swap(*(tab + i), *(tab + size - 1 - i));
	i++;
	}
	//while (i < (size / 2))
	//{
	//	temp = tab[i];
	//	tab[i] = tab[size - 1 - i];
	//	tab[size - 1 - i] = temp;
	//	i++;
	//}
}

int main()
{
	int tab[6] = {0, 1, 2, 3, 4, 5};
	int	size = 6;
	int	i = 0;

	ft_rev_int_tab(tab, size);
	while(tab[i] != '\0')
	{
		printf("%d", tab[i]);
		i++;
	}
	printf("\n");
	return (0);
}
