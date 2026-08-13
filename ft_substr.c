/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyatala <beyatala@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 15:53:27 by beyatala          #+#    #+#             */
/*   Updated: 2026/08/11 18:42:29 by beyatala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlen(const char *str);

char *ft_strdup(const char *s);

void *ft_memcpy(void *dest, const void *src, size_t n);

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char const *src = (char *)s;
    size_t i;
    char *ptr;
    i = 0;

    if(src[i] == '\0')
        return 0;
    int src_len = ft_strlen(src);
    if(start>src_len)
        return(ft_strdup(""));
    if(len>src_len-start)
    {
        len=src_len-start;
        ptr = malloc(len+1);
        if(!ptr)
            return 0;
        ft_memcpy(ptr,src_len+start,len+1);
    }
    return (ptr);
}
#include <stdio.h>
int main()
{
    char const str[]="merhaba";
    char *a = ft_strdup(str, 3, 15);
    printf("%s", a);
    free(a);
}