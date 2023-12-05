/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkoca <dkoca@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 18:36:55 by dkoca             #+#    #+#             */
/*   Updated: 2023/12/05 18:36:55 by dkoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t ft_strlen(const char *s)
{
    size_t  i;

    i = 0;
    while(*s)
        i++;
    return(i);
}

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t slength;

    slength = ft_strlen(src);
    if (!size)
        return (slength + size);
    while (*dst)
        dst++;
    while ((*src) && size--)
        *dst++ = *src++;
    *dst = '\0';
    return (slength + size);
}


