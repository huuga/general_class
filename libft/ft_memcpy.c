/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlacresh <rlacresh@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 09:08:56 by rlacresh          #+#    #+#             */
/*   Updated: 2021/04/07 09:08:56 by rlacresh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void *ft_memcpy(void *dest, void *src, size_t n)
{
	char *dest_copy;

	dest_copy = dest;
	while(n > 0)
	{
		*dest_copy = *(char *)src;
		dest_copy++;
		src++;
		n--;
	}
	*dest_copy = 0;
	return (dest);
}