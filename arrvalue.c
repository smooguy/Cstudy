//arrvalue.c -- 배열과포인터 그리고 함수  종합셋트
#include <stdio.h>

#define ROWS 3
#define COLS 5

void ArrInput(double [][COLS], int);
double AverageCols(double [], int);
double TotalAverage(double [][COLS], int);
double MaxNumber(double [][COLS], int);

int main(void)
{
	double arr[ROWS][COLS];
	int i;
	double total, maxnum;

	ArrInput(arr, ROWS);

	for(i = 0; i < ROWS; i++)
		printf("%d행의 평균값은 %g입니다.\n",i, AverageCols(arr[i], COLS));

	total = TotalAverage(arr, ROWS);
	maxnum = MaxNumber(arr, ROWS);

	printf("전체 값의 평균값은 %g입니다.\n전체 값중 가장 큰 값은 %g입니다.\n", total, maxnum);

	return 0;
}

void ArrInput(double arr[][COLS], int num)
{
	int r, c;
	printf("3X5의 배열에 저장될 숫자들을 입력할껍니다.\n");
	for(r = 0; r < num; r++)
	{
		printf("5개 숫자를 입력해주세요: ");
		for(c = 0; c < COLS; c++)
			scanf("%lf", &arr[r][c]);
		putchar('\n');
	}
}

double AverageCols(double arr[], int num)
{
	int i;
	double sum = 0;

	for(i = 0; i < num; i++)
		sum += arr[i];
	return sum/num;
}

double TotalAverage(double arr[][COLS], int num)
{
	int r, c;
	double sum = 0;

	for(r = 0; r < num; r++)
		for(c = 0; c < COLS; c++)
			sum += arr[r][c];
	return sum / (num * COLS);
}

double MaxNumber(double arr[][COLS], int num)
{
	int r, c;
	double maxnum = arr[0][0];

	for(r = 0; r < num; r++)
	{
		for(c = 0; c < COLS; c++)
		{
			if(arr[r][c] > maxnum)
				maxnum = arr[r][c];
		}
	}
	return maxnum;
}
