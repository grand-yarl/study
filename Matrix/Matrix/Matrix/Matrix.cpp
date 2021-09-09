// ConsoleApplication9.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <stdlib.h>
#include <iostream>
#include "Matrix.h"
#include "Node.h"


using namespace std;




int main()
{
	Matrix <int> a;
	Matrix <double> b(3, 3);
	double n = 1;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++) 
		{
			b.set_el(i, j, n);
			n++;
		}
	}
	b.set_el(0, 0, 49);
	b.set_el(1, 2, 13);
	b.set_el(2, 1, 51);
	Matrix<double> c = (b ^ (-1));
	Node <Matrix<double>> v(b);
	cout << v.get_data();
	v.set_data(c);
	cout << v.get_data();


	system("pause");
	return 0;
}

