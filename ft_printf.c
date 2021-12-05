#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
int ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}
static int ultrakek(va_list prt, int i)
{
	if(i=='c')
	if(i=='s')
	if(i=='p')
	if(i=='d')
	if(i=='i')
	if(i=='u')
	if(i=='x')
	if(i=='X')
	if(i=='%')
}
static int	itog(va_list ptr, const char *kek)
{
	int dlina;
	int count;
	char c;

	dlina = ft_strlen(kek);
	while(i < dlina)
	{
		if(kek[i]=='%')
			ultrakek(kek[i+1]);
		
	}
	return(count);
}
int ft_printf(const char *kek, ...)
{
	va_list ptr;

	va_start(va_list ptr, kek);
	return(itog(ptr,kek));
}

int main(void)
{
	//ft_printf("%d%%%d%s",1,1,"\nbebra");
	printf("%d%%%d%s",1,1,"\nbebra");
}