// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include <iostream>
#include <conio.h>

using namespace std;

int n;
double b, q;
double GeoProgress(double b, double q, int n)
{
 if (n==1) return b;
 else return q*GeoProgress(b,q,n-1);
}

int main(int argc, char *argv[])
 {
	 argc = 4;
	 n = atoi(argv[1]);
	 b = atoi(argv[2]);
	 q = atoi(argv[3]);
	
	 setlocale(LC_ALL, "Russian");
	 cout << "\n Порядковый номер члена геометрической прогрессии = " << n;
	 cout << "\n Первый член геометрической прогрессии = " << b;
	 cout << "\n Разность геометрической прогрессии = " << q;
     cout << "\n\n Искомый член геометрической прогрессии = " << GeoProgress(b,q,n);
 
 getchar();
 getchar();
 return 0;
 }
