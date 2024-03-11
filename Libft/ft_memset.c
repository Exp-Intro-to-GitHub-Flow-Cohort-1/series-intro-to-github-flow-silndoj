/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silndoj <silndoj@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 14:02:45 by silndoj           #+#    #+#             */
/*   Updated: 2024/03/11 16:40:03 by silndoj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*((unsigned char *)(str++)) = (unsigned char) c;
		i++;
	}
	return (str);
}
//
//int main(void)
//{
//	char str[] = "silvi ndoj";
//	printf("here is : %s\n", str);
//	ft_memset(str + 3, '0', 5);
//	printf("answer is : %s\n",str);
//}
