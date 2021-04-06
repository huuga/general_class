/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 08:02:24 by marvin            #+#    #+#             */
/*   Updated: 2021/04/06 08:02:24 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memccpy(void *dest, const void *src, int c, size_t n)
{	
	char		f;

	f = c;
	while (n > 0)
	{
		*(char *)dest = *(char *)src;
		if (*(char *)dest == f)
		{
			return(dest + 1);
		}
		dest++;
		src++;
		n--;
	}
	
	return (NULL);
}