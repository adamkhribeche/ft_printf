#ifndef PRI_H
#define PRI_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

typedef struct		s_stat_of_print
{
	char		*flags[5];
	int		width;
	int		precision;
}			t_stat_of_print;

typedef struct		s_arg_infs
{
	char		specifier;
	t_stat_of_print	stat_of_print;
	char		len;
	void		(*fct)(void *ap, char *arg_type, t_flags flags);//arg_type = specifier + len
}			t_arg_infs;

int	ft_printf(const char *format, ...);

#endif
