/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyatala <beyatala@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/13 15:57:16 by beyatala          #+#    #+#             */
/*   Updated: 2026/08/13 16:27:19 by beyatala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
size_t	ft_strlen(const char *str);
char *ft_strchr(const char *s, int c);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
char *ft_strtrim(char const *s1, char const *set)
{
    char *trim;
    size_t start;
    size_t end;
    if(!s1 || !set)
        return NULL;
    while(s1[start] && ft_strchr(set, s1[start]))
        start++;
    end = ft_strlen(s1);
    while(end>start && ft_strchr(set, s1[end-1]))
        end--;
    trim = (char *)malloc(sizeof(char)*(end-start+1));
    if(!trim)
        return NULL;
    ft_strlcpy(trim, &s1[start], end-start+1);
    return trim;
}