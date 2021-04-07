/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlacresh <rlacresh@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 09:08:01 by rlacresh          #+#    #+#             */
/*   Updated: 2021/04/07 09:08:01 by rlacresh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void	ft_bzero(void *des, size_t n)
{
	char			*str;
	size_t			length;
	
	str = (char *)des;
	length = ft_strlen(str);
	if (length < n)
	{
		return ;
	}
	ft_memset(str, 0, n);
}