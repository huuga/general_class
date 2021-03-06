/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlacresh <rlacresh@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 19:12:33 by rlacresh          #+#    #+#             */
/*   Updated: 2021/04/11 19:12:33 by rlacresh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t 		ft_strlcat(char *dst, char *src, size_t dsize)
{
	char *dst_copy;
	char *src_copy;
	size_t n;
	size_t dlen;

	dst_copy = dst;
	src_copy = src;
	n = dsize;
	while (n-- != 0 && *dst != '\0')
		dst++;
	dlen = dst - dst_copy;
	n = dsize - dlen;
	if (n-- == 0)
		return(dlen + ft_strlen(src));
	while (*src != '\0')
	{
		if (n != 0)
		{
			*dst++ = *src;
			n--;
		}
		src++;
	}
	*dst = '\0';
	return (dlen + (src - src_copy));
}