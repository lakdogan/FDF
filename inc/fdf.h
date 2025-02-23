/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lakdogan <lakdogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 21:08:57 by lakdogan          #+#    #+#             */
/*   Updated: 2025/02/22 21:04:47 by lakdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H
# include "../libft/inc/libft.h"
# include "../minilibix/mlx.h"

# define ESCAPE 53

typedef struct s_graphics
{
	void			*mlx_ptr;
	void			*mlx_win;
	void			*img;
	char			*img_addr;
	int				bpp;
	int				size_line;
	int				endian;
	int				ison;
	int				offset_x;
	int				offset_y;
	int				img_width;
	int				img_height;
	int				win_width;
	int				win_height;
	float			scale;
	float			win_multi;
}					t_graphics;

typedef struct s_line_reader
{
	char			**lines;
	char			***arr;
	char			***carr;
	char			*mapname;
	int				fd;
	size_t			countchar;
	size_t			string_length;
	size_t			string_count;
	size_t			size;
	size_t			capacity;
	size_t			line_count;
	size_t			max_string_count;
	size_t			max_string_length;
	size_t			first_string_count;
}					t_line_reader;

typedef struct s_var
{
	size_t			i;
	size_t			j;
	size_t			k;
	size_t			l;
	size_t			m;
	size_t			n;
	size_t			x;
	size_t			y;
	size_t			z;
	size_t			hexprefix;
	float			xf;
	float			yf;
	char			del;
	int				color;
}					t_var;

typedef struct s_map
{
	size_t			size;
	size_t			capacity;
	size_t			org;
	size_t			mod;
	int				colmod;
	float			***x;
	float			**y;
	float			***z;
	int				***mapcol;
	float			angle_x;
	float			angle_y;
	float			angle_z;
	float			distance;

}					t_map;

typedef struct s_data
{
	int				i;
	int				x;
	int				y;
	int				c;
	int				temp;
	float			min_x;
	float			max_x;
	float			min_y;
	float			max_y;
	float			obj_cent_x;
	float			obj_cent_y;
	float			img_cent_x;
	float			img_cent_y;
	float			offset_x;
	float			offset_y;
	float			rotate_y;
	float			rotate_x;
	float			rotate_z;
	int				x0;
	int				y0;
	size_t			rows;
	size_t			cols;
	int				rotate;
	int				index;
	int				x1;
	int				y1;
	int				org_x1;
	int				org_y1;
	int				color;
	int				right_index;
	int				bottom_index;
	int				dx;
	int				dy;
	int				sx;
	int				sy;
	int				err;
	int				e2;
	int				final_x;
	int				final_y;
	char			*dst;
	size_t			add_lines;
	int				patternchanger;
	int				patern;
	int				wireframe_a;
	int				wireframe_b;
	int				zoomincheck;
	int				zoomoutcheck;
	float			max_z;
	float			min_z;
	float			scale_rad;
	int				xyautomatic;
	int				xautomatic;
	int				yautomatic;
	int				zoomautomatic;
	float			zoom_in;
	float			zoom_out;
	int				zoombooster;
	int				zvaluechanger;
	float			automove_x;
	float			move_x;
	float			move_y;
	float			movementscaler;
	int				auto_move_x;
	int				auto_move_y;
	float			inverted_color;
	int				orginal_data_color;
	int				index_counter;
	size_t			total;
	t_var			v;
	t_var			w;
	t_var			var;
	t_map			map;
	t_graphics		graphics;
	t_line_reader	line_reader;
	float			**mapv_reversed;
	float			**mapv;
	void			*control_banner;
	int				zautomatic;
	int				yxautomatic;
	int				xzautomatic;
	int				zxautomatic;
	int				yzautomatic;
	int				zyautomatic;
	int				xyzautomatic;
	int				xzyautomatic;
	int				yxzautomatic;
	int				yzxautomatic;
	int				zxyautomatic;
	int				zyxautomatic;
	int				switch_man_auto;
	int				parallel_view;
	float			rotate_on_plane;
}					t_data;

int					run_mlx(t_data *data);
int					exit_mlx(void *param);
void				fill_map(t_data *data);
void				init_mlx(t_data *data);
void				scale_map(t_data *data);
void				free_mapv(t_data *data);
void				fill_mapv(t_data *data);
void				free_lines(t_data *data);
int					close_file(t_data *data);
double				ft_atof(const char *str);
void				draw_pixel(t_data *data);
int					run_mlx_bon(t_data *data);
void				find_offset(t_data *data);
void				find_offset(t_data *data);
void				create_image(t_data *data);
void				init_mlx_win(t_data *data);
void				free_int_arr(t_data *data);
void				get_img_addr(t_data *data);
void				create_image(t_data *data);
int					allocate_map(t_data *data);
int					main(int argc, char **argv);
int					ft_read_lines(t_data *data);
int					size_t_to_int(size_t value);
int					manage_arrays(t_data *data);
void				validate_data(t_data *data);
void				init_struct_v(t_data *data);
void				init_struct_w(t_data *data);
void				start_drawing(t_data *data);
int					ft_allocate_x(t_data *data);
int					ft_allocate_y(t_data *data);
int					ft_allocate_z(t_data *data);
void				print_mapv_mlx(t_data *data);
void				free_lines_arr(t_data *data);
int					allocate_lines(t_data *data);
void				get_statistics(t_data *data);
void				free_all_arrays(t_data *data);
void				free_lines_carr(t_data *data);
char				**allocate_list(t_data *data);
int					validate_zvalue(t_data *data);
void				fill_map_colour(t_data *data);
void				free_all_arrays(t_data *data);
void				ft_split_colour(t_data *data);
int					validate_colour(t_data *data);
void				init_struct_var(t_data *data);
void				init_all_structs(t_data *data);
void				free_float_x_arr(t_data *data);
void				free_float_y_arr(t_data *data);
void				free_float_z_arr(t_data *data);
void				init_data_struct(t_data *data);
void				draw_wireframe_a(t_data *data);
void				draw_wireframe_b(t_data *data);
void				validate_gridsize(t_data *data);
char				***allocate_index(t_data *data);
int					open_file(const char *filename);
void				init_graphic_data(t_data *data);
int					ft_allocate_arrays(t_data *data);
void				draw_wireframe_man(t_data *data);
void				init_mlx_new_image(t_data *data);
int					ft_allocate_mapcol(t_data *data);
void				draw_line_to_right(t_data *data);
void				bresenham_drawline(t_data *data);
void				draw_line_to_right(t_data *data);
int					**allocate_int_list(t_data *data);
void				draw_line_to_bottom(t_data *data);
void				draw_line_diagonally(t_data *data);
void				print_mapv_mlx_man(t_data *data);
void				draw_wireframe_mand(t_data *data);
void				transform_isometric(t_data *data);
void				draw_line_to_bottom(t_data *data);
int					key_hook(int keycode, void *param);
int					key_hook(int keycode, void *param);
void				ft_split_lines_to_arr(t_data *data);
void				*check_memory_allocation(void *ptr);
int					***allocate_int_index(t_data *data);
void				ft_split_lines_to_arr(t_data *data);
void				print_error_hex_prefix(t_data *data);
void				print_error_hex_value(t_data *data);
float				**allocate_y_float_mod(t_data *data);
float				**allocate_mem_for_map(t_data *data);
void				*check_memory_reallocation(void *ptr);
void				calculate_optimal_scale(t_data *data);
void				handle_error(t_data *data, const char *msg);
int					keyhook_clean_exit(t_data *data, int keycode);
void				ft_rotate_xy(float *x, float *y, float theta);
void				get_map_name(t_data *data, const char *mapname);
void				validate_input(t_data *data, int argc, char **argv);
int					manual_rotation_collection(t_data *data, int keycode);
int					keyhook_reset_all_automatic(t_data *data, int keycode);
void				scale_one(t_data *data, float *scale_x, float *scale_y);
void				scale_two(t_data *data, float *scale_x, float *scale_y);
void				scale_three(t_data *data, float *scale_x, float *scale_y);
void				scale_four(t_data *data, float *scale_x, float *scale_y);
void				scale_five(t_data *data, float *scale_x, float *scale_y);
void				scale_six(t_data *data, float *scale_x, float *scale_y);
void				scale_seven(t_data *data, float *scale_x, float *scale_y);
void				scale_eight(t_data *data, float *scale_x, float *scale_y);
void				scale_nine(t_data *data, float *scale_x, float *scale_y);
void				scale_ten(t_data *data, float *scale_x, float *scale_y);
void				scale_eleven(t_data *data, float *scale_x, float *scale_y);
void				scale_twelve(t_data *data, float *scale_x, float *scale_y);
void				scale_thirten(t_data *data, float *scale_x, float *scale_y);
void				scale_fifteen(t_data *data, float *scale_x, float *scale_y);
void				scale_fourteen(t_data *data, float *scale_x,
						float *scale_y);
void				ft_skip_separator(t_data *data, size_t *i, size_t *j);
int					ft_count_string_characters(t_data *data, size_t *i,
						size_t *j);
void				*ft_realloc(void *ptr, size_t new_size,
						size_t *allocated_size);
#endif
