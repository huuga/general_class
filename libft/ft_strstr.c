/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlacresh <rlacresh@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 23:16:34 by rlacresh          #+#    #+#             */
/*   Updated: 2021/04/12 23:16:34 by rlacresh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char    *ft_strstr(char *haystack, char *needle)
{
    char    *needle_start;
    char    *temp;
    
    needle_start = needle;
    while (*haystack)
    {
        if (*haystack == *needle)
        {
            temp = haystack;
            while (*needle)
            {
                if (*haystack != *needle)
                    break;
                haystack++;
                needle++;
            }
            if (*needle == 0)
                return (temp);
        }
        haystack++;
        needle = needle_start;
    }
    return (NULL);
}