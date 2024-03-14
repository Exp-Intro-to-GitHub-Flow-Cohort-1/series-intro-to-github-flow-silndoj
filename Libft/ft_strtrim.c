/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silndoj <silndoj@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 18:10:47 by silndoj           #+#    #+#             */
/*   Updated: 2024/03/14 19:08:43 by silndoj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	tlen;
	size_t	slen;
	char	*temp;
	char	*ptr;

	i = 0;
	j = 0;
	k = 0;
	slen = ft_strlen(s1);
	ft_memcpy(temp, (char *) s1, slen);
	while (set[j] != '\0')
	{
		k = 0;
		i = 0;
		while (temp[i] != set[j])
		{
			temp[k] = temp[i];
			i++;
			k++;
		}
		j++;
	}
	tlen = ft_strlen(temp);
	ptr = (char *) ft_calloc(tlen + 1, sizeof(char));
	if (!ptr)
		return (0);
	ft_memcpy(ptr, temp, tlen);
	return (ptr);
}

int main ()
{
	char	s1[100] = "Saaaaaaailffffffffffffffffvddddddddi";
	char	set[10] = "afd";
	char	*res;
	res = ft_strtrim(s1, set);
	printf("result is: %s\n", res);
}
