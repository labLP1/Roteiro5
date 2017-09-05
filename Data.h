#ifndef DATA_H
#define DATA_H

//#include <iostream>

//using namespace std;



class Data{
	private:
	   int dia;
	   int mes;
	   int ano;
	public:	
	   int getDia();
	   int getMes();
	   int getAno();
		
           void setDia( int dia);
	   void setMes( int mes);
           void setAno( int ano);

           Data(int d, int m, int a);
	   void avancarDia();
}

#endif
