#include "libft.h"

int	ft_isspace(const char *str)
{
	if (*str == ' ' || *str == '\f' || *str == '\n' || *str == '\r'
		|| *str == '\t' || *str == '\v')
		return (1);
	return (0);
}

long ft_strtol(const char *restrict str, char **restrict endptr, int base)
{
	int		sign;
			while (ft_isspace(str))
			str++;
		while (*str == '-' || *str == '+')
		{
			if (*str == '-')
				sign = -sign;
			str++;
		}
		while (*str >= '0' && *str <= '9')
		{
			result = result * 10 + (*str - '0');
			str++;
		}
		return (int)(sign * result);
}

int	ft_atoi(const char *str)
{
	int		sign;
	long	result;
	char *endptr;
	
	sign = 1;
	result = 0;
	while (*str != '\0')
	{
		result = ft_strtol(str, &endptr, 10)
	}
		return (int)(sign * result);
	}
	return (0);
}

// int	main(void)
// {
// 	const char *str = "  -12345abc";
// 	int result = ft_atoi(str);

// 	printf("Result: %d\n", result);

// 	return (0);
// }