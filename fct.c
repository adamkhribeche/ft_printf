#include "pri.h"

void	(*dispatcher)[14](va_list ap, t_stat_of_print stat_of_print) = [];

void		ft_putchar(const char c)
{
	write(1, &c, 1);
}

void		width(char *s, t_stat_of_print stat_of_print)
{
	
}

void		print_int(va_list ap, t_stat_of_print stat_of_print)
{
	char		*s;
	int		receive;
	int	 	i;
	char		signe;

	receive = va_arg(ap, int);
	signe = receive >= 0 ? 1 : -1;
	l = nbr == 0 ? 1 : 0;
	i = receive;
	while (i != 0)
	{
		i /= 10;
		l++;
	}
	if (!(s = (char *)malloc(sizeof(char) * (l + 2))))
	{
		exit(-1);
	}
	s[0] = signe == 1 ? '+' : '-';
	s[l + 1] = '\0';
	i = receive;
	if (i == 0)
	{
		s[1] = '0';
		width(s, stat);
		return ;
	}
	l = 0;
	while (l--)
	{
		s[l] = i < 0 ? -(i % 10) + '0' : (i % 10) + '0';
		i /= 10;
		
	}
	width(s, state);
}

void 	ft_c()
{

}

void	ft_s()
{

}

void	ft_p()
{

}

void	ft_u()
{

}

/*void	ft_ld_or_li()
{

}

void	ft_f_or_F()
{

}

void	ft_x_or_X()
{

}*/
