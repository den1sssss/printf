
static int	stepen(int n)
{
	int	s;

	s = 1;
	while (n)
	{
		s *= 10;
		n--;
	}
	return (s);
}

static int	len(int n)
{
	int	i;

	i = 0;
	if (!n)
		return (1);
	while (n)
	{
		i++;
		n /= 10;
	}
	return (i);
}

void	ft_putnbr_fd(int n, int fd)
{
	int	znak;
	int	dlina;
	int	temp;

	znak = 1;
	if (n < 0)
	{
		znak = -1;
		write(fd, "-", 1);
	}
	dlina = len(n);
	while (dlina--)
	{
		temp = ((n / stepen(dlina)) % 10) * znak + '0';
		write(fd, &temp, 1);
	}
}
