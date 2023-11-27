CC	= cc
CFLAGS	= -Wall -Wextra -Werror
SRCS	= ft_atoi.c ft_isalpha.c ft_itoa.c ft_memset.c  ft_memchr.c ft_putstr_fd.c  ft_strlcat.c  ft_strnstr.c  ft_tolower.c \
	ft_bzero.c    ft_isascii.c  ft_memcmp.c   ft_putchar_fd.c  ft_strchr.c ft_strlcpy.c  ft_strrchr.c  ft_toupper.c \
	ft_calloc.c   ft_isdigit.c  ft_memcpy.c   ft_putendl_fd.c  ft_strdup.c ft_strlen.c ft_strjoin.c ft_split.c \
	ft_isalnum.c  ft_isprint.c  ft_putnbr_fd.c ft_strncmp.c  ft_substr.c ft_memmove.c ft_strtrim.c ft_strmapi.c ft_striteri.c
OBJS	= $(SRCS:.c=.o)
BONUS	= ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
BOBJS	= $(BONUS:.c=.o)
RM  	= rm -rf
NAME	= libft.a

.o : .c
	$(CC) $(CFLAGS) -c $@ -o $< -I .

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS) 

bonus : $(NAME) $(BOBJS)
	ar rcs $(NAME) $(BOBJS) 

all 	: $(NAME)

clean :
	$(RM) $(OBJS) $(BOBJS)

fclean : clean
	$(RM) $(NAME)

compil :
	@echo "Compiling...\n"
	@$(CC) $(CFLAGS) -g -o lezgo $(SRCS)
	@./lezgo

debug	:
	@echo "Compiling...\n"
	@$(CC) $(CFLAGS) -g -o debug $(SRCS) $(BONUS)
	@lldb ./debug


cbonus :
	@echo "Compiling...\n"
	@$(CC) $(CFLAGS) -g -o bonus $(BONUS)
	@./bonus

re : fclean all
