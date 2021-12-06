#include "ft_printf.h"

static int ft_strlen(const char *str)
{
	int i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}

static int ft_putstr(char *str)
{
	int i;

	i = 0;
	if(!str)
	{
		write(1,"(null)",6);
		return (6);
	}
	while(str[i])
	{
		write(1,&str[i],1);
		i++;
	}
	return(i);
}


static int numb_len(unsigned long a)
{
	int i;

	i=0;
	while(a > 0)
	{
		a /= 16;
		i++;
	}
	return(i);
}

static char  *reverse(char *str)
{
	int	i;
	char temp;
	int	dlina;

	i = 0;
	dlina = ft_strlen(str);
	while (i < dlina / 2)
	{
		temp = str[i];
		str[i] = str[dlina - i - 1];
		str[dlina - i - 1] = temp;
		i++;
	}
	return (str);
}

int	ft_xX(unsigned long chislo, char bukva, int osn)
{
	int i;
	char *str;
	unsigned long numb;
	char *a;
	int len;

	len = numb_len(chislo);
	str = (char *)malloc(numb_len(chislo) + 1);
	str[numb_len(chislo) + 1]= '\0';
	if(str == NULL)
			return(0);
	i = 0;
	while (i < len)
	{
		numb = chislo % 16;
		if (numb > 9)
			str[i] = numb - 10 + bukva;
		else
			str[i] = numb + '0';
		chislo /= 16;
		i++;
		
	}
	str = reverse(str);
	str[len] = 0;
	ft_putstr(str);
	return (ft_strlen(str));

}

// int main()
// {
// 	// ft_xX(2834772893, 'A', 16);
// 	printf("[%d]", ft_xX(1234, 'a', 16));
// }
