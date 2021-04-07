/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlacresh <rlacresh@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 09:08:36 by rlacresh          #+#    #+#             */
/*   Updated: 2021/04/07 09:08:36 by rlacresh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void *ft_memchr(void *s, int c, size_t n)
{	
	char		f;

	f = c;
	while (n > 0)
	{
		if (*(char *)s == f)
		{
			return(s);
		}
		s++;
		n--;
	}	
	return (NULL);
}