/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyatala <beyatala@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/09 17:16:50 by beyatala          #+#    #+#             */
/*   Updated: 2026/08/09 19:41:39 by beyatala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    const unsigned char *d1 = (unsigned char *)s1;
    const unsigned char *d2 = (unsigned char *)s2;

    size_t i;
    i=0;

    while(i<n)
    {
        if(d1[i]!=d2[i])
            return(d1[i]-d2[i]);
        i++;
    }
    return(0); 
}

#include <stdio.h>
int main()
{
    char s1[]="beyza";
    char s2[]="beyz";
    int a = ft_memcmp(s1,s2,5);
    printf("%d", a);
}