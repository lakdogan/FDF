# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lakdogan <lakdogan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/21 18:05:54 by lakdogan          #+#    #+#              #
#    Updated: 2025/02/22 12:19:26 by lakdogan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			:= 	cc
CFLAGS 		:= 	-Wall -Wextra -Werror \
				-Ofast -ffast-math \
				-mtune=native -march=native -funroll-loops

LIBFT_URL	:=	https://github.com/lakdogan/libft.git
LIBFT_DIR	:=	libft
MLX_URL		:=	https://github.com/lakdogan/minilibix.git
MLX_DIR		:=	minilibix
BONUS_DIR 	:= 	srcs/func/mlx_related/bonus

INCLUDES	:=	-I./inc -I./$(LIBFT_DIR) -I./$(MLX_DIR)

NAME		:=	fdf


LIBFT	:=	$(LIBFT_DIR)/libft_ftpf_gnl.a
MLX	:=	$(MLX_DIR)/libmlx.a

OBJECTS_DIR			:=	./objs/
SRCS_DIR			:=	./srcs/
FUNC_DIR			:=	$(SRCS_DIR)func/
INIT_DIR			:=	$(SRCS_DIR)init/
MEM_DIR				:= 	$(SRCS_DIR)mem/
VALIDATION_DIR		:=	$(SRCS_DIR)validation/
FILL_ARRAYS_DIR		:=	$(FUNC_DIR)fill_arrays/
GET_STATISTICS_DIR	:=	$(FUNC_DIR)get_statistics/
MLX_RELATED_DIR		:=	$(FUNC_DIR)mlx_related/
PARSE_ARRAYYS_DIR	:=	$(FUNC_DIR)parse_arrays/
READING_FILE_DIR	:=	$(FUNC_DIR)reading_file/
ALLOCATE_DIR		:=	$(MEM_DIR)allocate/
ERROR_DIR			:=	$(MEM_DIR)error/
FREE_DIR			:=	$(MEM_DIR)free/
MEM_UTIL_DIR		:=	$(MEM_DIR)mem_util/
EXIT_MLX_DIR		:=	$(MLX_RELATED_DIR)exit_mlx/
ISOMETRIC_DIR		:=	$(MLX_RELATED_DIR)isometric/
MLX_INITS_DIR		:=	$(MLX_RELATED_DIR)mlx_inits/
OFFSET_DIR			:=	$(MLX_RELATED_DIR)offset/
PRINT_DIR			:=	$(MLX_RELATED_DIR)print/
UTILS_DIR			:=	$(MLX_RELATED_DIR)utils/

FDF_MANDATORY_FILES := \
	$(SRCS_DIR)main.c \
	$(FILL_ARRAYS_DIR)ft_split_colour.c \
	$(FILL_ARRAYS_DIR)ft_split_lines_to_arr.c \
	$(FILL_ARRAYS_DIR)manage_arrays.c \
	$(GET_STATISTICS_DIR)ft_line_processing.c \
	$(GET_STATISTICS_DIR)ft_string_processing.c \
	$(MLX_RELATED_DIR)mlx_start.c \
	$(EXIT_MLX_DIR)exit.c \
	$(ISOMETRIC_DIR)transform.c \
	$(MLX_INITS_DIR)init_mlx.c \
	$(OFFSET_DIR)find_offset.c \
	$(PRINT_DIR)bresenham.c \
	$(PRINT_DIR)print_map.c \
	$(PRINT_DIR)print.c \
	$(UTILS_DIR)ft_rotate_xy.c \
	$(UTILS_DIR)scale_map.c \
	$(UTILS_DIR)a_scalers.c \
	$(UTILS_DIR)b_scalers.c \
	$(UTILS_DIR)c_scalers.c \
	$(PARSE_ARRAYYS_DIR)fill_map_c.c \
	$(PARSE_ARRAYYS_DIR)ft_atof.c \
	$(PARSE_ARRAYYS_DIR)ft_fill_map.c \
	$(READING_FILE_DIR)file_utils.c \
	$(READING_FILE_DIR)ft_read_lines.c \
	$(INIT_DIR)init_structs_a.c \
	$(INIT_DIR)init_structs_b.c \
	$(INIT_DIR)init_data_struct.c \
	$(ALLOCATE_DIR)allocate_colour.c \
	$(ALLOCATE_DIR)allocate_int.c \
	$(ALLOCATE_DIR)allocate_lines.c \
	$(ALLOCATE_DIR)allocate_map.c \
	$(ALLOCATE_DIR)allocate_x.c \
	$(ALLOCATE_DIR)allocate_y.c \
	$(ALLOCATE_DIR)allocate_z.c \
	$(ALLOCATE_DIR)allocate.c \
	$(ALLOCATE_DIR)ft_allocate_arrays.c \
	$(ALLOCATE_DIR)ft_realloc.c \
	$(ERROR_DIR)error_handler.c \
	$(FREE_DIR)free_funcs.c \
	$(FREE_DIR)free.c \
	$(MEM_UTIL_DIR)check_memory_alloc.c \
	$(VALIDATION_DIR)validate_colour.c \
	$(VALIDATION_DIR)validate_data.c \
	$(VALIDATION_DIR)validate_gridsize.c \
	$(VALIDATION_DIR)validate_input.c \
	$(VALIDATION_DIR)validate_z_value.c \
	$(VALIDATION_DIR)validation_errors.c \

