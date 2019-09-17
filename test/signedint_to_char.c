#include <stdio.h>

int main()
{
	int n = -37;
	void *p = &n;
	char *pp = p;

	//p = &n;
	//c = (int)n;
	printf("%hhd\n", *pp);
	//printf("%p ---- %p\n", &n, &c);
}
