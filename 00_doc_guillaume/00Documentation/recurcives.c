#include	<unistd.h>
#include	<stdio.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}


int fn(int i)
{
	if (i <= 5)
	{
		i += 1;
		write(1, "D", 1);
		fn(i);
		return (0);
	}
	else
	{
		return (0);
	}
}

int		compute_base(n)
{
	if ( n == 1)

		return(7);
	ft_putchar('n');
	compute_base(n-1) + 2 * (n + 3 + (n / 2));
	printf("result: %d\n", (compute_base(n-1) + 2 * (n + 3 + (n / 2))));
	return (0);
}


int		main()
{
	fn(0);
	return (0);
}
