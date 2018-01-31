/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_printf.h                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpisano <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/01/30 11:29:15 by bpisano      #+#   ##    ##    #+#       */
/*   Updated: 2018/01/31 15:21:36 by bpisano     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "arg.h"
# include "buffer.h"
# include "types.h"
# include "libft.h"
# include <stdlib.h>
# include <stdarg.h>
# include <stdio.h>

int		ft_printf(const char *restrict format, ...);
char	*ft_ctos(char c);
char	*ft_strset(char c, int size);
char	*ft_itoa_base_arg(long long n, int base, t_arg *arg);
char	*ft_uitoa_base_arg(unsigned long long n, unsigned int base, t_arg *arg);

int		is_type(char c);
int		is_flag(char c);
int		is_modifier(char c);

#endif
