/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlacresh <rlacresh@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 21:16:12 by rlacresh          #+#    #+#             */
/*   Updated: 2021/04/07 21:16:12 by rlacresh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	char	*dest_copy;

	dest_copy = dest;
	if (src == NULL)
		return (NULL);
	while(*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = 0;
	return (dest_copy);
}