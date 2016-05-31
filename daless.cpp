#include <string>
#include <iostream>
using namespace std;
int main () {
	int x= 0;
	string resp;
	while(x<=5){
		x= x+1;
		cout <<"ingrese el nombre del estudiante" <<x<<endl;
		string nombre;
		cin >> nombre;
		
		cout <<"ingrese el apellido del estudiante" <<x<<endl;
		string apellido;
		cin >> apellido;
		
		cout <<"notas:" <<endl;
		
		cout <<"1º nota:" <<endl;
		int n1;
		cin >> n1;
		
		cout <<"2º nota:" <<endl;
		int n2;
		cin >> n2;
		
		cout <<"3º nota:" <<endl;
		int n3;
		cin >> n3;
		
		cout <<"4º nota:" <<endl;
		int n4;
		cin >> n4;
		
		cout <<"5º nota:" <<endl;
		int n5;
		cin >> n5;
		
		cout <<"6º nota:" <<endl;
		int n6;
		cin >> n6;
		
		double p1, p2, p3, p4, p5, p6, nf;
		
		p1= n1*10/100;
		p2= n2*20/100;
		p3= n3*15/100,
		p4= n4*15/100;
		p5= n5*20/100;
		p6= n6*20/100;
		nf= p1+p2+p3+p4+p5+p6;
		
		cout <<"nota final del estudiante:" << nf <<endl;
		
		while(resp!="S" and resp!="N"){
		
		cout <<"¿Quiere continuar? S/N" <<endl;
		cin >> resp;
	}
		}
	}
