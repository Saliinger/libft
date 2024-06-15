.PHONY: all libft printf GNL clean fclean re move_libs

all: create_dir libft printf #GNL

create_dir:
	@mkdir -p compiled

libft:
	@echo "Compiling in libft"
	@$(MAKE) -C ./libft
	@mv ./libft/libft.a compiled/

printf:
	@echo "Compiling in printf"
	@$(MAKE) -C ./printf
	@mv ./printf/libprintf.a compiled/

#GNL:
#	@echo "Compiling in GNL"
#	@$(MAKE) -C ./gnl
#	@mv ./gnl/libgnl.a compiled/


clean:
	@$(MAKE) -C ./libft clean
	@$(MAKE) -C ./printf clean
#	@$(MAKE) -C ./gnl clean
	@rm -rf compiled

fclean:
	@$(MAKE) -C ./libft fclean
	@$(MAKE) -C ./printf fclean
#	@$(MAKE) -C ./gnl fclean
	@rm -rf compiled

re: fclean all
