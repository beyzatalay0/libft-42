/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyatala <beyatala@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/08 12:38:02 by beyatala          #+#    #+#             */
/*   Updated: 2026/08/08 17:39:09 by beyatala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *d = (unsigned char *)dest;
    const unsigned char *s = (unsigned char *)src;
    size_t i;
    i=0;
    
    while(i<n)
    {
        d[i]=s[i];
        i++;
    }
    return (void *)d;
}

// #include <stdio.h>
// int main()
// {
//     char a[15];
//     char *b = "beyza";
//     ft_memcpy(a,b,3);
//     printf("%s", a);
// }