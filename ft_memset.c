/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyatala <beyatala@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 12:37:45 by beyatala          #+#    #+#             */
/*   Updated: 2026/08/07 21:02:25 by beyatala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stddef.h>

void *ft_memset(void *s, int c, size_t n)
{
    unsigned char *dst =(unsigned char *)s;
    unsigned char cc = (unsigned char)c;
    size_t i;
    i=0;
    while(i<n)
    {
        dst[i] = cc;
        i++;
    }
    return (s);
}

#include <stdio.h>
int main()
{
    // int a=10;
    // ft_memset(&a, 128, 4);
    // ft_memset(&a, 16, 3);
    // ft_memset(&a, 8, 2);
    // ft_memset(&a, 49, 1);

    // // printf("%d\n", a);
   
    // printf("%zu", (unsigned int)a);
    
    int a[] = {10, 2, 3, 4};
    
    //t_memset(&a[0], 0, 1);
    ft_memset(&a[1], 1, 2);
    ft_memset(&a[1], 0, 1);
    ft_memset(&a[3], 127,4);
    ft_memset(&a[3], 255,3);
  
    printf("%d\n", a[1]);
    printf("%d\n", a[2]);
    printf("%d\n", a[3]);
}