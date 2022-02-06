/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinto-r <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 20:43:01 by rpinto-r          #+#    #+#             */
/*   Updated: 2022/02/06 17:13:13 by rpinto-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

char *ft_strsjoin(char *s1, char *s2, char *sep)
{
    char *str;
    char *tmp;

    tmp = ft_strjoin(s1, sep);
    if (!tmp)
        return (0);
    str = ft_strjoin(tmp, s2);
    free(tmp);
    if (!str)
        return (0);
    return (str);
}

char *ft_strndup(char *s1, size_t n)
{
    size_t i;
    char *dup;

    if (!s1 || n < 1)
        return (0);
    dup = ft_calloc(sizeof(char), n + 1);
    if (!dup)
        return (0);
    i = -1;
    while (++i < n)
        dup[i] = s1[i];
    return (dup);
}

int ft_strcmp(char *s1, char *s2)
{
    size_t i;

    i = 0;
    while (s1[i] && s2[i] && s1[i] == s2[i])
        i++;
    return (s1[i] - s2[i]);
}