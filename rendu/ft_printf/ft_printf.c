#include <unistd.h>
#include <stdlib.h>
 #include <stdarg.h>

void	ft_putchar(char c, int *count)
{
	write(1, &c, 1);
	*(count)++;
}

int	ft_print_nb(int nb, int count)
{
	if (nb < 0)
	{
		ft_putchar('-', &count);
		nb *= -1;
	}
	if (nb < 9)
	{
		ft_putchar(nb + '0', &count);
	}
	else 
	{
		ft_print_nb(nb/10);
		ft_putchar((nb%10) + '0', &count);
	}
}

void	ft_print_string(char *str, int count)
{
	int i = 0;
	while (str[i])
	{
		ft_putchar(str[i], count);
		i++;
	}
}

void	ft_print_hex(int nb, int count)
{
	char *str = "0123456789abcdef";

	if (nb < 0)
	{
		ft_putchar('-', &count);
		nb *= -1;
	}
	if (nb < 16)
	{
		ft_putchar(str[nb], &count);
	}
	else 
	{
		ft_print_hex(nb/16);
		ft_putchar(str[(nb%16)], &count);
	}
}

int ft_printf(const char *str, ... )
{
	va_list arg;
	va_start(arg, str);
	int i = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			if (str[i + 1] == 'd')
			{
				va_arg(arg, int);
			}
			if (str[i + 1] == 's')
			{
				va_arg(arg, char*)
			}
			if (str[i + 1] == 'x')
			{
				va_arg(arg, unsigned int);

			}
		}
		i++;
	}
}

int main()
{
}
