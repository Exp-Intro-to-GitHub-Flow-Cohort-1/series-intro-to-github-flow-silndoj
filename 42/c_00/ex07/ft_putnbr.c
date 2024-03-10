/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silndoj <silndoj@student.42heilbronn       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 22:42:36 by silndoj           #+#    #+#             */
/*   Updated: 2023/11/26 14:42:26 by silndoj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//void	ft_swap(int *a, int *b)
//{
//	int	temp;
//
//	temp = *a;
//	*a = *b;
//	*b = temp;
//}
void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str, 1);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	char	*nbr;

	*nbr = "-21474836";
	if (nb  == -21474836)
	{
		ft_putstr(*nbr);
	}
}


int main()
{
	ft_putnbr(-21474836);
}
