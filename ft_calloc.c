/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyatala <beyatala@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/09 20:04:34 by beyatala          #+#    #+#             */
/*   Updated: 2026/08/09 22:01:23 by beyatala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
void ft_bzero(void *s, size_t n);
void *ft_calloc(size_t count, size_t size)
{
    void *ptr;
	
	if(size !=0)
    	return 0;
	
	ptr = (malloc(count*size));
	
	if(!ptr)
		return 0;
	ft_bzero(ptr,(count*size));
	return ptr;
}

#include <stdio.h>
int main()
{
	int *ptr;
	int i = 0;
	ptr = ft_calloc(5, sizeof(int));
	while(i<5)
	{
		printf("%d", ptr[i]);
		i++;
	}
	free(ptr);
}