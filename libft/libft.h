/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 01:06:36 by marvin            #+#    #+#             */
/*   Updated: 2021/04/06 01:06:36 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <unistd.h>

size_t		ft_strlen(const char *str);
void		*ft_memset(void *des, int c, size_t n);
void		ft_bzero(void *des, size_t n);
void		*ft_memcpy(void *dest, const void *src, size_t n);