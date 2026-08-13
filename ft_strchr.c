/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyatala <beyatala@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 17:21:18 by beyatala          #+#    #+#             */
/*   Updated: 2026/08/11 16:49:43 by beyatala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strchr(const char *s, int c)
{
    int i;
    char str;
    
    i=0;
    str = (char)c;
    
    while(s[i] !=str)
    {
        if(s[i]== '\0')
            return 0;
        i++;
    }
    return ((char *)&s[i]);
}

#include <stdio.h>
int main()
{
    char *s = "beyza";
    char c = ' ';
    
    char *sonuc = ft_strchr(s, c);

    printf("%s", sonuc);
    return 0;
}