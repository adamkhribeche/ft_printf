#include <stdio.h>

int main()
{
	double n = -37.778;
	void *p = &n;
	float *pp = p;

	//p = &n;
	//c = (int)n;
	printf("%f\n", *pp);
	//printf("%p ---- %p\n", &n, &c);
}
