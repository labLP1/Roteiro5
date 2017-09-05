#include "Data.h"
#include <iostream>

Data::Data(int d, int m, int a){
	dia = d;
	mes = m;
	ano = a;

	
	if(dia < 1 || dia > 31 && mes < 1 || mes > 12){
		cout << "Informe uma Data correta!" << endl;
	}else{
	   if(dia > 30){
		if(mes % 2 == 0){
		    if(mes != 8 && mes != 10 && mes != 12){ 
		        cout << "Data Invalido" << endl;	
		    }
	        }		
	   }	
	   if(mes == 2){ 	
		if(dia > 29){ 
                     cout << "Data Invalido" << endl;
                }
	   
	   }

	
}



Data::avancarDia(){

      if(dia > 30){
	if(mes % 2 == 0){
	  if(mes != 8 && mes != 10 && mes != 12){ 
		dia = 1;		
		mes++;
	      if
	}else{
	   dia =1;
	   mes++

}

Data::getDia(){ return this.dia; }
	
Data::getMes(){ return this.mes; }	
	 
Data::getAno(){  return this.ano; }


Data::setDia(int x){ this.dia = x; }

Data::setMes(int y){ this.mes = x; }

Data::setDia(int z){ this.ano = z; }


