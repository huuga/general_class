/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlacresh <rlacresh@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 09:08:48 by rlacresh          #+#    #+#             */
/*   Updated: 2021/04/07 09:08:48 by rlacresh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_memcmp(void *s1, void *s2, size_t n)
{
	while(n > 0)
	{
		if (*(char *)s1 != *(char *)s2)
		{
			return (*(char *)s1 - *(char *)s2);
		}
		s1++;
		s2++;
		n--;
	}
	return (0);
}