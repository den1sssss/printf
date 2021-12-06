#include "ft_printf.h"

// int ft_strlen(const char *str)
// {
// 	int i;

// 	i = 0;
// 	while(str[i])
// 		i++;
// 	return (i);
// }

// int	ft_putchar(int c)
// {
// 	write(1, &c, 1);
// 	return (1);
// }
// int ft_putstr(char *str)
// {
// 	int i;

// 	i = 0;
// 	if(!str)
// 	{
// 		write(1,"(null)",6);
// 		return (6);
// 	}
// 	while(str[i])
// 	{
// 		write(1,&str[i],1);
// 		i++;
// 	}
// 	return(i);
// }

// int ft_putnbrpu(unsigned int a, int number)
// {
// 	if(a >= 10)
// 	{
// 		number = ft_putnbr_fd(a / 10, number);
// 		number = ft_putnbr_fd(a % 10, number);
// 	}
// 	else 
// 		number += ft_putchar(a + '0');
// 	return(number);
// }

// int ultrakek(va_list ptr,int i)
// {
// 	if(i=='c')
// 		return (ft_putchar(va_arg(ptr, int)));
// 	// if(i== 'd' || i == 'i')
// 	// 	return (ft_putnbr_fd(va_arg(ptr, int), 0));
// 	if(i=='s')
// 		return (ft_putstr(va_arg(ptr, char *)));
// 	if(i=='%')

// 		write(1,'%',1);
// 	// if(i=='u')
// 	// 	return (ft_putnbrpu(va_arg(ptr, unsigned int), 0));
	
// 	if(i =='x')
// 		return(ft_xX(va_arg(ptr,unsigned int),'a',16));
// 	if(i=='X')
// 		return(ft_xX(va_arg(ptr,unsigned int),'A',16));

// 	// if(i == 'p')
// 	// 	return(ft_p(va_arg(ptr,unsigned long)));

// }
// static int	itog(va_list ptr, const char *kek)
// {
// 	int count;
// 	char c;
// 	int i;

// 	i = 0;
// 	while(kek[i])
// 	{
// 		if(kek[i]=='%')
// 			count += ultrakek(ptr,kek[i+1]);
// 		i+=2;
// 	}
// 	return(count);
// }
// int ft_printf(const char *kek, ...)
// {
// 	va_list ptr;

// 	va_start(ptr, kek);
// 	va_end(ptr);
// 	return(itog(ptr,kek));
// }

int main(void)
{
	// printf("%lu\n",  -1);
	// printf("%lu\n",  1);
	printf("%lu\n",  2147483647 * 2 + 1 + 1);
	//  ft_printf("%u", 412242131);
	return (0);
}