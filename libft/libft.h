/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlacresh <rlacresh@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 09:09:51 by rlacresh          #+#    #+#             */
/*   Updated: 2021/04/07 09:09:51 by rlacresh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

size_t		ft_strlen(char *str);
void		*ft_memset(void *des, int c, size_t n);
void		ft_bzero(void *des, size_t n);
void		*ft_memcpy(void *dest, void *src, size_t n);
void		*ft_memccpy(void *dest, void *src, int c, size_t n);
void		*ft_memmove(void *dest, void *src, size_t n);
void		*ft_memchr(void *s, int c, size_t n);
int			ft_memcmp(void *s1, void *s2, size_t n);
char		*ft_strdup(char *src);
char		*ft_strcpy(char *dest, char *src);
char		*ft_strncpy(char *dest, char *src, size_t n);
char		*ft_strcat(char *dest, char *src);
char		*ft_strncat(char *dest, char *src, size_t n);
size_t		ft_strlcat(char *dst, char *src, size_t dsize);
char		*ft_strchr(char *str, int c);
char		*ft_strrchr(char *str, int c);
char		*ft_strstr(char *haystack, char *needle);
char		*ft_strnstr(char *haystack, char *needle, size_t len);
int			ft_strcmp(char *s1, char *s2);
int			ft_strncmp(char *s1, char *s2, size_t n);
int			ft_atoi(char *str);
int			ft_isalpha(int c);
int			ft_isdigit(int c);
int			ft_isalnum(int c);
int			ft_isascii(int c);
int			ft_isprint(int c);
int			ft_toupper(int c);
int			ft_tolower(int c);
void		*ft_memalloc(size_t size);
void		ft_memdel(void **ap);