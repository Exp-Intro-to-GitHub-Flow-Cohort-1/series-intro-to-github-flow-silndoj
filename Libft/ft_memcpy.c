/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silndoj <silndoj@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 10:07:00 by silndoj           #+#    #+#             */
/*   Updated: 2024/03/11 16:38:55 by silndoj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*((char *)(dest + i)) = *((char *)(src + i));
		i++;
	}
	return (dest);
}
//
//int main()
//{
//	char src[] = "silvestri";
//	printf("src is : %s\n",src);
//	char dest[100];
//	ft_memcpy(dest, src, 5);
//	printf("dest is : %s\n", dest);
//}
