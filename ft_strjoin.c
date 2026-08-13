/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyatala <beyatala@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/13 15:57:24 by beyatala          #+#    #+#             */
/*   Updated: 2026/08/13 16:03:38 by beyatala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
size_t	ft_strlen(const char *str);
char *ft_strjoin(char const *s1, char const *s2)
{
    size_t i;
    size_t j;
    char *ptr;
    size_t s1_len;
    size_t s2_len;

    if(!s1 || !s2)
        return NULL;
    s1_len = ft_strlen(s1);
    s2_len = ft_strlen(s2);
    ptr = (char *)malloc(sizeof(char)*(s1_len+s2_len+1));
    if(!ptr)
        return NULL;
    i=0;
    while(s1[i])
    {
        ptr[i]=s1[i];
        i++;
    }
    j=0;
    while(s2[j])
    {
        ptr[i+j]=s2[j];
        j++;
    }
    ptr[i+j]='\0';
    return ptr;
}