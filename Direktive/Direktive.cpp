#include "Header.h"
#include <stdio.h>
#include <math.h>
#define RES 2.0;
#define RES1 3.0;
#define V 2;
#define V1 3;
#define P "Hello ";
#define P1 "World";
#define NN  123489;
#define X  0;
#define Y  0;
#define P2 {'-','5','3','8','\0'} ;
#define POWER2(x) ((x) * (x));


int main()
{
	system("chcp 1251>nul");
	double res;
	double a = RES;
	double b = RES1;
	res = Add(a, b);
	printf("\nСложение: %f", res);

	res = Sub(a, b);
	printf("\nВычетание: %f", res);
	res = Mul(a, b);
	printf("\nУмножение: %f", res);
	res = Div(a, b);
	printf("\nДеление: %f", res);
	char pp[] = P;
	char pp2[] = P1;
	char* pp3 = AddBuffers(pp, pp2);
	printf("\nОбъединенная строчка =  %s", pp3);
	int nn = NN;
	printf("\n");
	char* ppp = NumberToChar(nn);
	printf("\nЧисло =  %s", ppp);
	char message[] = P2;
	int ppp1 = CharToNumber(message);
	printf("\nЧисло =  %d", ppp1);

#if X != 0 
	printf("Это не начало координат");
#elif Y != 0
	printf("Это не начало координат");
#else
	double d = 0.0, p = 0.0, s = 0.0;
	int x, y, xd = 0, yd = 0, x1 = 0, x2 = 0, y1 = 0, y2 = 0, d1 = 0, x31, x32, x21, y31, y32, y21;
	printf("\nВведите координату x1 = ");
	scanf("%d", &x1);
	printf("Введите координату y1 = ");
	scanf("%d", &y1);
	printf("Введите координату x2 = ");
	scanf("%d", &x2);
	printf("Введите координату y2 = ");
	scanf("%d", &y2);
	x = X;
	y = Y;
	xd = POWER2(x2 - x1);
	yd= POWER2(y2 - y1);
	d1 = xd + yd;
	d = sqrt(d1);
	printf("\nДлина = %f",d);
	if (checkTriangle(x, y, x1, y1, x2, y2) == 0)
	{
		printf("\nНет, не образует");
	}
	else
	{
		x21 = POWER2(x1 - x);
		y21 = POWER2(y1 - y);
		x31 = POWER2(x2 - x);
		y31 = POWER2(y2 - y);
		x32 = POWER2(x2 - x1);
		y32 = POWER2(y2 - y1);
		p = sqrt((x21 + y21)) + sqrt((x32 + y32)) + sqrt((x31 + y31));
		printf("\nПериментр = %f", p);

		x31 = (x-x2);
		y31 = (y-y2);
		x32 = (x1-x2);
		y32 = (y1-y2);
		s = (fabs((x31 * y32)- (x32*y31)))/2;
		printf("\nПлощадь = %f", s);
	}
#endif
	
	printf("\n");
	system("pause");
}
