/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlacresh <rlacresh@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 21:44:49 by rlacresh          #+#    #+#             */
/*   Updated: 2021/04/13 21:44:49 by rlacresh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memalloc(size_t size)
{
	void	*result;

	result = (void *)malloc(size);
	if (result == NULL)
		return (NULL);
	ft_memset(result, 0, size);
	return (result);
}