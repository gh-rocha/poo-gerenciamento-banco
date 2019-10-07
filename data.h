#include <iostream>
using namespace std;

class data {
	private: 
		int dia, mes, ano;
		int limDia = 31;
		bool bissexto = false;
	
	public:
		//Construtor e Destrutor
		data(int=0, int=0, int=0);
		~data();
		
		//metodos SET
		void setData(int, int, int);
		void setDia(int);
		void setMes(int);
		void setAno(int);
		
		//metodos GET
		int getDia() const {
            return dia;
        }
		int getMes() const {
            return mes;
        }
		int getAno() const {
            return ano;
        }
		
		//impressao de resultados
		
		void printData() const;
};


void data::setDia(int d) {
	dia = (d>0 && d<=limDia) ? d:1;
}

void data::setMes(int m) {
	mes = (m>0 && m<=12) ? m:1;
	
	if(m==4 || m==6 || m==9 || m==11)
		limDia = 30;
	else if (m==2)
		if (bissexto)
			limDia=29;
		else
			limDia=28;
			
	if (dia > limDia)
		dia = limDia;
}

void data::setAno(int a) {
	ano = (a>1900 && a<=2100) ? a:0;
	if (a%100!=0 && a%4==0)
		bissexto = true;
}

void data::printData() const {
	cout << getDia()<<"/"<<getMes()<<"/"<<getAno()<<endl; 
}

data::data(int d, int m, int a){
	setDia(d);
	setMes(m);
	setAno(a);
}

data::~data(){
}