#include "Data.h"
#include <iostream>

Data::Data(int d, int m, int a){
	dia = d;
	mes = m;
	ano = a;
	
	if(dia < 1 || dia > 31 && mes < 1 || mes > 12){
		cout << "Informe uma Data correta!" << endl;
	}
	if(dia > 30){
		if(mes % 2 == 0)
		{
		     cout << "O mes informado contem 30 dias" << endl;
		}
        }
}

	
	
	 
