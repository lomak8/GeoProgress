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
int main()
 {
	 setlocale(LC_ALL, "Russian");
	 cout << "Введите первый член геометрической прогрессии - ";
	 cin >> b;
	 cout << "Введите знаменатель геометрической прогрессии - ";
	 cin >> q;
     cout << "\n Искомый член прогрессии равен = " << GeoProgress(b,q,n);
 
 getchar();
 getchar();
 return 0;
 }