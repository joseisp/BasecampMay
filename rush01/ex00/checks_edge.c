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

int	Check_row_left(int a[4][4], int num[16])
{
	int	i;
	int	j;
	int	qtd_towers;
	int	max_tower;

	i = 0;
	while (i < 4)
	{
		qtd_towers = 0;
		max_tower = 0;
		j = 0;
		while (j++ < 4)
		{
			if (a[i][j - 1] > max_tower)
			{
				qtd_towers++;
				max_tower = a[i][j - 1];
			}
		}
		if (qtd_towers == num[i + 8])
			i++;
		else
			return (0);
	}
	return (1);
}

int	Check_row_right(int a[4][4], int num[16])
{
	int	i;
	int	j;
	int	qtd_towers;
	int	max_tower;

	i = 0;
	while (i < 4)
	{
		j = 3;
		qtd_towers = 0;
		max_tower = 0;
		while (j-- >= 0)
		{
			if (a[i][j + 1] > max_tower)
			{
				qtd_towers++;
				max_tower = a[i][j + 1];
			}
		}
		if (qtd_towers == num[12 + i])
			i++;
		else
			return (0);
	}
	return (1);
}

int	Check_col_up(int a[4][4], int num[16])
{
	int	i;
	int	j;
	int	qtd_towers;
	int	max_tower;

	i = 0;
	while (i < 4)
	{
		j = 0;
		qtd_towers = 0;
		max_tower = 0;
		while (j++ < 4)
		{
			if (a[j - 1][i] > max_tower)
			{
				qtd_towers++;
				max_tower = a[j - 1][i];
			}
		}
		if (qtd_towers == num[i])
			i++;
		else
			return (0);
	}
	return (1);
}

int	Check_col_down (int a[4][4], int num[16])
{
	int	i;
	int	j;
	int	qtd_towers;
	int	max_tower;

	j = 0;
	while (j < 4)
	{
		i = 3;
		qtd_towers = 0;
		max_tower = 0;
		while (i-- >= 0)
		{
			if (a[i + 1][j] > max_tower)
			{
				qtd_towers++;
				max_tower = a[i + 1][j];
			}
		}
		if (qtd_towers == num[4 + j])
			j++;
		else
			return (0);
	}
	return (1);
}

int	Check_numbers_towers(int a[4][4], int num[16])
{
	int	var1;
	int	var2;
	int	var3;
	int	var4;

	var1 = Check_row_left(a, num);
	var2 = Check_row_right(a, num);
	var3 = Check_col_up(a, num);
	var4 = Check_col_down(a, num);
	if (var1 && var2 && var3 && var4)
		return (1);
	else
		return (0);
}
