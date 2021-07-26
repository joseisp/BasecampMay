#include <unistd.h>
int		towers(int a[4][4], int n, int *check_print, int num[16]);
int		Check_col_down (int a[4][4], int num[16]);
int		Check_col_up(int a[4][4], int num[16]);
int		Check_row_right(int a[4][4], int num[16]);
int		Check_row_left(int a[4][4], int num[16]);
int		Check(int a[4][4], int i, int j, int k);
void	Print(int a[4][4]);
void	middle_tower(int temp[4][4], int n, int *check_print, int num[16]);
void	can_place(int temp[4][4], int n, int *check_print, int num[16]);
int		Check_numbers_towers(int a[4][4], int num[16]);

void	Print(int a[4][4])
{
	char	c;
	int		i;
	int		j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			c = a[i][j] + '0';
			write(1, &c, 1);
			if (j != 3)
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

void	middle_tower(int temp[4][4], int n, int *check_print, int num[16])
{
	if (n == 15)
	{
		if (Check_numbers_towers(temp, num) && *check_print == 0)
		{
			Print(temp);
			*check_print = 1;
		}
	}
	else
	{
		towers(temp, n + 1, check_print, num);
	}
}

void	can_place(int temp[4][4], int n, int *check_print, int num[16])
{
	int	i;
	int	j;
	int	k;

	i = n / 4;
	j = n % 4;
	k = 1;
	while (k <= 4)
	{
		if (Check(temp, i, j, k))
		{
			temp[i][j] = k;
			middle_tower(temp, n, check_print, num);
			temp[i][j] = 0;
		}
		k++;
	}
}

int	towers(int a[4][4], int n, int *check_print, int num[16])
{
	int	temp[4][4];
	int	v_aux[3];

	v_aux[0] = 0;
	while (v_aux[0]++ < 4)
	{
		v_aux[1] = 0;
		while (v_aux[1]++ < 4)
			temp[v_aux[0] - 1][v_aux[1] - 1] = a[v_aux[0] - 1][v_aux[1] - 1];
	}
	v_aux[0] = n / 4;
	v_aux[1] = n % 4;
	if (a[v_aux[0]][v_aux[1]] != 0)
	{
		middle_tower(temp, n, check_print, num);
	}
	else
	{
		can_place(temp, n, check_print, num);
	}
	if (*check_print == 1)
		return (1);
	else
		return (0);
}

int	main_tower(int num[16])
{
	int		arr[4][4];
	int		check_print;
	int		i;
	int		j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			arr[i][j] = 0;
			j++;
		}
		i++;
	}
	check_print = 0;
	if (!(towers(arr, 0, &check_print, num)))
		write(1, "Error\n", 6);
	return (0);
}
