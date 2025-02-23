# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lakdogan <lakdogan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/22 06:45:48 by lakdogan          #+#    #+#              #
#    Updated: 2025/02/22 14:10:51 by lakdogan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			:= 	cc
CFLAGS 		:= 	-Wall -Wextra -Werror \
				-Ofast -ffast-math \
				-mtune=native -march=native -funroll-loops

LIBFT_URL	:=	https://github.com/lakdogan/libft.git
LIBFT_DIR	:=	./../../../../libft
MLX_URL		:=	https://github.com/lakdogan/minilibix.git
MLX_DIR		:=	./../../../../minilibix

INCLUDES	:=	-I./ -I./../../../../$(LIBFT_DIR) -I./../../../../$(MLX_DIR)

NAME		:=	fdf_bonus


LIBFT	:=	$(LIBFT_DIR)/libft_ftpf_gnl.a
MLX	:=	$(MLX_DIR)/libmlx.a

OBJECTS_DIR			:=	./../../../../objs_bonus/
SRCS_DIR			:=	./../../../../srcs/
BONUS_DIR			:=	./
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
AUTO_ROTATIONS_DIR	:=	$(BONUS_DIR)auto_rotations/
FEATURES_DIR		:=	$(BONUS_DIR)features/
INIT_B_DIR			:=	$(BONUS_DIR)init_b/
KEYHOOKS_DIR		:=	$(BONUS_DIR)keyhooks/
MANUAL_ROTATIONS_DIR:=	$(BONUS_DIR)manual_rotations/
MOVE_IN_PLANE_DIR	:=	$(BONUS_DIR)move_in_plane/
PRINT_B_DIR			:=	$(BONUS_DIR)print_b/
RESET_FUNCTIONS_DIR	:=	$(BONUS_DIR)reset_functions/
ROTATIONS_DIR		:=	$(BONUS_DIR)rotations/
UTILS_B_DIR			:=	$(BONUS_DIR)utils_b/

