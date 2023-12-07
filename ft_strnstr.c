/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkoca <dkoca@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 20:43:36 by dkoca             #+#    #+#             */
/*   Updated: 2023/12/06 20:43:36 by dkoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
char *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t i;
    size_t j;

    i = 0;
    j = 0;
    if (!little || *little == '\0')
        return ((char *)big);
    while (len > 0 && big[i] && little[j])
    {
       if (big[i] != little[j])
       {
           i++;
           len--;
       }
        j = 0;
       while (big[i + j] == little[j] && len > 0)
       {
               j++;
               if (little[j] == '\0')
                   return ((char *) big + i); // this is the same as return ((char *)&big[i]); and ((char *)(&(*(big + i))))
               len--;
       }
    }
    return (0);
}

/*
#include <strings.h>
#include <stdio.h>
int main()
{
    const char *big = NULL;
    const char *little = "brown";
    size_t n = 0;
    printf("%s\n", ft_strnstr(big, little, n));
    printf("%s\n", strnstr(big, little, n));

}
*/