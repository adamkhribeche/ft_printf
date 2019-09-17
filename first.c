#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
//----------------------print_fct----------------------
void af_int(void *p)
{
	int n = *(int *)p;
	printf("%d\n", n);
}
void af_unsint(void *p)
{
	unsigned int n = *(unsigned int *)p;
	printf("%u\n", n);
}
void af_char(void *p)
{
	char n = *(char *)p;
	printf("%c\n", n);
}
void af_long(void *p)
{
	long n = *(long *)p;
	printf("%ld\n", n);
}
void af_double(void *p)
{
	double n = *(double *)p;
	printf("%lf\n", n);
}
//-----------------------is_fct-----------------------
int is_intmax(char *s)
{
	return(!strcmp(s, "intmax"));
}
int is_double(char *s)
{
	return(!strcmp(s, "double"));
}
int is_float(char *s)
{
	return(!strcmp(s, "float"));
}
int is_str(char *s)
{
	return(!strcmp(s, "str"));
}
//------------------------get_arg-----------------------
void get_args(va_list ap, char **tab, void **p, int index)
{
	int i;

	i = 0;
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
		else if (is_float(tab[i]))
		{
			p[i] = malloc(sizeof(float));
			*(float*)p[i] = va_arg(ap, double);
			printf("------float------\n");
		}
		else if (is_str(tab[i]))
		{
			p[i] = malloc(sizeof(char) * 20);
			p[i] = va_arg(ap, char *);
			printf("-----str------\n");
		}
		else
			printf("there isn't at all\n");
		i++;
	}
}
//---------------------------main_fct-------------------
void ff(int n, ...)
{
	va_list ap;
	int i;
	char *tab[9] = {"intmax", "intmax", "intmax", "intmax", "intmax", "intmax", "double", "float", "str"};
	void *p[9];

	va_start(ap, n);
	get_args(ap, tab, p, 9);
	printf("%c\n", *(char*)p[0]);
	printf("%hd\n", *(short int*)p[1]);
	printf("%d\n", *(int*)p[2]);
	printf("%lld\n", *(long long*)p[3]);
	printf("%u\n", *(unsigned int*)p[4]);
	printf("%ld\n", *(long*)p[5]);
	printf("%lf\n", *(double*)p[6]);
	printf("%f\n", *(float*)p[7]);
	printf("%s\n", (char*)p[8]);
	/*while (n > 0)
	{
		va_start(ap, n);
		get(tab, p);
		print(ap, n, tab);
		printf("------88-----\n");
		va_end(ap);
		n--;	
	}*/
	va_end(ap);
}

int main()
{
	char c = 65;
	short sh = -5554;
	int n = -455;
	long long ll = 9123456458;
	unsigned int u = 4054231569;
	long l = 9999;
	double d = 5412.2548;
	float f = 54.326;
	char *s = "adam khribeche";

	//printf("%3$d , %1$d , %4$d , %2$.4d ", 1,255,3,4,5,6);
	ff(6, c, sh, n, ll, u, l, d, f, s);
}
