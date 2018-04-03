#include	<stdio.h>

int		main()
{
	int		b;
	int		n;
	int		new_b;

	n = 1;		//niveau de depart
	b = 5;		//base de depart
	
//	while (n < 10)
//	{
	new_b = (b + 2 * (n + 3 + n / 2));
	printf("%d", new_b);
//	b = new_b;
//	n++;
//	}
	return (0);
}
