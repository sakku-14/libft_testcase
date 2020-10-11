#include "libft.h"

int main()
{
	ft_putnbr_fd(1234, 1);
	write(1, "\n", 1);
	ft_putnbr_fd(-1234, 1);
	write(1, "\n", 1);
	ft_putnbr_fd(0, 1);
	write(1, "\n", 1);
	ft_putnbr_fd('c', 1);
	write(1, "\n", 1);
	return (0);
}
