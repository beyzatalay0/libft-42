/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyatala <beyatala@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 15:53:27 by beyatala          #+#    #+#             */
/*   Updated: 2026/08/25 18:16:25 by beyatala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char const	*src;
	size_t		src_len;
	size_t		i;
	char		*ptr;

	src = (char *)s;
	i = 0;
	if (!src)
		return (NULL);
	src_len = ft_strlen(src);
	if (start >= src_len)
		return (ft_strdup(""));
	if (len > src_len - start)
		len = src_len - start;
	ptr = (char *)malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (0);
	while (i < len && src[start + i])
	{
		ptr[i] = src[start + i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
