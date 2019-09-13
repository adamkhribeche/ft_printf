#include <stdio.h>
#include <stdarg.h>
/*
if ap is passed to a fct that uses va_arg(ap,type), then the value of ap is undefined after the return of that fct.
*/


void	iint(va_list ap)
{
	int n;

	n = va_arg(ap, int);
	printf("%d\n", n); 
}
void	cchar(va_list ap)
{
	char n;

	n = (char)va_arg(ap, int);
	printf("%c\n", n); 
}
void	uint(va_list ap)
{
	unsigned int n;

	n = (unsigned int)va_arg(ap, int);
	printf("%u\n", n); 
}
void	llong(va_list ap)
{
	long n;

	n = va_arg(ap, long);
	printf("%ld\n", n); 
}
void	ffloat(va_list ap)
{
	float n;

	n = va_arg(ap, double);
	printf("%f\n", n); 
}
void	ddouble(va_list ap)
{
	double n;

	n = va_arg(ap, double);
	printf("%lf\n", n); 
}

void	ff(int w, ...)
{
	va_list	ap;
	double n;
	/*int a;
	unsigned int b;
	char c;
	long int d;
	long long int m;
	va_list	ap;
	double	f;*/

	va_start(ap, w);
	iint(ap);
	cchar(ap);
	uint(ap);
	llong(ap);
	ffloat(ap);
	n = va_arg(ap, double);
	printf("%lf\n", n); 
	iint(ap);
	va_end(ap);
}

int main()
{
	int a = 9;
	int a2 = 10;
	char b = 65;
	unsigned int c = 876;
	long d = 8999999999;
	float e = 99.;
	double f = 876544.9808;

	ff(5, a, b, c, d, e, f, a2);
	//signed char c = 240;
	//char c = 244;
	/*int a = 4;
	unsigned int b = 8;
	char c = 65;
	long int d = 99999;
	long long int m = 999999999;*/
	//unsigned char c = 44;
	//int n = (int)c;
	//ff(8, a, b, c, d, m, f);
}
