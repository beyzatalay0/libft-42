/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyatala <beyatala@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 20:01:41 by beyatala          #+#    #+#             */
/*   Updated: 2026/08/06 20:28:59 by beyatala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strrchr(const char *s, int c)
{
    int i;

    i=0;
    c = (char)c;

    while(s[i])
        i++;
    while(i>=0)
    {
        if(s[i]== c)
            return ((char *)&s[i]);
        i--;
    }
    return 0; 
}