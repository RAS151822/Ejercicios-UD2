#include <iostream>
using namespace std;

int main(){
	int a=0, b=0, r=0;
	
	cout <<"Hola! Esto es un programa para calcular el M.C.D de dos números.. es decir, ¡¡EL MÁXIMO COMÚN DIVISOR!!!" << endl;
	do {
	cout << "Introduce el primer número " << endl;
	cin >> a;
	cout << "Introduce el segundo número " << endl;
	cin >> b;
	}while (b>a);
	
	r = a % b;
	
	for (int i=b; i<a; i++){
		if ( a % i == 0.0){
			cout << " El M.C.D es: " << i << endl;
		}
		if ( i % r == 0.0){
			cout << " El M.C.D es: " << i << endl;
		}
	}
