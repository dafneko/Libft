/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkoca <dkoca@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 21:20:10 by dkoca             #+#    #+#             */
/*   Updated: 2023/12/05 21:20:10 by dkoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    size_t length;
    size_t i;

    length = ft_strlen(s);
    i = 0;
    while (s[length - i])
    {
        if (s[length] == c)
            return ((char *)s);
        i++;
    }
    return (0);
}