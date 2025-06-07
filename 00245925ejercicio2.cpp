#include <iostream> 
#include <math.h>
using namespace std; 
int opciones; int num1; int num2; 


int main(){
cout << "Bienvenido a su calculadora de confianza" << endl; 
cout << "Porfavor, eliga una de las siguientes opciones:\n 1.Suma\n 2.Resta\n 3.Multiplicacion\n 4.Division" << endl;
cin >> opciones; 

switch(opciones){
case 1: 
cout << "Ingrese el primer numero que desea sumar." << endl; 
cin >> num1;
cout << "ingrese el segundo numero que desea sumar." << endl; 
cin >> num2; 
cout << num1 << "+" << num2 << "=" << num1 + num2 << endl; 
break; 

case 2: 
cout << "Ingrese el primer numero que desea restar." << endl; 
cin >> num1; 
cout << "ingrese el segundo numero que desea restar." << endl; 
cin >> num2; 
cout << num1 << "-" << num2 << "=" << num1 - num2 << endl; 
break; 

case 3:
cout << "Ingrese el primer numero que desea multiplicar." << endl; 
cin >> num1; 
cout << "ingrese el segundo numero que desea multiplicar." << endl; 
cin >> num2; 
cout << num1 << "x" << num2 << "=" << num1 * num2 << endl; 
break; 

case 4: 
cout << "Ingrese el primer numero que desea dividir." << endl; 
cin >> num1; 
cout << "ingrese el segundo numero que desea dividir." << endl; 
cin >> num2; 
cout << num1 << "/" << num2 << "=" << num1 / num2 << endl; 
break; 
default: 
cout << "No existe proceso para esta opcion." << endl; 


}




return 0; 

}
