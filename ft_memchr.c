/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkoca <dkoca@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 19:31:22 by dkoca             #+#    #+#             */
/*   Updated: 2023/12/06 19:31:22 by dkoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void *ft_memchr(const void *s, int c, size_t n)
{
    unsigned const char *str;
    unsigned int chr;

    chr = c;
    str = s;
    while (n > 0)
    {
        if (*str == chr)
            return ((char *)str);
        str++;
        n--;
    }
    return (NULL);
}

/*
#include <stdio.h>
int main()
{
    const void *s = "";
    int c = 'W';
    size_t n = 0;
    printf("%s\n", (char *)ft_memchr(s, c, n));
    printf("%s\n", (char *)memchr(s, c,n));
}
*/