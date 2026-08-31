/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyatala <beyatala@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/09 20:04:34 by beyatala          #+#    #+#             */
/*   Updated: 2026/08/24 17:31:56 by beyatala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if (count && size > (size_t)(-1) / count)
		return (0);
	ptr = (malloc(count * size));
	if (!ptr)
		return (0);
	ft_bzero(ptr, (count * size));
	return (ptr);
}
