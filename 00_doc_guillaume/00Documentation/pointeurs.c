//POINTEURS

int		main(void)
{
	int		a;
	int		*ptr;
	int		**ptr2;

	a = 3;
	ptr = &a;
	ptr2 = &ptr;
	ft_putnbr(**ptr2);

	**ptr = 42;

	ft_putchar('\n');
	ft_putnbr(a);
	return (0);
}

//	RESULTATS :
//
//
//


