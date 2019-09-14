#ifndef PRI_H
#define PRI_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

typedef struct		s_stat_of_print
{
	int		flag_plus;
	int		flag_minus;
	int		flag_hash;
	int		flag_space;
	int		flag_zero;
	int		width;
	int		precision;
}			t_stat_of_print;

typedef struct		s_arg_infs
{
	char		specifier;
	t_stat_of_print	stat_of_print;
	char		len;
	void		(*fct)(va_list ap, t_stat_of_print stat_of_print);
}			t_arg_infs;

int	ft_printf(const char *format, ...);

#endif
