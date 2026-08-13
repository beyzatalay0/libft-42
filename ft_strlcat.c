/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyatala <beyatala@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 13:02:36 by beyatala          #+#    #+#             */
/*   Updated: 2026/08/06 16:08:02 by beyatala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i,j,k;
	i=0;
	j=0;

	while(dst[i] && i<size)
		i++;
	while(src[j])
		j++;
	k=i+j;
	if(i+k>size-1)
		return();
	while(i+k<size-1 &&src[k])
	{
		dst[i+k]=src[k];
		k++;
	}
	dst[i+k]='\0';
	return i+j;
}

#include <stdio.h>
int main()
{
	char dst[] = "beyza";
	char src[]= "ilknur";
	size_t i = ft_strlcat(dst, src, 10);
	printf("%zu\n", i);
	printf("%s", dst);
}