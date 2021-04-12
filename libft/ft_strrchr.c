/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlacresh <rlacresh@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 22:47:15 by rlacresh          #+#    #+#             */
/*   Updated: 2021/04/12 22:47:15 by rlacresh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(char *str, int c)
{
	char ch;
	size_t ssize;

	ch = c;
	ssize = ft_strlen(str);
	str = str + ssize;
	while (ssize > 0)
	{
		if (*str == ch)
			return (str);
		ssize--;
		str--;
	}
	if (*str == ch)
		return (str);
	return (NULL);
}