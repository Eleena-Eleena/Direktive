#include <stdio.h>
#include <malloc.h>
#include <string.h>
#include <math.h>

double Add(double a, double b)
{
	return a + b;
}
double Sub(double a, double b)
{
	return a - b;
}
double Mul(double a, double b)
{
	return a * b;
}
double Div(double a, double b)
{
	if (b == 0)
	{
		printf("\nНа 0 делить нельзя");
		return 0;
	}
	return a / b;
}

char* AddBuffers(char* p1, char* p2)
{
	int res1 = strlen(p1);
	int res2 = strlen(p2);
	char* p3 = (char*)malloc((res1 + res2 + 1) * sizeof(char));
	int i = 0;
	for (i = 0; i < res1; i++)
		p3[i] = p1[i];
	for (int j = 0; j < res2; j++) {
		p3[i] = (char)p2[j];
		i++;
	}
	p3[i] = (int)'\0';
	return p3;
}

char* NumberToChar(int n)
{
	char* c;
	c = (char*)malloc(10 * sizeof(char));
	int v = 0; 
	while (n > 9)
	{
		c[v++] = (n % 10) + '0';
		n = n / 10;
	}
	c[v++] = (char)n + '0';
	c[v] = '\0';
	char t;
	
	for (int i = 0; i < v / 2; i++)
	{
		t = c[i];
		c[i] = c[v - 1 - i];
		c[v - 1 - i] = t;
	}
	v = 0;
	while (c[v] != '\0')
		printf("%c", c[v++]);
	printf("\n");
	return c;
}

int CharToNumber(char* p)
{
	int n = strlen(p);
	int number = 0;
	int mult = 1;

	while (n--)
	{
		if ((p[n] < '0' || p[n] > '9') && p[n] != '-') {
			if (number)
				break;
			else
				continue;
		}

		if (p[n] == '-') {    
			if (number) {
				number = -number;
				break;
			}
		}
		else {                    
			number += (p[n] - '0') * mult;
			mult *= 10;
		}
	}

	return number;
}
int checkTriangle(int x1, int y1, int x2,
	int y2, int x3, int y3)
{

	int a = x1 * (y2 - y3)
		+ x2 * (y3 - y1)
		+ x3 * (y1 - y2);

	if (a == 0)
	{
		return 0;
	}
	else {
		return 1;
	}
}