FDF_BONUS_FILES := \
	$(BONUS_DIR)main.c \
	$(BONUS_DIR)mlx_start_bonus.c \
	$(FILL_ARRAYS_DIR)ft_split_colour.c \
	$(FILL_ARRAYS_DIR)ft_split_lines_to_arr.c \
	$(FILL_ARRAYS_DIR)manage_arrays.c \
	$(GET_STATISTICS_DIR)ft_line_processing.c \
	$(GET_STATISTICS_DIR)ft_string_processing.c \
	$(EXIT_MLX_DIR)exit.c \
	$(ISOMETRIC_DIR)transform.c \
	$(MLX_INITS_DIR)init_mlx.c \
	$(OFFSET_DIR)find_offset.c \
	$(PRINT_DIR)bresenham.c \
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
	$(INIT_DIR)init_structs_b.c \
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
	$(AUTO_ROTATIONS_DIR)a_auto_x_bonus.c \
	$(AUTO_ROTATIONS_DIR)automation_bonus.c \
	$(AUTO_ROTATIONS_DIR)b_auto_y_bonus.c \
	$(AUTO_ROTATIONS_DIR)c_auto_z_bonus.c \
	$(AUTO_ROTATIONS_DIR)d_auto_xy_bonus.c \
	$(AUTO_ROTATIONS_DIR)e_auto_yx_bonus.c \
	$(AUTO_ROTATIONS_DIR)f_auto_xz_bonus.c \
	$(AUTO_ROTATIONS_DIR)g_auto_zx_bonus.c \
	$(AUTO_ROTATIONS_DIR)h_auto_yz_bonus.c \
	$(AUTO_ROTATIONS_DIR)i_auto_zy_bonus.c \
	$(AUTO_ROTATIONS_DIR)j_auto_xyz_bonus.c \
	$(AUTO_ROTATIONS_DIR)k_auto_xzy_bonus.c \
	$(AUTO_ROTATIONS_DIR)l_auto_yxz_bonus.c \
	$(AUTO_ROTATIONS_DIR)m_auto_yzx_bonus.c \
	$(AUTO_ROTATIONS_DIR)n_auto_zxy_bonus.c \
	$(AUTO_ROTATIONS_DIR)o_auto_zyx_bonus.c \
	$(FEATURES_DIR)features_bonus.c \
	$(FEATURES_DIR)parallel_bonus.c \
	$(FEATURES_DIR)patternchanger_bonus.c \
	$(FEATURES_DIR)printings_bonus.c \
	$(FEATURES_DIR)radians_changer_bonus.c \
	$(FEATURES_DIR)zoom_bonus.c \
	$(KEYHOOKS_DIR)keyhooks_bonus.c \
	$(INIT_B_DIR)init_data_struct_bonus.c \
	$(INIT_B_DIR)init_structs_bonus.c \
	$(MANUAL_ROTATIONS_DIR)a_manual_x_bonus.c \
	$(MANUAL_ROTATIONS_DIR)b_manual_y_bonus.c \
	$(MANUAL_ROTATIONS_DIR)c_manual_z_bonus.c \
	$(MANUAL_ROTATIONS_DIR)d_manual_xy_bonus.c \
	$(MANUAL_ROTATIONS_DIR)e_manual_yx_bonus.c \
	$(MANUAL_ROTATIONS_DIR)f_manual_xz_bonus.c \
	$(MANUAL_ROTATIONS_DIR)g_manual_zx_bonus.c \
	$(MANUAL_ROTATIONS_DIR)i_manual_zy_bonus.c \
	$(MANUAL_ROTATIONS_DIR)j_manual_xyz_bonus.c \
	$(MANUAL_ROTATIONS_DIR)k_manual_xzy_bonus.c \
	$(MANUAL_ROTATIONS_DIR)l_manual_yxz_bonus.c \
	$(MANUAL_ROTATIONS_DIR)m_manual_yzx_bonus.c \
	$(MANUAL_ROTATIONS_DIR)n_manual_zxy_bonus.c \
	$(MANUAL_ROTATIONS_DIR)o_manual_zyx_bonus.c \
	$(MOVE_IN_PLANE_DIR)auto_move_bonus.c \
	$(MOVE_IN_PLANE_DIR)move_map_bonus.c \
	$(PRINT_B_DIR)print_bonus.c \
	$(PRINT_B_DIR)print_map_bonus.c \
	$(RESET_FUNCTIONS_DIR)resets_bonus.c \
	$(ROTATIONS_DIR)a_rotation_x_bonus.c \
	$(ROTATIONS_DIR)b_rotation_y_bonus.c \
	$(ROTATIONS_DIR)c_rotation_z_bonus.c \
	$(ROTATIONS_DIR)d_rotation_xy_bonus.c \
	$(ROTATIONS_DIR)e_rotation_yx_bonus.c \
	$(ROTATIONS_DIR)f_rotation_xz_bonus.c \
	$(ROTATIONS_DIR)g_rotation_zx_bonus.c \
	$(ROTATIONS_DIR)h_rotation_yz_bonus.c \
	$(ROTATIONS_DIR)i_rotation_zy_bonus.c \
	$(ROTATIONS_DIR)j_rotation_xyz_bonus.c \
	$(ROTATIONS_DIR)k_rotation_xzy_bonus.c \
	$(ROTATIONS_DIR)l_rotation_yxz_bonus.c \
	$(ROTATIONS_DIR)m_rotation_yzx_bonus.c \
	$(ROTATIONS_DIR)n_rotation_zxy_bonus.c \
	$(ROTATIONS_DIR)o_rotation_zyx_bonus.c \
	$(ROTATIONS_DIR)rotate_xy_twod_bonus.c \
	$(UTILS_B_DIR)plane_rotate_bonus.c \