OBJS_SRCS         := $(patsubst $(SRCS_DIR)%.c,$(OBJECTS_DIR)%.o,$(filter $(SRCS_DIR)%, $(FDF_MANDATORY_FILES)))
OBJS_FILL_ARRAYS  := $(patsubst $(FILL_ARRAYS_DIR)%.c,$(OBJECTS_DIR)%.o,$(filter $(FILL_ARRAYS_DIR)%, $(FDF_MANDATORY_FILES)))
OBJS_GET_STATS    := $(patsubst $(GET_STATISTICS_DIR)%.c,$(OBJECTS_DIR)%.o,$(filter $(GET_STATISTICS_DIR)%, $(FDF_MANDATORY_FILES)))
OBJS_PARSE_ARRAYS := $(patsubst $(PARSE_ARRAYYS_DIR)%.c,$(OBJECTS_DIR)%.o,$(filter $(PARSE_ARRAYYS_DIR)%, $(FDF_MANDATORY_FILES)))
OBJS_READING_FILE := $(patsubst $(READING_FILE_DIR)%.c,$(OBJECTS_DIR)%.o,$(filter $(READING_FILE_DIR)%, $(FDF_MANDATORY_FILES)))
OBJS_INIT         := $(patsubst $(INIT_DIR)%.c,$(OBJECTS_DIR)%.o,$(filter $(INIT_DIR)%, $(FDF_MANDATORY_FILES)))
OBJS_ALLOCATE     := $(patsubst $(ALLOCATE_DIR)%.c,$(OBJECTS_DIR)%.o,$(filter $(ALLOCATE_DIR)%, $(FDF_MANDATORY_FILES)))
OBJS_ERROR        := $(patsubst $(ERROR_DIR)%.c,$(OBJECTS_DIR)%.o,$(filter $(ERROR_DIR)%, $(FDF_MANDATORY_FILES)))
OBJS_FREE         := $(patsubst $(FREE_DIR)%.c,$(OBJECTS_DIR)%.o,$(filter $(FREE_DIR)%, $(FDF_MANDATORY_FILES)))
OBJS_MEM_UTIL     := $(patsubst $(MEM_UTIL_DIR)%.c,$(OBJECTS_DIR)%.o,$(filter $(MEM_UTIL_DIR)%, $(FDF_MANDATORY_FILES)))
OBJS_VALIDATION   := $(patsubst $(VALIDATION_DIR)%.c,$(OBJECTS_DIR)%.o,$(filter $(VALIDATION_DIR)%, $(FDF_MANDATORY_FILES)))
OBJS_MLX_RELATED  := $(patsubst $(MLX_RELATED_DIR)%.c,$(OBJECTS_DIR)%.o,$(filter $(MLX_RELATED_DIR)%, $(FDF_MANDATORY_FILES)))
OBJS_EXIT_MLX	  := $(patsubst $(EXIT_MLX_DIR)%.c,$(OBJECTS_DIR)%.o,$(filter $(EXIT_MLX_DIR)%, $(FDF_MANDATORY_FILES)))
OBJS_ISOMETRIC	  := $(patsubst $(ISOMETRIC_DIR)%.c,$(OBJECTS_DIR)%.o,$(filter $(ISOMETRIC_DIR)%, $(FDF_MANDATORY_FILES)))
OBJS_MLX_INITS	  := $(patsubst $(MLX_INITS_DIR)%.c,$(OBJECTS_DIR)%.o,$(filter $(MLX_INITS_DIR)%, $(FDF_MANDATORY_FILES)))
OBJS_OFFSET		  := $(patsubst $(OFFSET_DIR)%.c,$(OBJECTS_DIR)%.o,$(filter $(OFFSET_DIR)%, $(FDF_MANDATORY_FILES)))
OBJS_PRINT		  := $(patsubst $(PRINT_DIR)%.c,$(OBJECTS_DIR)%.o,$(filter $(PRINT_DIR)%, $(FDF_MANDATORY_FILES)))
OBJS_UTILS		  := $(patsubst $(UTILS_DIR)%.c,$(OBJECTS_DIR)%.o,$(filter $(UTILS_DIR)%, $(FDF_MANDATORY_FILES)))

