/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkoca <dkoca@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 16:54:44 by dkoca             #+#    #+#             */
/*   Updated: 2023/12/04 16:54:44 by dkoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
    char *d;
    const char *s;
    size_t i;

    s = src;
    d = dest;
    if (d > s && s + n >= d)
    {
        i = 0;
        while (i < n)
        {
            d[n - i] = s[n - i];
            i++;
        }
    }
    else
    {
        while (n > 0)
        {
            *d++ = *s++;
            n--;
        }
    }
    return (dest);
}

/*
#include <stdio.h>
#include <strings.h>
int main()
{
    char    *str = "i did not expect this";
    char    buf[21];

    bzero(buf, 21);
    printf("%s\n", (char *)ft_memmove(buf, str, 20));
    printf("%s\n", (char *)memcpy(buf, str, 4));
}
 */