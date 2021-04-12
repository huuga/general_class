/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlacresh <rlacresh@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 22:35:12 by rlacresh          #+#    #+#             */
/*   Updated: 2021/04/12 22:35:12 by rlacresh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *ft_strchr(char *str, int c)
{
	char ch;

	ch = c;
	while (*str)
	{
		if (*str == ch)
			return (str);
		str++;
	}
	if (c == 0 && *str == 0)
		return (str);
	return (NULL);
}