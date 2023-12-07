/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkoca <dkoca@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 20:44:20 by dkoca             #+#    #+#             */
/*   Updated: 2023/12/05 20:44:20 by dkoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
char *ft_strchr(const char *s, int c)
{
    while ((*s++))
    {
        if (*s == c)
            return ((char *)s);
    }
    return (NULL);
}