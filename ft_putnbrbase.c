unsigned int ft_abs(int n)
{
	long int	a;

	a = n;
	if (a < 0)
		a *= -1;
	return ((unsigned int)a);
}

unsigned	ft_nbrlen(int n, unsigned int base)
{
	unsigned int	num;
	unsigned int	d;
	unsigned int	u;
	int s;

	num = 0;
	s = n < 0 ? -1 : 1;
	d = ft_abs(n);
	u = d % base;
	while (d)
	{
		d /= base;
		u = d % base;
		num++;
	}
	if (n < 0)
		num++;
	else if (!n)
		num++;
	return (num);
}

#include <stdio.h>
#include <limits.h>
void	ft_putnbr(int n, unsigned int base)
{
	static char nb[32] = { 0 };
	unsigned int	d;
	unsigned int	u;
	int s;
	static char const	charset[] = "0123456789abcdefghijklmnopqrstuvwxyz";
	char	*pnb;

	pnb = &nb[30];
	s = n < 0 ? -1 : 1;
	d = ft_abs(n);
	u = d % base;
	while (d)
	{
		*pnb-- = charset[u];
		printf("d = %d ; u = %d\n", d, u);
		d /= base;
		u = d % base;
	}
	if (n < 0)
		*pnb-- = '-';
	else if (!n)
		*pnb-- = '0';
	*pnb++;
	printf("[%s]\n", pnb);
}

int main()
{
	ft_putnbr(42, 2);
	ft_putnbr(0, 10);
	ft_putnbr(INT_MIN, 10);
	ft_putnbr(INT_MAX, 10);
	ft_putnbr(0xdeadbeef, 16);
	ft_putnbr(-4387, 10);
	return (0);
}
