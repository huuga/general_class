/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 20:22:58 by marvin            #+#    #+#             */
/*   Updated: 2021/04/06 20:22:58 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	char	*buffer;
	char	*buffer_copy;
	size_t	n_copy;

	n_copy = n;
	buffer = (char *)malloc(sizeof(char) * n);
	buffer_copy = buffer;
	while(n > 0)
	{
		*buffer = *(char *)src;
		buffer++;
		src++;
		n--;
	}
	ft_memcpy(dest, buffer_copy, n_copy);
	free(buffer_copy);
	return (dest);
}