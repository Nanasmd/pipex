#  |  |  ___ \    \  |         |
#  |  |     ) |  |\/ |   _  |  |  /   _ 
# ___ __|  __/   |   |  (   |    <    __/ 
#    _|  _____| _|  _| \__,_| _|\_\ \___|
#                              by jcluzet
################################################################################
#                                     CONFIG                                   #
################################################################################

NAME        := libft.a
CC        := gcc
FLAGS    := -Wall -Wextra -Werror -Iincludes
HEADER := -Iincludes
################################################################################
#                                 PROGRAM'S SRCS                               #
################################################################################

SRCS        :=      print_numbers/ft_putnbr_base_ll.c \
                          print_numbers/ft_putnbr_base_ull.c \
                          print_numbers/ft_putnbr_precise_d.c \
                          print_numbers/ft_count_digits_hex_ul.c \
                          print_numbers/ft_count_digits_i.c \
                          print_numbers/ft_putnbr_base_i.c \
                          print_numbers/ft_count_chars_ld.c \
                          print_numbers/ft_putnbr_i.c \
                          print_numbers/ft_skip_float_commas.c \
                          print_numbers/ft_is_valid_base.c \
                          print_numbers/ft_count_chars_d.c \
                          print_numbers/ft_putnbr_f.c \
                          print_numbers/ft_count_digits_ul.c \
                          print_numbers/ft_skip_number.c \
                          print_numbers/ft_putnbr_ull.c \
                          print_numbers/ft_skip_digits.c \
                          print_numbers/ft_skip_commas.c \
                          print_numbers/ft_putnbr_precise_f.c \
                          print_numbers/ft_putnbr_l.c \
                          print_numbers/ft_putnbr_ul.c \
                          print_numbers/ft_count_digits_ui.c \
                          print_numbers/ft_skip_int.c \
                          print_numbers/ft_count_digits_ld.c \
                          print_numbers/ft_count_chars_i.c \
                          print_numbers/ft_skip_int_whitespace.c \
                          print_numbers/ft_putnbr_base.c \
                          print_numbers/ft_putnbr_ui.c \
                          print_numbers/ft_putnbr.c \
                          print_numbers/ft_count_chars_f.c \
                          print_numbers/ft_puthex_uppercase.c \
                          print_numbers/ft_skip_float_whitespace.c \
                          print_numbers/ft_count_digits.c \
                          print_numbers/ft_skip_plus_or_minus.c \
                          print_numbers/ft_putnbr_ld.c \
                          print_numbers/ft_putnbr_base_l.c \
                          print_numbers/ft_putnbr_base_ul.c \
                          print_numbers/ft_count_digits_d.c \
                          print_numbers/ft_putnbr_d.c \
                          print_numbers/ft_skip_float.c \
                          print_numbers/ft_puthex_lowercase.c \
                          print_numbers/ft_putnbr_base_ui.c \
                          print_numbers/ft_skip_nonwhitespace.c \
                          print_numbers/ft_count_digits_hex_ui.c \
                          print_numbers/ft_count_chars_ui.c \
                          print_numbers/ft_count_digits_f.c \
                          print_numbers/ft_skip_int_commas.c \
                          print_numbers/ft_skip_whitespace.c \
                          print_numbers/ft_putnbr_ll.c \
                          print_numbers/ft_putnbr_fd.c \
                          print_numbers/ft_putnbr_precise_ld.c \
                          print_numbers/ft_count_digits_ull.c \
                          string_to_number/ft_atold.c \
                          string_to_number/ft_atoui_strict.c \
                          string_to_number/ft_str_is_uint.c \
                          string_to_number/ft_atoull.c \
                          string_to_number/ft_atof.c \
                          string_to_number/ft_str_is_int.c \
                          string_to_number/ft_atol.c \
                          string_to_number/ft_atoul.c \
                          string_to_number/ft_atoi.c \
                          string_to_number/ft_atoll.c \
                          string_to_number/ft_atoui.c \
                          string_arrays/ft_put_strarr_inline.c \
                          string_arrays/ft_strarr_dup_shallow.c \
                          string_arrays/ft_join_strarr.c \
                          string_arrays/ft_free_strarr.c \
                          string_arrays/ft_str_in_strarr.c \
                          string_arrays/ft_strarr_cut.c \
                          string_arrays/ft_find_in_strarr.c \
                          string_arrays/ft_put_strarr.c \
                          string_arrays/ft_strarr_len.c \
                          string_arrays/ft_add_lalloc_strarr.c \
                          string_arrays/ft_strarr_new.c \
                          string_arrays/ft_strarr_size.c \
                          string_arrays/ft_strarr_dup.c \
                          string_arrays/ft_strarr_cutn.c \
                          linked_lists/ft_lstdelone.c \
                          linked_lists/ft_lst_trim.c \
                          linked_lists/ft_lstadd_front.c \
                          linked_lists/ft_lstnew_safe.c \
                          linked_lists/ft_lstdup_safe.c \
                          linked_lists/ft_lst_nadd_front.c \
                          linked_lists/ft_lstdup.c \
                          linked_lists/ft_lst_free.c \
                          linked_lists/ft_lst_init_safe.c \
                          linked_lists/ft_lst_pluck_first.c \
                          linked_lists/ft_lst_cadd_back.c \
                          linked_lists/ft_lst_nadd_back.c \
                          linked_lists/ft_lst_trim_next.c \
                          linked_lists/ft_lstclear.c \
                          linked_lists/ft_lstadd_back.c \
                          linked_lists/ft_lstmap_safe.c \
                          linked_lists/ft_lstnew.c \
                          linked_lists/ft_lstsize.c \
                          linked_lists/ft_lst_init.c \
                          linked_lists/ft_lst_addb.c \
                          linked_lists/ft_lstiter.c \
                          linked_lists/ft_lst_cadd_front.c \
                          linked_lists/ft_lst_add.c \
                          linked_lists/ft_lst_append.c \
                          linked_lists/ft_lstmap.c \
                          linked_lists/ft_lst_prepend.c \
                          linked_lists/ft_lstlast.c \
                          linked_lists/ft_lst_addf.c \
                          colors/ft_blue.c \
                          colors/ft_yellow.c \
                          colors/ft_green.c \
                          colors/ft_purple.c \
                          colors/ft_white.c \
                          colors/ft_red.c \
                          colors/ft_black.c \
                          colors/ft_cyan.c \
                          number_to_string/ft_ui_to_buffer_base.c \
                          number_to_string/ft_precise_ftoa.c \
                          number_to_string/ft_ltoa.c \
                          number_to_string/ft_ui_to_buffer.c \
                          number_to_string/ft_ldtoa.c \
                          number_to_string/ft_uitoa.c \
                          number_to_string/ft_ftoa.c \
                          number_to_string/ft_i_to_buffer.c \
                          number_to_string/ft_dtoa.c \
                          number_to_string/ft_precise_dtoa.c \
                          number_to_string/ft_itoa.c \
                          number_to_string/ft_precise_ldtoa.c \
                          number_to_string/ft_uc_to_buffer_lchex.c \
                          number_to_string/ft_uc_to_buffer_base.c \
                          number_to_string/ft_ui_to_buffer_lchex.c \
                          doubly_linked_lists/ft_dlst_pluck.c \
                          doubly_linked_lists/ft_dlstadd_back.c \
                          doubly_linked_lists/ft_dlst_prev.c \
                          doubly_linked_lists/ft_dlstmap_safe.c \
                          doubly_linked_lists/ft_dlst_prepend.c \
                          doubly_linked_lists/ft_dlst_add_lalloc.c \
                          doubly_linked_lists/ft_dlst_append.c \
                          doubly_linked_lists/ft_dlstdelone.c \
                          doubly_linked_lists/ft_dlst_trim.c \
                          doubly_linked_lists/ft_dlstdup.c \
                          doubly_linked_lists/ft_dlst_nadd_front.c \
                          doubly_linked_lists/ft_dlst_addf.c \
                          doubly_linked_lists/ft_dlst_node_in_list.c \
                          doubly_linked_lists/ft_dlst_cadd_front.c \
                          doubly_linked_lists/ft_dlst_next.c \
                          doubly_linked_lists/ft_dlstnew.c \
                          doubly_linked_lists/ft_dlst_nadd_back.c \
                          doubly_linked_lists/ft_dlst_cadd_back_lalloc.c \
                          doubly_linked_lists/ft_dlst_addb_lalloc.c \
                          doubly_linked_lists/ft_dlst_cadd_front_lalloc.c \
                          doubly_linked_lists/ft_dlstsize.c \
                          doubly_linked_lists/ft_dlst_trim_prev.c \
                          doubly_linked_lists/ft_dlstclear.c \
                          doubly_linked_lists/ft_dlst_init_safe.c \
                          doubly_linked_lists/ft_dlstdup_safe.c \
                          doubly_linked_lists/ft_dlst_add.c \
                          doubly_linked_lists/ft_dlst_is_null.c \
                          doubly_linked_lists/ft_dlst_content.c \
                          doubly_linked_lists/ft_dlst_pluck_node.c \
                          doubly_linked_lists/ft_dlst_pluck_safe.c \
                          doubly_linked_lists/ft_dlst_get.c \
                          doubly_linked_lists/ft_dlst_link.c \
                          doubly_linked_lists/ft_dlst_cadd_back.c \
                          doubly_linked_lists/ft_dlstadd_front.c \
                          doubly_linked_lists/ft_dlst_find.c \
                          doubly_linked_lists/ft_dlstlast.c \
                          doubly_linked_lists/ft_dlstnew_safe.c \
                          doubly_linked_lists/ft_dlst_is_empty.c \
                          doubly_linked_lists/ft_dlst_delink.c \
                          doubly_linked_lists/ft_dlstiter.c \
                          doubly_linked_lists/ft_dlst_index_out_of_bounds.c \
                          doubly_linked_lists/ft_dlst_max_index.c \
                          doubly_linked_lists/ft_dlstmap.c \
                          doubly_linked_lists/ft_dlst_pluck_first.c \
                          doubly_linked_lists/ft_dlst_addf_lalloc.c \
                          doubly_linked_lists/ft_dlst_get_safe.c \
                          doubly_linked_lists/ft_dlst_addb.c \
                          doubly_linked_lists/ft_dlst_pluck_last.c \
                          doubly_linked_lists/ft_dlst_free.c \
                          doubly_linked_lists/ft_dlst_init.c \
                          doubly_linked_lists/ft_dlst_trim_next.c \
                          strings/ft_strdel.c \
                          strings/ft_strjoin_free.c \
                          strings/ft_strnchr.c \
                          strings/ft_strnstr.c \
                          strings/ft_strtrim.c \
                          strings/ft_strcpy.c \
                          strings/ft_strncmp.c \
                          strings/ft_strsize.c \
                          strings/ft_strlen.c \
                          strings/ft_strnew.c \
                          strings/ft_join_size_size.c \
                          strings/ft_has_chars.c \
                          strings/ft_has_char.c \
                          strings/ft_streq.c \
                          strings/ft_strjoin_free_free.c \
                          strings/ft_substr.c \
                          strings/ft_strmapi.c \
                          strings/ft_strdup_null.c \
                          strings/ft_strchr.c \
                          strings/ft_strjoin.c \
                          strings/ft_split.c \
                          strings/ft_strlcat.c \
                          strings/ft_is_empty_str.c \
                          strings/ft_starts_with.c \
                          strings/ft_strjoin_del_del.c \
                          strings/ft_strjoin_del.c \
                          strings/ft_strrchr.c \
                          strings/ft_strdup.c \
                          strings/ft_strlcpy.c \
                          strings/ft_strcpy_end.c \
                          char/ft_isalpha.c \
                          char/ft_isalnum.c \
                          char/ft_isdigit.c \
                          char/ft_isprint.c \
                          char/ft_tolower.c \
                          char/ft_toupper.c \
                          char/ft_is_whitespace.c \
                          char/ft_isascii.c \
                          char/ft_is_plus_or_minus.c \
                          char/ft_is_decimal_char.c \
                          char/ft_islower.c \
                          char/ft_isupper.c \
                          errors/ft_die.c \
                          print_strings/ft_putchar.c \
                          print_strings/ft_putstr_up_to.c \
                          print_strings/ft_putendl_fd.c \
                          print_strings/ft_putstr.c \
                          print_strings/ft_puts.c \
                          print_strings/ft_putstr_fd.c \
                          print_strings/ft_putendl.c \
                          print_strings/ft_putchar_fd.c \
                          print_strings/ft_endl.c \
                          printf/pf_handle_minus_sign.c \
                          printf/pf_handled_p.c \
                          printf/pf_parse_wildcars.c \
                          printf/pf_print_f.c \
                          printf/pf_print_p.c \
                          printf/pf_print_percent.c \
                          printf/pf_handled_hex.c \
                          printf/pf_print_s.c \
                          printf/pf_vprintf.c \
                          printf/pf_handled_no_conversion.c \
                          printf/pf_print_c.c \
                          printf/pf_handled_c.c \
                          printf/pf_handled_int.c \
                          printf/pf_print_u.c \
                          printf/pf_handled_s.c \
                          printf/ft_printf.c \
                          printf/pf_print_hex.c \
                          printf/pf_handled_lf.c \
                          printf/pf_initializers.c \
                          printf/pf_print_lf.c \
                          printf/pf_parse_flags.c \
                          printf/pf_handled_f.c \
                          printf/pf_handled_u.c \
                          printf/pf_print_int.c \
                          printf/ft_bdebug.c \
                          printf/ft_debug.c \
                          printf/pf_handled_percent.c \
                          bits/ft_rotate_left_i.c \
                          bits/ft_print_bits_c.c \
                          bits/ft_inspect_cstr.c \
                          bits/ft_print_bits_ull.c \
                          bits/ft_print_bits.c \
                          bits/ft_print_bits_ui.c \
                          bits/ft_rotate_left_ui32.c \
                          bits/ft_hexdump.c \
                          bits/ft_rotate_right_i.c \
                          bits/ft_print_bits_ul.c \
                          bits/ft_print_bits_i.c \
                          bits/ft_switch_bit_endianess_ui32.c \
                          bits/ft_print_bits_uc.c \
                          bits/ft_switch_byte_endianess_ui32.c \
                          bits/ft_rotate_right_ui32.c \
                          math/ft_sqrt_i.c \
                          math/ft_div_mod.c \
                          math/ft_lerp_d.c \
                          math/ft_swap.c \
                          math/ft_lerp_wsteps_i.c \
                          math/ft_map_i.c \
                          math/ft_swap_d.c \
                          math/ft_lerp_i.c \
                          math/ft_min_d.c \
                          math/ft_map_clamped_d.c \
                          math/ft_abs_d.c \
                          math/ft_clamp_d.c \
                          math/ft_pow.c \
                          math/ft_abs.c \
                          math/ft_abs_f.c \
                          math/ft_map_d.c \
                          math/ft_clamp_i.c \
                          math/ft_max_d.c \
                          math/ft_factorial.c \
                          math/ft_div_mod_i.c \
                          math/ft_max_i.c \
                          math/ft_map_clamped_i.c \
                          math/ft_lerp_precise_d.c \
                          math/ft_fibonacci.c \
                          math/ft_abs_ld.c \
                          math/ft_lerp_wsteps_d.c \
                          math/ft_pow_i.c \
                          math/ft_min_i.c \
                          math/ft_lerp_precise_i.c \
                          math/ft_swap_i.c \
                          math/ft_sqrt.c \
                          math/ft_pow_ll.c \
                          math/ft_abs_i.c \
                          memory/ft_memcmp.c \
                          memory/ft_memcpy.c \
                          memory/ft_calloc.c \
                          memory/ft_realloc.c \
                          memory/ft_memmove.c \
                          memory/ft_srealloc.c \
                          memory/ft_bzero.c \
                          memory/ft_memset.c \
                          memory/ft_memccpy.c \
                          memory/ft_del.c \
                          memory/ft_scalloc.c \
                          memory/ft_memchr.c \
                          memory/ft_salloc.c \
                          booleans/unless.c \
                          arrays/ft_free_arr.c \
                          arrays/ft_arr_size.c \
                          arrays/ft_arr_len.c \
                          dictionaries/ft_dict_find.c \
                          length_strings/ft_del_lstr.c \
                          length_strings/ft_init_lstr.c \
                          length_strings/ft_join_lstr_str.c \
                          length_strings/ft_free_lstr.c \
                          get_next_line/ft_dump_fd.c \
                          get_next_line/ft_get_next_line.c \
                          get_next_line/ft_gnl_or_die.c \
                          get_next_line/ft_gnl.c \
                          get_next_line/ft_dump_stdin.c \
                          lalloc/ft_add_lalloc_array.c \
                          lalloc/ft_free_lalloc.c \
                          lalloc/ft_add_lalloc.c \
                          lalloc/ft_lalloc.c \
                          lalloc/ft_strdup_lalloc.c \
                          lalloc/ft_clalloc.c 
                          
OBJS        := $(SRCS:.c=.o)

.c.o:
	${CC} ${FLAGS} -c $< -o ${<:.c=.o}

################################################################################
#                                  Makefile  objs                              #
################################################################################


CLR_RMV		:= \033[0m
RED		    := \033[1;31m
GREEN		:= \033[1;32m
YELLOW		:= \033[1;33m
BLUE		:= \033[1;34m
CYAN 		:= \033[1;36m
RM		    := rm -f

${NAME}:	${OBJS}
			@echo "$(GREEN)Compilation ${CLR_RMV}of ${YELLOW}$(NAME) ${CLR_RMV}..."
			ar rcs ${NAME} ${OBJS}
			@echo "$(GREEN)$(NAME) created[0m ✔️"

all:		${NAME}

bonus:		all

clean:
			@ ${RM} *.o */*.o */*/*.o
			@ echo "$(RED)Deleting $(CYAN)$(NAME) $(CLR_RMV)objs ✔️"

fclean:		clean
			@ ${RM} ${NAME}
			@ echo "$(RED)Deleting $(CYAN)$(NAME) $(CLR_RMV)binary ✔️"

re:			fclean all

.PHONY:		all clean fclean re


