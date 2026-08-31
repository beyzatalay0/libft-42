/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyatala <beyatala@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 12:37:45 by beyatala          #+#    #+#             */
/*   Updated: 2026/08/25 20:09:30 by beyatala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*dst;
	unsigned char	a;
	size_t			i;

	dst = (unsigned char *)s;
	a = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		dst[i] = a;
		i++;
	}
	return (s);
}
