#ifndef DATA_H
#define DATA_H

#include <iostream>

using namespace std;



class Data{
	public:
	   int dia;
	   int mes;
	   int ano;
	
	Data(int d, int m, int a);
	void avancarDia();
}

#endif
