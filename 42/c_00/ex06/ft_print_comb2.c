/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silndoj <silndoj@student.42heilbronn       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 15:17:56 by silndoj           #+#    #+#             */
/*   Updated: 2023/11/25 12:27:39 by silndoj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print(char a, char b, char c, char d)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(' ');
	ft_putchar(c);
	ft_putchar(d);
}

void ft_print_comb2(void)
{
	char	a;
	char	b;
	char	c;
	char	d;
	int flag;

	a = '0';
	while (a <= '9')
	{
		b = '0';
		while (b <= '9')
		{
			if (b != b - 1)
				flag = 1;
			c = a;
			while (c <= '9')
			{
				if (flag == 1)
				{
					d = b + 1;
					flag = 0;
				}
				else
					d = '0';
				while (d <= '9')
				{
					if (a == '9' && b == '8' && c == '9' && d == '9')
						ft_print(a, b, c, d);
					else{
					ft_print(a, b, c, d);
					ft_putchar(',');
					ft_putchar(' ');
					}
					d++;
				}
				c++;
			}
			b++;
		}
		a++;
	}
}
//int main()
//{
//	ft_print_comb2();
//	return (0);
//}
