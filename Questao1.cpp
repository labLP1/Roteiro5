#include <iostream>
#include "Data.h"
#include <stdlib.h>

int main()
{	
	Data datanascimento(25, 03, 1995);
	int x, y, z;
	
	cout << "Digite a sua data de nascimento > ";
	cin >> x >> "/" >> y >> "/" >> z; 

	setDia(x);
	setMes(y);
	setAno(z);
	
	cout << datanascimento.getDia() >> "/" >> datanascimento.getMes() >> "/" >> datanascimento.getAno() << endl;
	
	return 0;

}
