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

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t slen;
    size_t dlen;

    slen = ft_strlen(src);
    dlen = ft_strlen(dst);
    if ((!dst || !src)) // check if there is space or if they exist
        return (0); // if not then it doesn't run
    if (dlen >= size)
        return (slen + size);
    while ((*dst) && --size > 0)
          dst++;
    while ((*src) && size-- > 1)
             *dst++ = *src++;
    *dst = '\0';
    return (slen + dlen);
}

/*
#include <stdio.h>
int main()
{
    const char *s = "dnsad3848--";
    char *d = "aahahah";
    size_t n = 20;
    printf("%zu\n", strlcat(d, s, n));
    printf("%zu", ft_strlcat(d, s,n));
}
*/