OBJS_BONUS		  		:= $(patsubst $(BONUS_DIR)%.c,$(OBJECTS_DIR)%.o,$(filter $(BONUS_DIR)%, $(FDF_BONUS_FILES)))
OBJS_FILL_ARRAYS  		:= $(patsubst $(FILL_ARRAYS_DIR)%.c,$(OBJECTS_DIR)%.o,$(filter $(FILL_ARRAYS_DIR)%, $(FDF_BONUS_FILES)))
OBJS_GET_STATS    		:= $(patsubst $(GET_STATISTICS_DIR)%.c,$(OBJECTS_DIR)%.o,$(filter $(GET_STATISTICS_DIR)%, $(FDF_BONUS_FILES)))
OBJS_PARSE_ARRAYS 		:= $(patsubst $(PARSE_ARRAYYS_DIR)%.c,$(OBJECTS_DIR)%.o,$(filter $(PARSE_ARRAYYS_DIR)%, $(FDF_BONUS_FILES)))
OBJS_READING_FILE 		:= $(patsubst $(READING_FILE_DIR)%.c,$(OBJECTS_DIR)%.o,$(filter $(READING_FILE_DIR)%, $(FDF_BONUS_FILES)))
OBJS_INIT 				:= $(patsubst $(INIT_DIR)%.c,$(OBJECTS_DIR)%.o,$(filter-out $(INIT_DIR)init_data_struct.c $(INIT_DIR)init_structs_a.c,$(filter $(INIT_DIR)%, $(FDF_BONUS_FILES))))
OBJS_ALLOCATE     		:= $(patsubst $(ALLOCATE_DIR)%.c,$(OBJECTS_DIR)%.o,$(filter $(ALLOCATE_DIR)%, $(FDF_BONUS_FILES)))
OBJS_ERROR        		:= $(patsubst $(ERROR_DIR)%.c,$(OBJECTS_DIR)%.o,$(filter $(ERROR_DIR)%, $(FDF_BONUS_FILES)))
OBJS_FREE         		:= $(patsubst $(FREE_DIR)%.c,$(OBJECTS_DIR)%.o,$(filter $(FREE_DIR)%, $(FDF_BONUS_FILES)))
OBJS_MEM_UTIL     		:= $(patsubst $(MEM_UTIL_DIR)%.c,$(OBJECTS_DIR)%.o,$(filter $(MEM_UTIL_DIR)%, $(FDF_BONUS_FILES)))
OBJS_VALIDATION   		:= $(patsubst $(VALIDATION_DIR)%.c,$(OBJECTS_DIR)%.o,$(filter $(VALIDATION_DIR)%, $(FDF_BONUS_FILES)))
OBJS_MLX_RELATED  		:= $(patsubst $(MLX_RELATED_DIR)%.c,$(OBJECTS_DIR)%.o,$(filter $(MLX_RELATED_DIR)%, $(FDF_BONUS_FILES)))
OBJS_EXIT_MLX	  		:= $(patsubst $(EXIT_MLX_DIR)%.c,$(OBJECTS_DIR)%.o,$(filter $(EXIT_MLX_DIR)%, $(FDF_BONUS_FILES)))
OBJS_ISOMETRIC	  		:= $(patsubst $(ISOMETRIC_DIR)%.c,$(OBJECTS_DIR)%.o,$(filter $(ISOMETRIC_DIR)%, $(FDF_BONUS_FILES)))
OBJS_MLX_INITS	  		:= $(patsubst $(MLX_INITS_DIR)%.c,$(OBJECTS_DIR)%.o,$(filter $(MLX_INITS_DIR)%, $(FDF_BONUS_FILES)))
OBJS_OFFSET		  		:= $(patsubst $(OFFSET_DIR)%.c,$(OBJECTS_DIR)%.o,$(filter $(OFFSET_DIR)%, $(FDF_BONUS_FILES)))
OBJS_PRINT		  		:= $(patsubst $(PRINT_DIR)bresenham.c,$(OBJECTS_DIR)bresenham.o,$(filter $(PRINT_DIR)bresenham, $(FDF_BONUS_FILES)))
OBJS_UTILS		  		:= $(patsubst $(UTILS_DIR)%.c,$(OBJECTS_DIR)%.o,$(filter $(UTILS_DIR)%, $(FDF_BONUS_FILES)))
OBJS_AUTO_ROTATIONS 	:= $(patsubst $(AUTO_ROTATIONS_DIR)%.c,$(OBJECTS_DIR)%.o,$(filter $(AUTO_ROTATIONS_DIR)%, $(FDF_BONUS_FILES)))
OBJS_FEATURES	  		:= $(patsubst $(FEATURES_DIR)%.c,$(OBJECTS_DIR)%.o,$(filter $(FEATURES_DIR)%, $(FDF_BONUS_FILES)))
OBJS_KEYHOOKS			:= $(patsubst $(KEYHOOKS_DIR)%.c,$(OBJECTS_DIR)%.o,$(filter $(KEYHOOKS_DIR)%, $(FDF_BONUS_FILES)))
OBJS_MANUAL_ROTATIONS	:= $(patsubst $(MANUAL_ROTATIONS_DIR)%.c,$(OBJECTS_DIR)%.o,$(filter $(MANUAL_ROTATIONS_DIR)%, $(FDF_BONUS_FILES)))
OBJS_MOVE_IN_PLANE		:= $(patsubst $(MOVE_IN_PLANE_DIR)%.c,$(OBJECTS_DIR)%.o,$(filter $(MOVE_IN_PLANE_DIR)%, $(FDF_BONUS_FILES)))
OBJS_PRINT_B			:= $(patsubst $(PRINT_B_DIR)%.c,$(OBJECTS_DIR)%.o,$(filter $(PRINT_B_DIR)%, $(FDF_BONUS_FILES)))
OBJS_RESET_FUNCTIONS	:= $(patsubst $(RESET_FUNCTIONS_DIR)%.c,$(OBJECTS_DIR)%.o,$(filter $(RESET_FUNCTIONS_DIR)%, $(FDF_BONUS_FILES)))																																												
OBJS_ROTATIONS			:= $(patsubst $(ROTATIONS_DIR)%.c,$(OBJECTS_DIR)%.o,$(filter $(ROTATIONS_DIR)%, $(FDF_BONUS_FILES)))
OBJS_UTILS_B			:= $(patsubst $(UTILS_B_DIR)%.c,$(OBJECTS_DIR)%.o,$(filter $(UTILS_B_DIR)%, $(FDF_BONUS_FILES)))
OBJS_INIT_B				:= $(patsubst $(INIT_B_DIR)%.c,$(OBJECTS_DIR)%.o,$(filter $(INIT_B_DIR)%, $(FDF_BONUS_FILES)))

