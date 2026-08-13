/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyatala <beyatala@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/08 13:23:57 by beyatala          #+#    #+#             */
/*   Updated: 2026/08/08 17:43:26 by beyatala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <string.h>
void *ft_memcpy(void *dest, const void *src, size_t n);
void *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char *d;
    const unsigned char *s;
    
    d = (unsigned char *)dest;
    s = (unsigned char *)src;
    if(!dest && !src)
        return (NULL);
    if(d < s)
       ft_memcpy(d, s, n);
    else
    {
        while(n-- > 0)
            d[n]=s[n];
    }
    return (dest);
}

#include <stdio.h>
int main()
{
    char str[]=("merhaba dunya");
    char str2[]=("merhaba dunya");
    ft_memmove(str + 1, str, 4);
    printf("%s\n", str);
    memmove(str2 + 1, str2, 4);
    printf("%s", str2);
    // char dest[10];
    // char src[] = "fatih";
    // printf("%s\n", (char *)ft_memmove(dest, src, 5));

    // char str[] = "fatih";
    // printf("%p\n", &str[0]);
    // printf("%p\n", &str[1]);
    // printf("%p\n", &str[2]);
    // printf("%p\n", &str[3]);
    // printf("%p\n", &str[4]);

}


// 0x1      0x2         0x3        0x4     0x5      0x6
// f          a          t        i         h       \0

// f            f        a           t       i      h

// 