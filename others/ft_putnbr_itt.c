void ft_putnbr(int n)
{
	char	number[12];
	int	i;
	int	is_negative;
	
	number[11] = '\0';
	i = 10;
	is_negative = 0;
	if (n == -2147483648)
	{
		number[0] = '-';
		number[1] = '2';
		n = 147483648;
	}
	if (n < 0)
	{
		is_negative = 1;
		n = -n;
	}
	if (n == 0)
		number[i] = '0';
	while (n > 0)
	{
		number[i] = n % 10 + '0';
		i--;
		n = n / 10;
	}
	if (is_negative == 1)
		write(1, "-", 1);
	i++;
	while(number[i])
	{
		write(1, &number[i], 1);
		i++;
	}
}
