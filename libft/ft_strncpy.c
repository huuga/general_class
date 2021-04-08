/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlacresh <rlacresh@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 10:02:43 by rlacresh          #+#    #+#             */
/*   Updated: 2021/04/08 10:02:43 by rlacresh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, char *src, size_t n)
{
	char	*dest_copy;
	int		diff;

	dest_copy = dest;
	dest = ft_strcpy(dest, src);
	if ((diff = n - ft_strlen(src)) > 0)
	{
		dest = dest + ft_strlen(src) + 1;
		while (diff > 0)
		{
			*dest = 0;
			dest++;
			diff--;
		}
	}
	return (dest_copy);
}