#include "pri.h"

void		(*numer_conver)[14](int arg, char *arg_type, t_flags flags) = [];//0=d,i 3=hd,hi 6=hhd,hhi || on utilise le cast pour passer d'un type a l'autre
void		(*unsd_numer_conv)[14](int arg, char *arg_type, t_flags flags) = [];//1=u 4=hu 5=hx,hX 7=hhu 8=hhx,hhX || on utilise le cast pour passer d'un type a l'autre
void		(*lnumer_conver)[14](int arg, char *arg_type, t_flags flags) = [];//0=ld,li || on utilise le cast pour passer d'un type a l'autre
void		(*unsd_lnumer_conver)[14](int arg, char *arg_type, t_flags flags) = [];//1=lu 5=lx,lX || on utilise le cast pour passer d'un type a l'autre
void		(*llnumer_conver)[14](int arg, char *arg_type, t_flags flags) = [];//0=lld,lli || on utilise le cast pour passer d'un type a l'autre
void		(*unsd_llnumer_conver)[14](int arg, char *arg_type, t_flags flags) = [];//1=llu 5=llx,llX || on utilise le cast pour passer d'un type a l'autre
void		(*dec_conver)[14](double arg, char *arg_type, t_flags flags) = [];//0=f 1=lf=double
void		(*lldec_conver)[14](long long double arg, char *arg_type, t_flags flags) = [];//


void		ft_putchar(char c)
{
	write(1, &c, 1);
}

t_arg_infs	*ft_analyse(const char *format)
{
	t_arg_infs	*tab;
	
	return (tab);
}

void	width(char *s, t_flags flags)
{
	
}

void	ft_d_or_i(int n, t_arg_flags flags)
{
	char	*s;
	int	l;
	unsigned int nbr;
	char	signe;

	
	nbr = signe == 1 ? n : -n;
	l = n == 0 ? 1 : 0;
	while (n != 0)
	{
		n /= 10;
		l++;
	}
	if (!(s = (char *)malloc(sizeof(char) * (l + 2))))
	{
		free_all_memory(t_my_pointers my_pointers);
		exit(-1);
	}
	signe = n >= 0 ? 1 : -1;
	s[0] = signe == 1 ? '+' : '-';
	s[l + 1] = '\0';
	if (n == 0)
	{
		s[1] = '0';
		width(s, flags);
		return ;
	}
	l = 0;
	while (l--)
	{
		s[l] = nn % 10 + '0';
		nn /= 10;
		
	}
	width(s, flags);
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
