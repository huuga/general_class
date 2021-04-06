/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 08:02:06 by marvin            #+#    #+#             */
/*   Updated: 2021/04/06 08:02:06 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *des, size_t n)
{
	unsigned char	*str;
	size_t			length;
	
	str = (unsigned char *)des;
	length = ft_strlen(str);
	if (length < n)
	{
		return ;
	}
	ft_memset(str, 0, n);
}