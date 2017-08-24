#include <iostream>
#include "Data.h"
#include <stdlib.h>

int main()
{	
	Data datanascimento(25, 03, 1995);
	
	
	cout << "Digite a sua data de nascimento > ";
	cin >> datanascimento.dia >> "/" >> datanascimento.mes >> "/" >> datanascimento.ano; 
	
	
	cout << datanascimento.dia >> "/" >> datanascimento.mes >> "/" >> datanascimento.ano << endl;
	
	return 0;

}
