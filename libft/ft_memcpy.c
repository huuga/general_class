/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 08:02:24 by marvin            #+#    #+#             */
/*   Updated: 2021/04/06 08:02:24 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char *dest_copy;

	dest_copy = dest;
	while(n > 0 && *(unsigned char *)src)
	{
		*dest_copy = *(unsigned char *)src;
		dest_copy++;
		src++;
		n--;
	}
	*dest_copy = 0;
	return (dest);
}