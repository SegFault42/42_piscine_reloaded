#include <stdio.h>
#include <unistd.h>

#define RED "\e[31m"
#define GREEN "\e[32m"
#define END "\e[37m"
#define RC printf("\n")

void	ft_print_alphabet(void);
void	ft_print_numbers(void);
void	ft_is_negative(int nb);
void	ft_ft(int *nb);
void	ft_swap(int *a, int *b);
void	ft_div_mod(int a, int b, int *div, int *mod);
int		ft_iterative_factorial(int nb);
int		ft_recursive_factorial(int nb);
int		ft_sqrt(int nb);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
int		ft_strcmp(char *str1, char *str2);

int	main(int argc, char **argv)
{
	int ft = 0;
	int	a = 42;
	int b = 24;
	int	div = 0;
	int	mod = 0;

	//===========Ex06==================
	printf(RED"Ex06 : ft_print_alphabet \e[37m\n"END);
	ft_print_alphabet();
	RC;
	//===========Ex07==================
	printf(RED"\nEx07 : ft_print_numbers\e[37m\n"END);
	ft_print_numbers();
	RC;
	//===========Ex08==================
	printf(RED"\nEx08 : ft_is_negative(1)\e[37m\n"END);
	ft_is_negative(1);
	printf(RED"\nEx08 : ft_is_negative(0)\e[37m\n"END);
	ft_is_negative(0);
	printf(RED"\nEx08 : ft_is_negative(-1)\e[37m\n"END);
	ft_is_negative(-1);
	RC;
	//===========Ex09==================
	printf(RED"\nEx09 : ft_ft()\e[37m\n"END);
	printf("Before : %d\n", ft);
	ft_ft(&ft);
	printf("After  : %d\n", ft);
	RC;
	//===========Ex10==================
	printf(RED"Ex10 : ft_swap()\e[37m\n"END);
	printf("Before : a = %d, b = %d\n", a, b);
	ft_swap(&a, &b);
	printf("After  : a = %d, b = %d\n", a, b);
	RC;
	//===========Ex11==================
	printf(RED"Ex11 : ft_div_mod(int a(10), int b(2), int *div, int *mod)\e[37m\n"END);
	ft_div_mod(10, 2, &div, &mod);
	printf("div = %d, mod = %d\n", div, mod);
	printf(RED"Ex11 : ft_div_mod(int a(10), int b(3), int *div, int *mod)\e[37m\n"END);
	ft_div_mod(10, 3, &div, &mod);
	printf("div = %d, mod = %d\n", div, mod);
	RC;
	//===========Ex12==================
	printf(RED"Ex12 : ft_iterative_factorial(int nb(-1))\e[37m\n"END);
	printf("%d\n", ft_iterative_factorial(-1));
	printf(RED"Ex12 : ft_iterative_factorial(int nb(0))\e[37m\n"END);
	printf("%d\n", ft_iterative_factorial(0));
	printf(RED"Ex12 : ft_iterative_factorial(int nb(1))\e[37m\n"END);
	printf("%d\n", ft_iterative_factorial(1));
	printf(RED"Ex12 : ft_iterative_factorial(int nb(2))\e[37m\n"END);
	printf("%d\n", ft_iterative_factorial(2));
	printf(RED"Ex12 : ft_iterative_factorial(int nb(3))\e[37m\n"END);
	printf("%d\n", ft_iterative_factorial(3));
	printf(RED"Ex12 : ft_iterative_factorial(int nb(4))\e[37m\n"END);
	printf("%d\n", ft_iterative_factorial(4));
	printf(RED"Ex12 : ft_iterative_factorial(int nb(5))\e[37m\n"END);
	printf("%d\n", ft_iterative_factorial(5));
	printf(RED"Ex12 : ft_iterative_factorial(int nb(6))\e[37m\n"END);
	printf("%d\n", ft_iterative_factorial(6));
	printf(RED"Ex12 : ft_iterative_factorial(int nb(7))\e[37m\n"END);
	printf("%d\n", ft_iterative_factorial(7));
	printf(RED"Ex12 : ft_iterative_factorial(int nb(8))\e[37m\n"END);
	printf("%d\n", ft_iterative_factorial(8));
	printf(RED"Ex12 : ft_iterative_factorial(int nb(9))\e[37m\n"END);
	printf("%d\n", ft_iterative_factorial(9));
	printf(RED"Ex12 : ft_iterative_factorial(int nb(10))\e[37m\n"END);
	printf("%d\n", ft_iterative_factorial(10));
	printf(RED"Ex12 : ft_iterative_factorial(int nb(11))\e[37m\n"END);
	printf("%d\n", ft_iterative_factorial(11));
	printf(RED"Ex12 : ft_iterative_factorial(int nb(12))\e[37m\n"END);
	printf("%d\n", ft_iterative_factorial(12));
	printf(RED"Ex12 : ft_iterative_factorial(int nb(13))\e[37m\n"END);
	printf("%d\n", ft_iterative_factorial(13));
	RC;
	//===========Ex13==================
	printf(RED"Ex13 : ft_recursive_factorial(int nb(-1))\e[37m\n"END);
	printf("%d\n", ft_recursive_factorial(-1));
	printf(RED"Ex13 : ft_recursive_factorial(int nb(0))\e[37m\n"END);
	printf("%d\n", ft_recursive_factorial(0));
	printf(RED"Ex13 : ft_recursive_factorial(int nb(1))\e[37m\n"END);
	printf("%d\n", ft_recursive_factorial(1));
	printf(RED"Ex13 : ft_recursive_factorial(int nb(2))\e[37m\n"END);
	printf("%d\n", ft_recursive_factorial(2));
	printf(RED"Ex13 : ft_recursive_factorial(int nb(3))\e[37m\n"END);
	printf("%d\n", ft_recursive_factorial(3));
	printf(RED"Ex13 : ft_recursive_factorial(int nb(4))\e[37m\n"END);
	printf("%d\n", ft_recursive_factorial(4));
	printf(RED"Ex13 : ft_recursive_factorial(int nb(5))\e[37m\n"END);
	printf("%d\n", ft_recursive_factorial(5));
	printf(RED"Ex13 : ft_recursive_factorial(int nb(6))\e[37m\n"END);
	printf("%d\n", ft_recursive_factorial(6));
	printf(RED"Ex13 : ft_recursive_factorial(int nb(7))\e[37m\n"END);
	printf("%d\n", ft_recursive_factorial(7));
	printf(RED"Ex13 : ft_recursive_factorial(int nb(8))\e[37m\n"END);
	printf("%d\n", ft_recursive_factorial(8));
	printf(RED"Ex13 : ft_recursive_factorial(int nb(9))\e[37m\n"END);
	printf("%d\n", ft_recursive_factorial(9));
	printf(RED"Ex13 : ft_recursive_factorial(int nb(10))\e[37m\n"END);
	printf("%d\n", ft_recursive_factorial(10));
	printf(RED"Ex13 : ft_recursive_factorial(int nb(11))\e[37m\n"END);
	printf("%d\n", ft_recursive_factorial(11));
	printf(RED"Ex13 : ft_recursive_factorial(int nb(13))\e[37m\n"END);
	printf("%d\n", ft_recursive_factorial(13));
	printf(RED"Ex13 : ft_recursive_factorial(int nb(13))\e[37m\n"END);
	printf("%d\n", ft_recursive_factorial(13));
	RC;
	//===========Ex14==================
	printf(RED"Ex14 : ft_sqrt(int nb(10))\e[37m\n"END);
	printf("%d\n", ft_sqrt(10));
	printf(RED"Ex14 : ft_sqrt(int nb(4))\e[37m\n"END);
	printf("%d\n", ft_sqrt(4));
	printf(RED"Ex14 : ft_sqrt(int nb(100))\e[37m\n"END);
	printf("%d\n", ft_sqrt(100));
	printf(RED"Ex14 : ft_sqrt(int nb(-100))\e[37m\n"END);
	printf("%d\n", ft_sqrt(-100));
	RC;
	//===========Ex15==================
	printf(RED"Ex15 : ft_putstr(\"Hello World\")\e[37m\n"END);
	ft_putstr("Hello World");
	RC;
	//===========Ex16==================
	printf(RED"Ex16 : ft_strlen(\"Hello World\") (11 characteres)\e[37m\n"END);
	printf("%d\n", ft_strlen("Hello World"));
	/*//===========Ex17==================*/
	printf(RED"Ex17 : ft_strcmp(\"Hello World\", \"Hello_World\")\e[37m\n"END);
	printf("%d\n", ft_strcmp("Hello World", "Hello_World"));


	(void)argc;
	(void)argv;
	return (0);
}
