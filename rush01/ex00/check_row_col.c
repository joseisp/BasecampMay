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

int	Check(int a[4][4], int i, int j, int k)
{
	int	m;
	int	n;

	n = 0;
	while (n < 4)
	{
		if (a[i][n] == k)
			return (0);
		n++;
	}
	m = 0;
	while (m < 4)
	{
		if (a[m][j] == k)
			return (0);
		m++;
	}
	return (1);
}
