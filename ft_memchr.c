/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyatala <beyatala@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/09 16:02:06 by beyatala          #+#    #+#             */
/*   Updated: 2026/08/09 19:43:03 by beyatala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void *ft_memchr(const void *s, int c, size_t n)
{
    const unsigned char *str =(unsigned char *)s;
    size_t i;
    i = 0;
    
    while(i<n)
    {
        if(str[i] == (unsigned char)c)
            return((void *)&str[i]);
        i++;
    }
    return 0;
}

#include <stdio.h>
int main()
{
    char a[]="beyza";
    ft_memchr(a, 'z', 5);
    printf("%p", a);
}