/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkoca <dkoca@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 20:15:14 by dkoca             #+#    #+#             */
/*   Updated: 2023/12/06 20:15:14 by dkoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned
0000 0000 0
0000 0001
.. 
0111 1111 127
1000 0000
1000 0001
1111 1111 255


signed 
0000 0000 0
0000 0001 1
0000 0010 2
0111 1111 127
1000 0000 -128
1000 0001 -127
1111 1111  -1
        1
----------
        0000

1111 1101
	   +1
1111 1110 -2

0000 0001
1111 1110
       +1
1111 1111
		9999 + 1 = 0000
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned const char	*str1;
	unsigned const char	*str2;

	str1 = s1;
	str2 = s2;
	if (n == 0)
		return (0);
	while (--n > 0 && (*str1 == *str2))
	{
		str1++;
		str2++;
	}
	return ((unsigned char)*str1 - (unsigned char)*str2);
}

// int main()
// {
//     const void *s1 = "zyxbcdefgh";
//     const void *s2 = "abcdefgxyz";
//     size_t n = 0;
//     printf("%i\n", ft_memcmp(s1, s2, n));
//     printf("%i\n", memcmp(s1, s2, n));
// }
