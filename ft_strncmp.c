/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkoca <dkoca@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 21:44:49 by dkoca             #+#    #+#             */
/*   Updated: 2023/12/05 21:44:49 by dkoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    while (*s1 && *s2 && n > 0)
    {
        if (*s1 == *s2)
        {
           s1++;
           s2++;
        }
        n--;
    }
    return ((unsigned char)*s1 - (unsigned char)*s2);
}

#include <stdio.h>
int main()
{
    const char *s1 = "Ab";
    const char *s2 = "Ac";
    size_t size = 5;
    printf("%i\n", ft_strncmp(s1, s2, size));
    printf("%i\n", strncmp(s1, s2, size));
}