.PHONY: all clean fclean re test

NAME = libasm.a
SOURCES_DIR = ./
SOURCES_LIST = 	ft_read.s\
				ft_write.s\
				ft_strcpy.s\
				ft_strlen.s\
				ft_strdup.s\
				ft_strcmp.s
MAIN = main.c
SOURCES = $(addprefix $(SOURCES_DIR), $(SOURCES_LIST))
OBJECTS_DIR = obj/
OBJECTS_LIST = $(patsubst %.s, %.o, $(SOURCES_LIST))
OBJECTS	= $(addprefix $(OBJECTS_DIR), $(OBJECTS_LIST))

all: $(NAME)
$(NAME): $(OBJECTS_DIR) $(OBJECTS)
	@ar rc $(NAME) $(OBJECTS)
	@ranlib $(NAME)
	@echo "$(NAME) compiled"

$(OBJECTS_DIR):
	@mkdir -p $(OBJECTS_DIR)
	@echo "$(NAME)'s $(OBJECTS_DIR) created"

$(OBJECTS_DIR)%.o : $(SOURCES_DIR)%.s
	@nasm -fmacho64 $< -o $@
	@echo "$< compiled to $@"

test: $(NAME)
	@gcc main.c $(NAME)

clean:
	@rm -rf $(OBJECTS_DIR)
	@echo "$(NAME)'s $(OBJECTS_DIR) deleted"

fclean: clean
	@rm -f $(NAME)
	@rm -f a.out
	@echo "$(NAME) deleted"

re:
	@$(MAKE) fclean
	@$(MAKE) all