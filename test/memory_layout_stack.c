/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory_layout_stack.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhribec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 13:58:52 by nkhribec          #+#    #+#             */
/*   Updated: 2019/09/15 14:15:38 by nkhribec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ff(int n, int m, int n1, int m1)
{
	int *p4;
	char c2;
	int a1;
	int a4;
	char c1;
	int a2;
	void *p1;
	void *p2;
	int a3;
	int *p3;
	char buff[10000];
	char c3;
	
	printf("%p = n\n", &n);
	printf("%p = m\n", &m);
	printf("%p = n1\n", &n1);
	printf("%p = m1\n", &m1);
	printf("%p = a1\n", &a1);
	printf("%p = a2\n", &a2);
	printf("%p = a3\n", &a3);
	printf("%p = a4\n", &a4);
	printf("%p = c1\n", &c1);
	printf("%p = c2\n", &c2);
	printf("%p = c3\n", &c3);
	printf("%p = p1\n", &p1);
	printf("%p = p2\n", &p2);
	printf("%p = p3\n", &p3);
	printf("%p = p4\n", &p4);
	printf("%p = buff0\n", &buff[0]);
	printf("%p = buff1\n", &buff[1]);
	printf("%p = buff2\n", &buff[2]);

}

int main()
{
	ff(8, 9, 3, 3);
}
