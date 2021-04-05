/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 01:13:13 by marvin            #+#    #+#             */
/*   Updated: 2021/04/06 01:13:13 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	ft_memset(void *des, int c, size_t n)
{
	unsigned char *str;

	str = (unsigned char *)des;
	while(n > 0)
	{
		
		*str = c;
		str++;
		n--;
	}
}