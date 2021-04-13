/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlacresh <rlacresh@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 23:46:00 by rlacresh          #+#    #+#             */
/*   Updated: 2021/04/12 23:46:00 by rlacresh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *ft_strnstr(char *haystack, char *needle, size_t len)
{
    char    *needle_start;
    char    *temp;
    
    needle_start = needle;
    while (*haystack && len > 0)
    {
        if (*haystack == *needle)
        {
            temp = haystack;
            while (*needle && len > 0)
            {
                if (*haystack != *needle)
                    break;
                haystack++;
                needle++;
                len--;
            }
            if (*needle == 0)
                return (temp);
        }
        haystack++;
        if (len != 0)
            len--;
        needle = needle_start;
    }
    return (NULL);
}