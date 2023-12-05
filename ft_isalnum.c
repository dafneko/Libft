/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkoca <dkoca@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 23:05:09 by dkoca             #+#    #+#             */
/*   Updated: 2023/11/17 23:19:26 by dkoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalnum(int c)
{
    if(((c >= 65 && c <= 90) || (c >= 97 && c <= 122) || (c <= '9' && c >= '0')))
        return (1);
    return (0);
}