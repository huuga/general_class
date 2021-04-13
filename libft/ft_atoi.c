/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlacresh <rlacresh@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 16:29:14 by rlacresh          #+#    #+#             */
/*   Updated: 2021/04/13 16:29:14 by rlacresh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ident(char *str)
{

	if (*str >= 1 && *str <= 32)
		return (1);
	else if (*str == 43 || *str == 45)
		return (2);
	else if (*str >= 48 && *str <= 57)
		return (3);
	else
		return (4);
}

int		ft_atoi(char *str)
{
	int		neg;
	int		res;

	neg = 1;
	res = 0;
	while(ident(str) == 1)
		str++;
	if (ident(str) == 2)
	{
		if (*str == 45)
		{
			neg = -neg;
			str++;
		}
		else
			str++;
	}
	while (ident(str) == 3)
	{
		res = (res * 10) + (*str - 48);
		str++;
	}
	return (res * neg);
}