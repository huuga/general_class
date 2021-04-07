/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlacresh <rlacresh@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 09:09:17 by rlacresh          #+#    #+#             */
/*   Updated: 2021/04/07 09:09:17 by rlacresh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *des, int c, size_t n)
{
	char 	*str;

	str = (char *)des;
	while(n > 0 && *str)
	{
		
		*str = c;
		str++;
		n--;
	}
	return (des);
}