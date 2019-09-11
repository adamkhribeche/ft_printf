#include "pri.h"

int	ft_printf(const char *format, ...)
{
	va_list		ap;
	t_arg_infs	*tab;
	int		count;
	int		i;
	int		arg_position;
	int		int_x;
	double		double_x;
	long int	longint_x;
	long double	longdouble_x;
	long long int	longlongint_x;
	long long double	longlongdouble_x;


	count = ft_analyse_format(format, t_arg_infs **tab);//return 0 if success, -1if error
	if (count == -1)
		return (-1);
	va_start(format, ap);
	while (format[i])
	{
		if (format[i] != '%' || format[i] == '%' && format[i + 1] != '%')
		{
			putchar(format[i]);
			i = format[i + 1] == '%' ? i + 1 : i;
		}
		else
		{
			if (is_numeric_conv(tab[arg_position].type))
			{
				x = va_arg(ap, int);
				tab[arg_position].fct();
			}
			if (is_longnumeric_conv(tab[arg_position].type))
			{
				x = va_arg(ap, int);
				tab[arg_position].fct();
			}
			if (is_longlongnumeric_conv(tab[arg_position].type))
			{
				x = va_arg(ap, int);
				tab[arg_position].fct();
			}
			if (is_decimal_conv(tab[arg_position].type))
			{
				x = va_arg(ap, int);
				tab[arg_position].fct();
			}
			if (is_longdecimal_conv(tab[arg_position].type))
			{
				x = va_arg(ap, int);
				tab[arg_position].fct();
			}
			if (is_longlongdecimal_conv(tab[arg_position].type))
			{
				x = va_arg(ap, int);
				tab[arg_position].fct();
			}
			while (!is_alpha(format[i]))
				i++;
			if (format[i] == l || format[i] == ll || format[i] == h\
			|| format[i] == hh || format[i] == L)
				i++;
			arg_position++;
		}
		i++;
	}
	va_end(va);
	return (count);
}
