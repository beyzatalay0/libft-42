/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyatala <beyatala@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 19:11:24 by beyatala          #+#    #+#             */
/*   Updated: 2026/08/06 19:53:59 by beyatala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i])
	{
		j = 0;
		while (big[i + j] == little[j] && j + i < len)
		{
			if (little[j + 1] == '\0')
				return ((char *)&big[i]);
			j++;
		}
		i++;
	}
	return (0);
}
#include <stdio.h>

int	main(void)
{
	char *a = "beyza atalay";
	char *b = "";

	printf("%s", ft_strnstr(a, b, 4));
}