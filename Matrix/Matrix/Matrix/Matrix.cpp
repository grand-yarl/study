// ConsoleApplication9.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <stdlib.h>
#include <iostream>
#include "Matrix.h"

using namespace std;




int main()
{
	Matrix <int> a;
	Matrix <double> b(3, 4);
	double n = 1;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++) 
		{
			b.set_el(i, j, n);
			n++;
		}
	}
	b.set_el(1, 1, 13);
	b.set_el(2, 3, 51);
	cout << b;
	cout << b.det() << '\n';
	cout << b.Gauss();


	system("pause");
	return 0;
}

