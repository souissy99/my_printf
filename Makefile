CC	= 				gcc

STATIC = 			libmy_printf_`uname -m`-`uname -s`.a

DYNAMIC = 			libmy_printf_`uname -m`-`uname -s`.so

SRC  = 				main.c          \
  					lib.c           \
  					option.c        \
  					my_printf.c     \
  					option_2.c      \
  					lib_2.c

OBJ = 				$(SRC:%.c=%.o)
RM = 				rm -f
CFLAGS = 			-fPIC -W -Wall -Wextra -Werror -g -I.

.PHONY : 			make my_printf_static my_printf_dynamic all clean fclean re

make: 				all

my_printf_static:	$(OBJ)
					ar r $(STATIC) $(OBJ)

my_printf_dynamic:	$(OBJ)
					$(CC) $(CFLAGS) -shared -o $(DYNAMIC) $(SRC)

all:				my_printf_static my_printf_dynamic

clean:
					$(RM) $(OBJ)

fclean:				clean
					$(RM) $(STATIC) $(DYNAMIC) a.out

re:					fclean all