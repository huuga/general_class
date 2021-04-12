# NAME	= libft.a
# CFLAGS	= -Wall -Wextra -Werror
# CC		= -c
# OBJDIR	= obj
# OBJS	= ${SRCS:.c=.o}
# SRCS	= ft_memset.c, ft_bzero.c, ft_strlen.c



# all:	${NAME}

# clean:
# 	rm	-f ${OBJS}
# ${OBJDIR}/%.o:	%.c
#     ${CC} ${CFLAGS} -c -o $@ $<

# ${NAME}:	${OBJS}

SOURCES = ${wildcard *.c}
all:
	gcc -Wall -Wextra -Werror ${SOURCES} -o q.out
clean:
	rm -f ./*.o
