#include <unistd.h>
int	argc_ck(int argc)
{
	if (argc == 2)
	{
		return (1);
	}
	else
	{
		write(1, "Error\n", 6);
		return (0);
	}
}

int	argv_ck_len(char *argv[])
{
	int	i;

	i = 0;
	while (argv[1][i] != '\0')
	{
		i++;
	}
	if (i == 31)
	{
		return (1);
	}
	else
	{
		write(1, "Error\n", 6);
		return (0);
	}
}

int	argv_ck_num(char *argv[])
{
	int	i;
	int	aux_num;

	aux_num = 0;
	i = 0;
	while (argv[1][i + 1] != '\0')
	{
		if (argv[1][i] >= '1' && argv[1][i] <= '4')
		{
			aux_num++;
		}	
		i++;
	}
	if (aux_num != 16)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	else
	{
		return (1);
	}		
}

int	argv_ck_order(char *argv[])
{
	int	i;

	i = 0;
	while (argv[1][i] != '\0')
	{
		if ((i % 2) == 0)
		{
			if (!(argv[1][i] >= '1' && argv[1][i] <= '4'))
			{
				write(1, "Error\n", 6);
				return (0);
			}
		}
		else
		{
			if (argv[1][i] != ' ')
			{
				write(1, "Error\n", 6);
				return (0);
			}
		}
		i++;
	}
	return (1);
}
