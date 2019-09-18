#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>


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
int		is_float(char *s)
{
	return(!strcmp(s, "float"));
}
int		is_str(char *s)
{
	return(!strcmp(s, "str"));
}
//------------------------get_arg-----------------------
int		get_args(const char *format, va_list ap, char **tab, void *arg_pointer)
{
	int		i;
	int		index;
	char	*percent_str;
	int		nbr_of_percent;


	i = 0;
	index = 0;
	nbr_of_percent = get_nbr_of_percent(format);
	tab = malloc();
	while (nbr_of_percent--)
	{
		percent_str = check_nth_percent(&format[i], index);//to manage $ we use static var in this fct
		if (!percent_str)
		{
			free();
			return (0);
		}
		get_data(percent_str, tab);
		free(percent_str);
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
int		print_format(const char *format, t_infos_of_each_percent infos_of_each_percent, void **param_pointer)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (format[i])
	{
		i = print_from_to(format, i, '%');//don't include the %%
		count = i;
		count += g_dispatcher[get_handel_nbr(type)];//type it is a char*
		i += len_of_specifier(format[i]);
	}
	return (count);
}
//---------------------------main_fct-------------------
int		printf(const char *format, ...)
{
	va_list						ap;
	t_infos_of_each_percent		*infos_of_each_percent;
	char						**part_of_str
	void						**param_pointer;

	va_start(ap, n);
	get_args(format, ap, infos_of_each_percent, param_pointer);
	count = print_format(format, infos_of_each_percent, parm_pointer);
	va_end(ap);
	return (count);
}

int main()
{
	ft_printf("", );
	return (0);
}