FDF_OBJS := $(patsubst $(SRCS_DIR)%.c,$(OBJECTS_DIR)%.o,$(FDF_MANDATORY_FILES))

all: libs $(NAME)
	@echo "Build completed!"

libs: $(MLX_DIR) $(LIBFT_DIR)

$(MLX_DIR):
	@if [ ! -d "$(MLX_DIR)" ]; \
	then git clone $(MLX_URL)	$(MLX_DIR); \
	fi
	# @cd $(MLX_DIR) && make

$(LIBFT_DIR):
	@if [ ! -d "$(LIBFT_DIR)" ]; \
	then git clone $(LIBFT_URL)	$(LIBFT_DIR); \
	fi
	# @cd $(LIBFT_DIR) && make

$(LIBFT): $(LIBFT_DIR)
	@$(MAKE) -C $(LIBFT_DIR)
	@cd $(LIBFT_DIR) && make
	@touch $(LIBFT)
	
$(NAME): $(LIBFT) $(MLX) $(FDF_OBJS)
	@if	[ "$$(uname)" = "Darwin" ]; \
	then \
		$(CC) $(CFLAGS) $(FDF_OBJS) $(LIBFT) -L$(MLX_DIR) -lmlx -framework OpenGL -framework AppKit -o $(NAME); \
	else \
		$(CC) $(CFLAGS) $(FDF_OBJS) $(LIBFT) -L$(MLX_DIR) -lmlx -lXext -lX11 -lm -o $(NAME); \
	fi

$(MLX): $(MLX_DIR)
	@$(MAKE) -C $(MLX_DIR)
	@cd $(MLX_DIR) && make
	@touch $(MLX)
$(OBJECTS_DIR)%.o: 	$(SRCS_DIR)%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(OBJECTS_DIR)%.o:	$(FILL_ARRAYS_DIR)%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(OBJECTS_DIR)%.o:	$(GET_STATISTICS_DIR)%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(OBJECTS_DIR)%.o:	$(PARSE_ARRAYYS_DIR)%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(OBJECTS_DIR)%.o:	$(READING_FILE_DIR)%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(OBJECTS_DIR)%.o:	$(INIT_DIR)%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(OBJECTS_DIR)%.o:	$(ALLOCATE_DIR)%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(OBJECTS_DIR)%.o:	$(ERROR_DIR)%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(OBJECTS_DIR)%.o:	$(FREE_DIR)%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(OBJECTS_DIR)%.o:	$(MEM_UTIL_DIR)%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(OBJECTS_DIR)%.o:	$(VALIDATION_DIR)%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(OBJECTS_DIR)%.o:	$(EXIT_MLX_DIR)%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(OBJECTS_DIR)%.o:	$(ISOMETRIC_DIR)%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(OBJECTS_DIR)%.o:	$(MLX_INITS_DIR)%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(OBJECTS_DIR)%.o:	$(OFFSET_DIR)%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(OBJECTS_DIR)%.o:	$(PRINT_DIR)%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(OBJECTS_DIR)%.o:	$(UTILS_DIR)%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(OBJECTS_DIR)%.o:	$(MLX_RELATED_DIR)%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@


clean:
	@rm -rf $(OBJECTS_DIR)
	@$(MAKE) -C $(LIBFT_DIR) fclean || true
	# @if [ -d "$(MLX_DIR)" ]; then $(MAKE) -C $(MLX_DIR) fclean || true; fi
	@$(MAKE) -C $(MLX_DIR) fclean || true
	@$(MAKE) -C $(BONUS_DIR) clean || true
fclean:	clean
	@$(MAKE) -C $(BONUS_DIR) fclean || true
	@if	[ -f $(NAME) ]; \
	then \
	rm -f $(NAME); \
	fi
	@$(MAKE) -C $(LIBFT_DIR) fclean || true
	rm -rf $(LIBFT_DIR) $(MLX_DIR)
	@rm -rf objs

re: fclean all

bonus:
	$(MAKE) -C $(BONUS_DIR)

.PHONY: all libs clean fclean re