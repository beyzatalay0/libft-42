/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyatala <beyatala@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 18:58:17 by beyatala          #+#    #+#             */
/*   Updated: 2026/08/09 21:54:32 by beyatala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void ft_bzero(void *s, size_t n)
{
    unsigned char *x = s;
    size_t i;
    i=0;

    
    while(i<n)
    {
        x[i]='\0';
        i++;
    }
    //return 0;
}

// #include <stdio.h>
// int main()
// {
//     unsigned char z[]= "12345";
//     ft_bzero(z, 3);
//     printf("%s", z+3);
// }