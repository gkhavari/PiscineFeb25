#include <unistd.h>

void ft_putstr(char *str)
{
        int i = 0;
        while (str[i])
        {
                write(1, &str[i], 1);
                i++;
        }
}

void ft_putnbr(int nbr)
{
        if (nbr == 0)
                write(1, "0", 1);
        if (nbr > 9)
                ft_putnbr(nbr / 10);
        char c = nbr % 10 + '0';
        write(1, &c, 1);
}

int main(void)
{
        int i = 1;
        while (i < 100)
        {
                if (i % 3 == 0)
                        ft_putstr("Fizz");
                if (i % 5 == 0)
                        ft_putstr("Buzz");
                if (i % 3 != 0 && i % 5 != 0)
                        ft_putnbr(i);
                write(1, "\n", 1);
                i++;
        }
}
