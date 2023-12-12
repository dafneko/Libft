/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkoca <dkoca@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 01:27:33 by dkoca             #+#    #+#             */
/*   Updated: 2023/12/11 01:27:33 by dkoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void words_in_arr(char **arr, char *s, char c)
{
    size_t i;
    size_t k;
    size_t n;
    size_t j;

    i = 0;
    k = 0;
    n = 0;
    j = 0;
    while (arr[i][k])
    {
        if (s[n + j] != c)
        {
            /*
            arr[i][k] = s[n + j];
            n++;
            k++;
             */
            ft_strlcpy(&arr[i][k], &s[n + j], n);
            while (s[n + j] == c)
                j++;
        }
        i++;
    }
}

static size_t count_words(char const *s, char c)
{
    size_t i;
    size_t k;

    i = 0;
    k = 0;
    // if c is in the beginning or the end (strtrim takes care of that)
    // or if there are multiple in a row (the second loop handles it)
    while (s[i + k])
    {
        if (s[i + k] == c)
        {
            i++;
            while (s[i + k] == c)
                k++;
        }
        k++;
    }
    return (i + 1);
}


char **ft_split(char const *s, char c)
{
    // count words + 1 for the null
    //malloc count words in double array
    //loop words in array
    char **array;
    char *str;
    size_t i;
    size_t k;

    i = 0;
    k = 0;
    if (!s || !c)
        return (0);
    str = ft_strtrim(s,  &c);
    array = malloc(sizeof(char *) * (count_words(str, c) + 1));
    if (!array)
        return (0);


}




#include <stdio.h>
int main()
{
    char **arr;
    char const *s = "   Hi Dafne how are you Bye   ";
    char c = ' ';
    printf("%zu", count_words(ft_strtrim(s, &c), c));
    printf()

}