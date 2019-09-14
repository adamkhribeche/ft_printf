#include "pri.h"

int	print_format(va_list ap, const char *format, t_arg_info *tab_args_infos)
{
	int		arg_index;

	arg_index = 0;
	while (format[i])
	{
		if (format[i] != '%' || format[i] == '%' && format[i + 1] != '%')
		{
			putchar(format[i]);
			i = format[i + 1] == '%' ? i + 1 : i;
		}
		else
		{
			tab_args_infos[arg_index].fct(ap, tab_args_infos.stat_of_print);
			while (!is_alpha(format[i]))
				i++;
			if (format[i] == l || format[i] == ll || format[i] == h\
			|| format[i] == hh || format[i] == L)
				i++;
			arg_index++;
		}
		i++;
	}
	va_end(va);
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list		ap;
	t_arg_infs	*tab;
	int		count;
	int		is_format_correct;

	is_format_correct = parse_format(format, &tab_args_infos);
	if (!is_format_correct)
		return (-1);
	va_start(format, ap);
	count = print_format(ap, format, tab_args_infos);
	va_end(va);
	return (count);
}
