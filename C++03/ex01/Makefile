#***** Name *****#

NAME			= ScavTrap

#***** Sources / Objs *****#

SRC				=	main.cpp \
					ClapTrap.cpp \
					ScavTrap.cpp

OBJ_DIR			= obj
OBJS			= $(addprefix $(OBJ_DIR)/, $(SRC:.cpp=.o))

#***** Couleurs *****#

GREEN		=	\033[1;32m
BG_GREEN	=	\033[42m
BLUE		=	\033[0;94m
RED			=	\033[1;31m
GREY		=	\033[0;37m
ENDCOLOR	=	\033[0m

#***** Textes *****#

START_TXT		=	echo "$(GREEN)Compilation of $(NAME) just started$(ENDCOLOR)"
TEST_TXT		=	echo "$(GREY)Running some test$(ENDCOLOR)\n"
END_COMP_TXT	=	echo "$(GREEN)Compilation is done$(ENDCOLOR)"
CLEAN_TXT		=	echo "$(RED)Deleting objects$(ENDCOLOR)"
FCLEAN_TXT		=	echo "$(RED)Deleting program$(ENDCOLOR)"
END_TXT			=	echo "$(GREEN)Cleaning succes$(ENDCOLOR)"
BS_N_TXT		=	echo "\n"

#***** Message compilation *****#

TOTAL_FILES		=	$(words $(SRC))
COMPILED_FILE	=	0
MESSAGE			=	"Compilation en cours : $(COMPILED_FILES)/$(TOTAL_FILES) ($(shell expr $(COMPILED_FILES) \* 100 / $(TOTAL_FILES))%)"

#***** Flags *****#

CXX				=	c++
CXXFLAGS		=	-Wall -Wextra -Werror -std=c++98 -g
L				=	$(CXXFLAGS) -g -fsanitize=address -fno-omit-frame-pointer
RM				=	rm -f

#ifeq ($(shell uname), Linux)
#
#endif

#***** Compilation *****#

all : logo start $(NAME)

logo :
		@tput setaf 2; cat ascii_art/hibou; tput setaf default
		@$(BS_N_TXT)

start:
		@tput setaf 2; cat ascii_art/logo; tput setaf default
		@$(BS_N_TXT)
		@$(START_TXT)

$(OBJ_DIR):
		@mkdir -p $(OBJ_DIR)

$(OBJ_DIR)/%.o: %.cpp | $(OBJ_DIR)
		@mkdir -p $(dir $@)
		@$(CXX) $(CXXFLAGS) -c $< -o $@
		$(eval COMPILED_FILES=$(shell echo $$(($(COMPILED_FILES)+1))))
		@printf "$(GREEN)%s$(ENDCOLOR)" $(MESSAGE)
		@printf "\r"

$(NAME) :	${OBJS}
		@$(BS_N_TXT)
		@${CXX} ${CXXFLAGS} ${OBJS} -o ${NAME}
		@$(END_COMP_TXT)
		@tput setaf 2; cat ascii_art/small_hibou1; tput setaf default

#***** Clean *****#

clean:
		@$(CLEAN_TXT)
		@${RM} ${OBJS}
		@$(RM) -r $(OBJ_DIR)
		@tput setaf 1; cat ascii_art/trash; tput setaf default

fclean:		clean
		@$(FCLEAN_TXT)
		@${RM} ${NAME}
		@$(END_TXT)

re:		fclean all

.PHONY:	all clean fclean 