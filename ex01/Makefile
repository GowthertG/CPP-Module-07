ifeq (run,$(firstword $(MAKECMDGOALS)))
  RUN_ARGS := $(wordlist 2,$(words $(MAKECMDGOALS)),$(MAKECMDGOALS))
  $(eval $(RUN_ARGS):;@:)
endif

NAME = build/bin
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
SRCS =  src/main.cpp src/Serializer.cpp 

all : $(NAME)

$(NAME) : $(SRCS)
	$(CC) $(FLAGS) $(SRCS) -o $(NAME)

clean :
	rm -rf $(NAME)
fclean : clean

re : clean all

run : all
	$(NAME) $(RUN_ARGS); 