/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhribec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 21:13:01 by nkhribec          #+#    #+#             */
/*   Updated: 2019/09/20 19:11:33 by nkhribec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
/*const char *g_all_specifier[7][41] = {
								"d", "i", "ld", "li", "lld", "lli", "hd", "hi", "hhd", "hhi"\
								"u","lu", "llu", "hu", "hhu"\
								"x", "X", "lx", "lX", "llx", "llX", "hx", "hX", "hhx", "hhX"\
								"o","lo", "llo", "ho", "hho"\
								"b","lb", "llb", "hb", "hhb"\
								"f", "lf", "Lf"\
								"s", "c"\
								"p"\
								};*/
const achar *g_decimal_type[15] = {"d", "i", "ld", "li", "lld", "lli", "hd", "hi", "hhd", "hhi"\
						"u","lu", "llu", "hu", "hhu"};
const char *g_hexa_type[10] = {"x", "X", "lx", "lX", "llx", "llX", "hx", "hX", "hhx", "hhX"};
const char *g_octal_type[5] = {"o","lo", "llo", "ho", "hho"};
const char *g_binair_type[5] = {"b","lb", "llb", "hb", "hhb"};
const char *g_float_type[3] = {"f", "lf", "Lf"};

const char g_all_type[] = {'d', 'i', 'u', 'x', 'X', 'o', 'b', 'f', 's', 'c', 'p'};


















