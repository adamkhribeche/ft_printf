#ifndef PRI_H
#define PRI_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include "libft/libft.h"

typedef struct		s_specifier
{
	char			*type;
	char			*type_promoted;
	int				dollar;
}					t_specifier;

typedef struct		s_precision
{
	int				state;
	int				dollar;
	int				asterisk;
	void			*value;
}					t_precision;

typedef struct		s_width
{
	int				state;
	int				dollar;
	int				asterisk;
	void			*value;
}					t_width

typedef struct		s_flags
{
	int				state;
	int				plus;
	int				minus;
	int				space;
	int				zero;
	int				hash;
}					t_flags;

typedef struct		s_percent_infos
{
	t_specifier		specifier;
	t_flags			flags;
	t_width			width;
	t_precision		precision;
	t_dollar		dollar;
}					t_percent_infos;

typedef struct		s_data
{
	int				nbr_of_percent;
	t_percent_infos	*tab_percent_infos;
}					t_data;

int	ft_printf(const char *format, ...);

#endif
