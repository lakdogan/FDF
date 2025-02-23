/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf_bonus.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lakdogan <lakdogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 21:08:57 by lakdogan          #+#    #+#             */
/*   Updated: 2025/02/22 21:08:15 by lakdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_BONUS_H
# define FDF_BONUS_H
# include "../../../../../libft/inc/libft.h"
# include "../../../../../minilibix/mlx.h"

# define KEYA 0
# define KEYS 1
# define KEYD 2
# define KEYF 3
# define KEYH 4
# define KEYG 5
# define KEYZ 6
# define KEYX 7
# define KEYC 8
# define KEYV 9
# define KEYB 11
# define KEYQ 12
# define KEYW 13
# define KEYE 14
# define KEYR 15
# define KEYY 16
# define KEYT 17
# define KEYONE 18
# define KEYTWO 19
# define KEYTHREE 20
# define KEYFOUR 21
# define KEYPLUS 24
# define KEYZERO 27
# define KEYO 31
# define KEYU 32
# define KEYI 34
# define KEYP 35
# define KEYL 37
# define KEYJ 38
# define KEYK 40
# define KEYSEMICOLON 41
# define KEYCOMMA 43
# define KEYSLASH 44
# define KEYN 45
# define KEYM 46
# define KEYDOT 47
# define KEYTAB 48
# define ESCAPE 53
# define KEYSPACE 49
# define KEYFSEVENTEEN 64
# define KEYNUMDOT 65
# define KEYMULTI 67
# define KEYNUMPLUS 69
# define KEYCLEAR 71
# define KEYDIV 75
# define KEYNUMENTER 76
# define KEYMINUS 78
# define KEYFEIGHTTEEN 79
# define KEYFNINETEEN 80
# define KEYCONTROL 82
# define KEYNUMONE 83
# define KEYNUMTWO 84
# define KEYNUMTHREE 85
# define KEYNUMFOUR 86
# define KEYNUMPFIVE 87
# define KEYNUMSIX 88
# define KEYNUMSEVEN 89
# define KEYNUMPEIGHT 91
# define KEYNUMNINE 92
# define KEYFFIVE 96
# define KEYFSIX 97
# define KEYFSIXTEEN 106
# define KEYHOME 115
# define KEYPAGEUP 116
# define KEYDEL 117
# define KEYEND 119
# define KEYPAGEDOWN 121
# define KEYLEFTARROW 123
# define KEYRIGHTARROW 124
# define KEYDOWNARROW 125
# define KEYUPARROW 126
# define KEYSHIFT 272
# define KEYCAPSLOCK 257
# define MAXCOLORVALUE 16777215
# define BANNER_WIDTH 1000
# define BANNER_HEIGHT 200

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

void				scale_fifteen(t_data *data, float *scale_x, float *scale_y);
int					main(int argc, char **argv);
int					run_mlx_bon(t_data *data);
void				find_offset(t_data *data);
void				draw_line_to_bottom(t_data *data);
void				draw_line_to_right(t_data *data);
void				draw_line_diagonally(t_data *data);
void				print_mapv_mlx(t_data *data);
void				draw_wireframe_a(t_data *data);
void				draw_wireframe_b(t_data *data);
void				get_map_name(t_data *data, const char *mapname);
void				validate_input(t_data *data, int argc, char **argv);
void				handle_error(t_data *data, const char *msg);
void				free_all_arrays(t_data *data);
int					open_file(const char *filename);
int					ft_read_lines(t_data *data);
void				free_lines(t_data *data);
int					allocate_lines(t_data *data);
void				*ft_realloc(void *ptr, size_t new_size,
						size_t *allocated_size);
void				*check_memory_reallocation(void *ptr);
void				get_statistics(t_data *data);
void				validate_gridsize(t_data *data);
void				ft_skip_separator(t_data *data, size_t *i, size_t *j);
int					ft_count_string_characters(t_data *data, size_t *i,
						size_t *j);
void				scale_map(t_data *data);
int					manage_arrays(t_data *data);
int					ft_allocate_arrays(t_data *data);
void				validate_data(t_data *data);
char				***allocate_index(t_data *data);
char				**allocate_list(t_data *data);
void				ft_split_lines_to_arr(t_data *data);
void				ft_split_colour(t_data *data);
int					validate_colour(t_data *data);
void				print_error_hex_prefix(t_data *data);
void				print_error_hex_value(t_data *data);
int					validate_zvalue(t_data *data);
int					close_file(t_data *data);
void				free_all_arrays(t_data *data);
void				ft_split_lines_to_arr(t_data *data);
void				*check_memory_allocation(void *ptr);
int					size_t_to_int(size_t value);
void				init_struct_v(t_data *data);
double				ft_atof(const char *str);
void				fill_map(t_data *data);
void				free_lines_arr(t_data *data);
int					**allocate_int_list(t_data *data);
int					***allocate_int_index(t_data *data);
int					ft_allocate_mapcol(t_data *data);
void				free_int_arr(t_data *data);
void				free_lines_carr(t_data *data);
void				fill_map_colour(t_data *data);
int					ft_allocate_x(t_data *data);
int					ft_allocate_y(t_data *data);
void				free_float_x_arr(t_data *data);
void				free_float_y_arr(t_data *data);
void				free_float_z_arr(t_data *data);
int					ft_allocate_z(t_data *data);
void				free_mapv(t_data *data);
float				**allocate_y_float_mod(t_data *data);
int					key_hook(int keycode, void *param);
void				create_image(t_data *data);
int					run_mlx(t_data *data);
void				init_mlx(t_data *data);
void				init_mlx_win(t_data *data);
void				init_mlx_new_image(t_data *data);
void				init_graphic_data(t_data *data);
void				get_img_addr(t_data *data);
void				create_image(t_data *data);
float				ft_getdeg(float radians);
float				ft_newxy(float orig_x, float orig_z, float angle_rad);
float				ft_newxz(float orig_x, float orig_y, float angle_rad);
float				ft_newyx(float orig_y, float orig_z, float angle_rad);
float				ft_newyz(float orig_x, float orig_y, float angle_rad);
float				ft_newzx(float orig_y, float orig_z, float angle_rad);
float				ft_newzy(float orig_x, float orig_z, float angle_rad);
float				ft_tiltang(float height, float distance);
float				ft_getdif(float no1, float no2);
int					allocate_map(t_data *data);
void				fill_mapv(t_data *data);
void				transform_isometric(t_data *data);
void				print_mapv_mlx(t_data *data);
void				rotate_y_axis(t_data *data);
void				rotate_x_axis(t_data *data);
void				rotate_z_axis(t_data *data);
void				rotate_xy_axis_plus(t_data *data);
void				rotate_xz_axis_plus(t_data *data);
void				rotate_yz_axis_plus(t_data *data);
void				rotate_xyz_axis_plus(t_data *data);
void				rotate_xy_axis_minus(t_data *data);
void				rotate_xz_axis_minus(t_data *data);
void				rotate_yz_axis_minus(t_data *data);
void				rotate_xyz_axis_minus(t_data *data);
void				draw_wireframe_a(t_data *data);
void				draw_wireframe_b(t_data *data);
void				draw_line_to_bottom(t_data *data);
void				draw_line_to_right(t_data *data);
void				bresenham_drawline(t_data *data);
void				start_drawing(t_data *data);
void				draw_pixel(t_data *data);
void				init_data_struct_bon(t_data *data);
void				init_all_structs_bon(t_data *data);
void				init_struct_w(t_data *data);
void				print_features(t_data *data);
void				rotate_x_axis_plus(t_data *data);
void				rotate_x_axis_minus(t_data *data);
void				rotate_y_axis_plus(t_data *data);
void				rotate_y_axis_minus(t_data *data);
void				rotate_z_axis_plus(t_data *data);
void				rotate_z_axis_minus(t_data *data);
void				rotate_xy_axis_plus(t_data *data);
void				rotate_xy_axis_minus(t_data *data);
void				rotate_yx_axis_plus(t_data *data);
void				rotate_yx_axis_minus(t_data *data);
void				rotate_xz_axis_plus(t_data *data);
void				rotate_xz_axis_minus(t_data *data);
void				rotate_zx_axis_plus(t_data *data);
void				rotate_zx_axis_minus(t_data *data);
void				rotate_yz_axis_plus(t_data *data);
void				rotate_yz_axis_minus(t_data *data);
void				rotate_zy_axis_plus(t_data *data);
void				rotate_zy_axis_minus(t_data *data);
void				rotate_xyz_axis_plus(t_data *data);
void				rotate_xyz_axis_minus(t_data *data);
void				rotate_xzy_axis_plus(t_data *data);
void				rotate_xzy_axis_minus(t_data *data);
void				rotate_yxz_axis_plus(t_data *data);
void				rotate_yxz_axis_minus(t_data *data);
void				rotate_yzx_axis_plus(t_data *data);
void				rotate_yzx_axis_minus(t_data *data);
void				rotate_zxy_axis_plus(t_data *data);
void				rotate_zxy_axis_minus(t_data *data);
void				rotate_zyx_axis_plus(t_data *data);
void				rotate_zyx_axis_minus(t_data *data);
void				reset_radians(t_data *data);
int					auto_rotation_collection(t_data *data);
int					rotate_automation(void *param);
int					automation_switches(t_data *data, int keycode);
int					auto_zoom(t_data *data);
int					zoom_booster(t_data *data);
void				move_in_x_plus(t_data *data);
void				move_in_y_plus(t_data *data);
void				move_in_x_minus(t_data *data);
void				move_in_y_minus(t_data *data);
int					switch_ten(t_data *data, int keycode);
int					auto_move_in_x(t_data *data);
int					auto_move_in_y(t_data *data);
int					switch_eleven(t_data *data, int keycode);
int					invert_color(t_data *data);
float				**allocate_mem_for_map(t_data *data);
int					keyhook_reset_map(t_data *data, int keycode);
int					keyhook_change_radians(t_data *data, int keycode);
int					keyhook_manuel_zoom(t_data *data, int keycode);
int					keyhook_clean_exit(t_data *data, int keycode);
int					keyhook_reset_all_automatic(t_data *data, int keycode);
int					key_hook(int keycode, void *param);
int					exit_mlx(void *param);
void				init_struct_var(t_data *data);
int					auto_rotate_in_y_axis(t_data *data, int keycode);
int					auto_rotate_y(t_data *data);
int					auto_rotate_in_x_axis(t_data *data, int keycode);
int					auto_rotate_x(t_data *data);
int					auto_rotate_in_z_axis(t_data *data, int keycode);
int					auto_rotate_z(t_data *data);
int					auto_rotate_in_yx(t_data *data, int keycode);
int					auto_rotate_xy(t_data *data);
int					auto_rotate_in_yx(t_data *data, int keycode);
int					auto_rotate_yx(t_data *data);
int					auto_rotate_in_xz(t_data *data, int keycode);
int					auto_rotate_xz(t_data *data);
int					auto_rotate_in_zx(t_data *data, int keycode);
int					auto_rotate_zx(t_data *data);
int					auto_rotate_in_yz(t_data *data, int keycode);
int					auto_rotate_yz(t_data *data);
int					auto_rotate_in_zy(t_data *data, int keycode);
int					auto_rotate_zy(t_data *data);
int					auto_rotate_in_xyz(t_data *data, int keycode);
int					auto_rotate_xyz(t_data *data);
int					auto_rotate_in_xzy(t_data *data, int keycode);
int					auto_rotate_xzy(t_data *data);
int					auto_rotate_in_yxz(t_data *data, int keycode);
int					auto_rotate_yxz(t_data *data);
int					auto_rotate_in_yzx(t_data *data, int keycode);
int					auto_rotate_yzx(t_data *data);
int					auto_rotate_in_zxy(t_data *data, int keycode);
int					auto_rotate_zxy(t_data *data);
int					auto_rotate_in_zyx(t_data *data, int keycode);
int					auto_rotate_zyx(t_data *data);
void				find_offset(t_data *data);
int					auto_rotate_in_xy(t_data *data, int keycode);
void				reset_all_rotations(t_data *data);
int					auto_zoom_boost(t_data *data, int keycode);
int					change_pattern(t_data *data, int keycode);
int					switch_to_invert_color(t_data *data, int keycode);
int					change_z_value(t_data *data, int keycode);
float				ft_getrad(float degree);
void				calculate_optimal_scale(t_data *data);
int					rotate_xy_twod(int keycode, t_data *data);
void				transform_parallel(t_data *data);
int					switch_to_parallel_view(t_data *data, int keycode);
void				ft_rotate_xy(float *x, float *y, float theta);
int					rotate_xy_twod(int keycode, t_data *data);
int					rotate_xy_twod_neg(int keycode, t_data *data);
int					keyhook_xz_rotations(t_data *data, int keycode);
int					keyhook_xz_rotations(t_data *data, int keycode);
int					keyhook_zx_rotations(t_data *data, int keycode);
int					keyhook_zy_rotations(t_data *data, int keycode);
int					keyhook_xyz_rotations(t_data *data, int keycode);
int					keyhook_xzy_rotations(t_data *data, int keycode);
int					keyhook_yxz_rotations(t_data *data, int keycode);
int					keyhook_yzx_rotations(t_data *data, int keycode);
int					keyhook_xyz_rotations(t_data *data, int keycode);
int					keyhook_zxy_rotations(t_data *data, int keycode);
int					keyhook_zyx_rotations(t_data *data, int keycode);
int					keyhook_y_axis_rotations(t_data *data, int keycode);
int					keyhook_x_axis_rotations(t_data *data, int keycode);
int					keyhook_z_axis_rotations(t_data *data, int keycode);
int					keyhook_xy_axis_rotations(t_data *data, int keycode);
int					keyhook_yx_axis_rotations(t_data *data, int keycode);
int					manual_rotation_collection(t_data *data, int keycode);
float				ft_isometric_x_rotate(float x, float y, t_data *data);
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
void				scale_fourteen(t_data *data, float *scale_x,
						float *scale_y);
float				ft_isometric_y_rotate(float x, float y, float z,
						t_data *data);
#endif
