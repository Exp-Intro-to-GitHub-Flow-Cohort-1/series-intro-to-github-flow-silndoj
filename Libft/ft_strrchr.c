/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silndoj <silndoj@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 20:37:27 by silndoj           #+#    #+#             */
/*   Updated: 2024/03/11 20:51:30 by silndoj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*temp;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char) c)
			temp = ((char *) &s[i]);
		i++;
	}
	return (temp);
}
//
//int main ()
//{
//	char *result1;
//	char *result;
//	char s[10] = "papakalo";
//
//
//	result1 = strrchr(s, 'a');
//	result = ft_strrchr(s, 'a');
//	printf("result = %s\n", result);
//	printf("result1 = %s\n", result1);
//}