char	*position_specifier(const char *s)
{
	if (ft_strcmp(s, g_all_specifier[0]))
		return (0);
	else if (ft_strcmp(s, g_all_specifier[1]))
		return (1);
	else if (ft_strcmp(s, g_all_specifier[2]))
		return (2);
	else if (ft_strcmp(s, g_all_specifier[3]))
		return (3);
	else if (ft_strcmp(s, g_all_specifier[4]))
		return (4);
	else if (ft_strcmp(s, g_all_specifier[5]))
		return (5);
	else if (ft_strcmp(s, g_all_specifier[6]))
		return (6);
	else if (ft_strcmp(s, g_all_specifier[7]))
		return (7);
	else if (ft_strcmp(s, g_all_specifier[8]))
		return (8);
	else if (ft_strcmp(s, g_all_specifier[9]))
		return (9);
	else if (ft_strcmp(s, g_all_specifier[9]))
		return (10);
	else if (ft_strcmp(s, g_all_specifier[9]))
		return (11);
	else if (ft_strcmp(s, g_all_specifier[9]))
		return (12);
	else if (ft_strcmp(s, g_all_specifier[9]))
		return (13);
	else if (ft_strcmp(s, g_all_specifier[9]))
		return (14);
	else if (ft_strcmp(s, g_all_specifier[9]))
		return (15);
	else if (ft_strcmp(s, g_all_specifier[9]))
		return (16);
	else if (ft_strcmp(s, g_all_specifier[9]))
		return (17);
	else if (ft_strcmp(s, g_all_specifier[9]))
		return (18);
	else if (ft_strcmp(s, g_all_specifier[9]))
		return (19);
	else if (ft_strcmp(s, g_all_specifier[9]))
		return (20);
	else if (ft_strcmp(s, g_all_specifier[9]))
		return (21);
	else if (ft_strcmp(s, g_all_specifier[9]))
		return (22);
	else if (ft_strcmp(s, g_all_specifier[9]))
		return (23);
	else if (ft_strcmp(s, g_all_specifier[9]))
		return (24);
	else if (ft_strcmp(s, g_all_specifier[9]))
		return (25);
	else if (ft_strcmp(s, g_all_specifier[9]))
		return (26);
	else if (ft_strcmp(s, g_all_specifier[9]))
		return (27);
}
//----------------------print_fct----------------------
void	af_int(void *p)
{
	int n = *(int *)p;
	printf("%d\n", n);
}
void	af_unsint(void *p)
{
	unsigned int n = *(unsigned int *)p;
	printf("%u\n", n);
}
void	af_char(void *p)
{
	char n = *(char *)p;
	printf("%c\n", n);
}
void	af_long(void *p)
{
	long n = *(long *)p;
	printf("%ld\n", n);
}
void	af_double(void *p)
{
	double n = *(double *)p;
	printf("%lf\n", n);
}
//-----------------------is_fct-----------------------
int		is_intmax(char *s)
{
	return(!strcmp(s, "intmax"));
}
int		is_double(char *s)
{
	return(!strcmp(s, "double"));
}
int		is_str(char *s)
{
	return(!strcmp(s, "str"));
}
int		is_specifier(char c)
{
	return (c == 'd' || c == 'i' || c == 'x' || c == 'X' || c == 'u' || c == 'o'\
			|| c == 'f' || c == 'd' || c == 'e' || c == 'G' || c == 'g');
}
int		is_1char_lenght(char c)
{
	return (c == 'h' || c == 'l');
}
int		is_2char_lenght(char* c)
{
	return (!ft_strcmp(c, "hh") || !ft_strcmp(c, "ll"));
}
int		is_percent(char *c, int i)
{
	return (*c == '%' && *(c + 1) && (i > 0 && *(c - 1));
}
int		is_flag(char c)
{
	return (c == '+' || c == '-' || c == ' ' || c == '#' || c == '0');
}
int		is_nbr(char c)
{
	return (c >= '0' && c <= '9');
}
int		is_width(char c)
{
	return (is_nbr(c) || c == '*');
}
int		is_precision(char c)
{
	return (c == '.');
}
//-----------------nbr_of_percent---------------
int		nbr_of_percent(const char *)
{
	int		count;
	int		i;

	count = 0;
	i = 0;
	while (format[i])
	{
		if (is_percent(format[i], i))
			count++;
		i++;
	}
	return (count);
}
//--------------------check_nth_percent--------------
char		*check_nth_percent(const char *format, int index)
{
	int		i;
	char	*s
	i = 0;
	while (format[i])
	{
		if(is_percent(format[i]))
		{
			i++;
			index--;
			if (index)
				continue ;
			else
			{
				s = ft_memalloc(sizeof(char) * (percent_len(&format[i] + 1)));
				while (!is_specifier(format[i]))
				{
					*s++ == format[i];
					i++;
				}
				*s++ == format[i];
			}
		}
		i++;
	}
	return (s);
}
//-----------------------get_(flag-width-precision-specifier)----------------
int		get_flag(char *s, t_flags *flag)
{
	int		i;

	i = 0;
	flag->state = 1;
	while (is_flag(s[i]))
	{
		if (s[i] = '+');
			flag->plus = 1;
		else if (s[i] = '-');
			flag->minus = 1;
		else if (s[i] = ' ');
			flag->space = 1;
		else if (s[i] = '0');
			flag->zero = 1;
		else if (s[i] = '#');
			flag->hash = 1;
		i++;
	}
	return (i);
}
int			get_width(char *s, t_width *width)
{
	int		i;

	i = 0;
	width->state = 1;
	if (is_nbr(s[i]))
	{
		width->value = ft_atoi(s);
		while (is_nbr(s[i]))
			i++;
	}
	else if (s[i] == '*')
	{
		width->asterisk = 1;
		i++;
	}
	return (i);
}
int			get_precision(char *s, t_precision *precision)
{
	int		i;

	i = 0;
	precision->state = 1;
	if (is_nbr(s[i]))
	{
		precision->value = ft_atoi(s);
		while (is_nbr(s[i]))
			i++;
	}
	else if (s[i] == '*')
	{
		width->asterisk = 1;
		i++;
	}
	return (i);
}
int			get_specifier(char *s, t_specifier *specifier)
{
	specifier->type = all_specifier(speci_pos_in_tab(s));
	return (ft_strlen(s));
}
//------------------------get_data_in_tab---------------
void		get_in_tab(char *str_fs, t_percent_infos *percent_info)
{
	int		i;
	int		len;

	i = 0;
	while (str_fs[i])
	{
		len = 1;
		if (is_flags(str_fs + i))
			len = get_flag(str_fs + i, percent_info->flags);
		else if (is_width(str_fs + i))
			len = get_flag(str_fs + i, percent_info->width);
		else if (is_precision(str_fs + i))
			len = get_precision(str_fs + i + 1, percent_info->precision);// +1 means after the point
		else if (is_1char_length(str_fs[i]) || is_specifier(str_fs[i]))
			len = get_specifier(str_fs + i, percent_info->specifier);
		i += len
	}
}
//------------------------get_arg-----------------------
void		get_data(const char *format, va_list ap, t_data *data , void *arg_pointer)
{
	int		index;
	char	*str_fs;//format specifier
	int		nbr_of_percent;

	i = 0;
	index = 1;
	nbr_of_percent = get_nbr_of_percent(format);
	if (nbr_of_percent == 0)
	{
		data->nbr_of_percent = 0;
		return ;
	}
	data->nbr_of_percent = nbr_of_percent;
	data->tab_percent_infos = malloc(sizeof(t_percent_infos) * nbr_of_percent);
	while (nbr_of_percent--)
	{
		str_fs = check_nth_percent(format, index);//to manage $ we use static var in this fct
		get_data_in_tab(str_fs, data->tab_percent_info[index - 1]);
		free(str_fs);
	}
	while (index--)
	{
		if (is_intmax(tab[i]))
		{
			p[i] = malloc(sizeof(long long));
			*(long long*)p[i] = va_arg(ap, long long);
			printf("------intmax------\n");
		}
		else if (is_double(tab[i]))
		{
			p[i] = malloc(sizeof(double));
			*(double*)p[i] = va_arg(ap, double);
			printf("------double------\n");
		}
		else if (is_str(tab[i]))
		{
			p[i] = va_arg(ap, char*);
			p[i] = strsub((char*)p[i], 0, strlen((char*)p[i]));
			printf("-----str------\n");
		}
		else
			printf("there isn't at all\n");
		i++;
	}
}
//---------------print_from_topercent-----------
int		print_from_topercent(const char *format, int i)
{
	int		count;

	count = 0;
	while (format[i])
	{
		if (format[i] != '%')
		{
			write(1, format, 1);
			count++;
		}
		else if (format[i + 1] == '%')
		{
			write(1, format, 1);
			i++;
			count++;
		}
		else
			return (count);
		i++;
	}
}
//---------------print_format--------------
int		print_format(const char *format, t_data *data, void **param_pointer)
{
	int		i;
	int		count;
	int		index;

	i = 0;
	index = 0;
	count = 0;
	while (1)
	{
		i = print_from_topercent(format, i);//don't include the %%
		count = i;
		if (!nbr_of_percent)
			return (count);
		count += g_dispatcher[get_handel_nbr(type)](value, data.tab_percent_infos[index]);//type it is a char*
		i += len_of_specifier(format[i]);
		index++;
	}
	return (count);
}
//---------------------------main_fct-------------------
int		printf(const char *format, ...)
{
	va_list						ap;
	t_data						data;
	void						**param_pointer;
	int							nbr_of_percent;

	va_start(ap, n);
	get_data(format, ap, &data, param_pointer);
	count = print_format(format, data, parm_pointer);
	va_end(ap);
	return (count);
}

int main()
{
	ft_printf("", );
	return (0);
}
