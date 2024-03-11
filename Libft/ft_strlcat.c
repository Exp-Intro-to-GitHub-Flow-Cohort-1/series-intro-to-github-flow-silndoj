/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silndoj <silndoj@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 15:34:44 by silndoj           #+#    #+#             */
/*   Updated: 2024/03/11 19:34:23 by silndoj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	srclen;
	size_t	dstlen;

	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst);
	i = dstlen;
	j = 0;
	if (dstsize == 0 || dstlen >= dstsize)
		return (srclen + dstsize);
	while (src[j] != '\0' && (j <= dstsize - dstlen - 1))
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dstlen + srclen);
}
//
//int main ()
//{
//	size_t result1;
//	char s1[10] = "silvi";
//	char s2[10] = "ndoj";
//	size_t result;
//
//	result = ft_strlcat(s1, s2, 8);
//	printf("result 2 is : %zu\n", result);
//	printf("s1 : %s\n", s1);
//	printf("s2 : %s\n", s2);
//}
