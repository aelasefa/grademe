#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
	write( 1 , &c , 1);
}

void last_word(char *s)
{
	int i = 0;
	while(s[i])
		i++;
	while(s[i] <= 32)
		i--;
	int end = i;
	while(s[i] > 32)
		i--;
	i++;
	while (s[i] && i <= end)
	{
		ft_putchar(s[i]);
		i++;
	}
}

int main (int ac ,char **av)
{
	if( ac == 2)
		last_word(av[1]);
	write(1, "\n" , 1);
}