FDF_OBJS := $(patsubst $(SRCS_DIR)%.c,$(OBJECTS_DIR)%.o,$(FDF_BONUS_FILES))


all:	libs $(LIBFT)	$(NAME)

libs:	$(MLX_DIR)	$(LIBFT_DIR)

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

$(NAME): $(FDF_OBJS)
	@if	[ "$$(uname)" = "Darwin" ]; \
	then \
	$(CC)	$(CFLAGS)	$(FDF_OBJS) \
	$(LIBFT) \
	-L$(MLX_DIR) -lmlx -framework OpenGL -framework AppKit  -Ofast -ffast-math -mtune=native -march=native -funroll-loops \
	-o $(NAME); \
	else \
	$(CC)	$(CFLAGS)	$(FDF_OBJS) \
	$(LIBFT) \
	-L$(MLX_DIR) -lmlx -o $(NAME); \
	fi

$(OBJECTS_DIR)%.o: $(SRCS_DIR)%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(OBJECTS_DIR)%.o: 	$(BONUS_DIR)%.c
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

$(OBJECTS_DIR)bresenham.o:	$(PRINT_DIR)bresenham.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(OBJECTS_DIR)%.o:	$(UTILS_DIR)%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(OBJECTS_DIR)%.o:	$(MLX_RELATED_DIR)%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@
	
$(OBJECTS_DIR)%.o: 	$(AUTO_ROTATIONS_DIR)%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(OBJECTS_DIR)%.o: 	$(FEATURES_DIR)%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(OBJECTS_DIR)%.o: 	$(KEYHOOKS_DIR)%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@
	
$(OBJECTS_DIR)%.o: 	$(MANUAL_ROTATIONS_DIR)%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(OBJECTS_DIR)%.o: 	$(MOVE_IN_PLANE_DIR)%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(OBJECTS_DIR)%.o: 	$(PRINT_B_DIR)%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(OBJECTS_DIR)%.o: 	$(RESET_FUNCTIONS_DIR)%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(OBJECTS_DIR)%.o: 	$(ROTATIONS_DIR)%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(OBJECTS_DIR)%.o: 	$(UTILS_B_DIR)%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(OBJECTS_DIR)%.o: 	$(INIT_B_DIR)%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	@rm -rf $(OBJECTS_DIR)
	@$(MAKE) -C $(LIBFT_DIR) clean || true
	@if [ -d "$(MLX_DIR)" ]; then $(MAKE) -C $(MLX_DIR) clean || true; fi
fclean:	clean
	@if	[ -f $(NAME) ]; \
	then \
	rm -f $(NAME); \
	fi
	@$(MAKE) -C $(LIBFT_DIR) fclean || true
	rm -rf $(LIBFT_DIR) $(MLX_DIR)
	@rm -rf objs_bonus

re: fclean all

.PHONY: all libs clean fclean re