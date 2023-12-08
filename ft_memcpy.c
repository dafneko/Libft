/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkoca <dkoca@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 15:14:24 by dkoca             #+#    #+#             */
/*   Updated: 2023/12/04 15:14:24 by dkoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    char *d;
    const char *s;

    s = src;
    d = dest;
    while (n > 0)
    {
        *d = *s;
        d++;
        s++;
        n--;
    }
    return (dest);
}

/*
int main()
{
    const void *src = malloc(sizeof(char) * 5);
    void *dest;
    size_t n = 5;
    printf("%s", (char *)ft_memcpy(dest, src, n));
    printf("%s", memcpy(dest, src, n));
}
*/