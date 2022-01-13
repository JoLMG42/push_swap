/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 16:47:26 by jtaravel          #+#    #+#             */
/*   Updated: 2022/01/12 18:41:52 by jtaravel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H

# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	int	*tab;
	int	*tab_b;
	int	len_a;
	int	len_b;
}	t_stack;

/* -- Parsing -- */

int				ft_check_nbr(char c);
int				ft_check_args(int ac, char **strs);
int				ft_check_double(int ac, char **str);
int				ft_check_all(int ac, char **str, t_stack *global);
int				*ft_str_to_int(char **str, int ac, t_stack *global);
int				ft_check_max(int ac, char **str);
/* -- Classic -- */

int				ft_strlen(char *str);
char			*ft_strsjoin(char **str, int ac);
char			*ft_strjoin(char *s1, char *s2);
char			*ft_strdup(const char *s);
char			**ft_split(char *s, char c);
void			ft_bzero(void *s, size_t n);
long long int	ft_atoi(const char *str);

/* -- Ope -- */

void			ft_pb(t_stack *global);
void			ft_pa(t_stack *global);
void			ft_ra(t_stack *global);
void			ft_rb(t_stack *global);
void			ft_rra(t_stack *global);
void			ft_rrb(t_stack *global);
void			ft_sa(t_stack *global);
void			ft_sb(t_stack *global);
void			ft_rrr(t_stack *global);
void			ft_rr(t_stack *global);

/* -- Insertion && Co -- */

void			ft_insertion(int size, t_stack *global);
void			ft_repush_a(t_stack *global, int valeur);
void			ft_rrrab(int tmp, int j, int valeur, t_stack *global);
void			ft_rrab(int tmp, int j, int valeur, t_stack *global);
void			ft_rarrb(int tmp, int j, int valeur, t_stack *global);
void			ft_rrarb(int j, int valeur, t_stack *global);
void			ft_inser_base(int *tab, int size);
void			ft_check_ope(int tmp, int indexmin,
					int valeur, t_stack *global);
void			ft_mini_sort(int *tab, int size, t_stack *global);
void			ft_sort_3(int *tab, int size, t_stack *global);
void			ft_sort_five(t_stack *global);
void			ft_check_for_five(int min, t_stack *global);
void			ft_sort_five_2(t_stack *global);
int				ft_get_min(int *tab, int size, t_stack *global);
int				ft_get_max(int *tab, int size);
int				ft_count_ra(t_stack *global, int *tab);
int				ft_number_rb(t_stack *global, int i, int *tab);
int				ft_max(int ra, int rb, t_stack *global);
int				ft_sorted(char **strs, int size);

/* -- Checker -- */

void			ft_check_p(t_stack *global);
void			ft_check_r(t_stack *global);
void			ft_check_s(t_stack *global);
void			ft_read(t_stack *global);
void			ft_check_sorted(int *tab, int size);
void			ft_rra_checker(t_stack *global);
void			ft_rrb_checker(t_stack *global);
void			ft_rrr_checker(t_stack *global);
void			ft_sa_checker(t_stack *global);
void			ft_sb_checker(t_stack *global);
void			ft_rr_checker(t_stack *global);
void			ft_rb_checker(t_stack *global);
void			ft_ra_checker(t_stack *global);
void			ft_pa_checker(t_stack *global);
void			ft_pb_checker(t_stack *global);

#endif
