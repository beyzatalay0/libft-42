/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyatala <beyatala@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/09 22:02:54 by beyatala          #+#    #+#             */
/*   Updated: 2026/08/11 16:11:34 by beyatala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>

size_t	ft_strlen(const char *str);

char *ft_strdup(const char *s)
{
    char *dest;
    int i;
    i=0;
    dest = malloc(ft_strlen(s)+1);
    if(!dest)
        return 0;
    while(s[i] !='\0')
    {
        dest[i]=s[i];
        i++;
    }
    dest[i]='\0';
    return dest;
}

#include <stdio.h>
int main()
{
    const char s[]="beyzaaaaaa";
    char *a = ft_strdup(s);
    printf("%s", a);
    free(a);
    return 0;
}
