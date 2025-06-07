#include <iostream> 
using namespace std; 
int velocidad; 

int main(){

    cout << "Porfavor, ingrese la velocidad a la que conduce en Km/h." << endl; 
    cin >> velocidad; 

    if(velocidad >= 80){
cout << "Se encuentra en exceso de velocidad, porfavor, detenga el vehiculo." << endl; 
    }else if(velocidad >= 30 && velocidad <= 79){
        cout << "En estos momentos se encuentra dentro del limite de velocidad permitido." << endl; 
    }else if(velocidad >= 0 && velocidad <= 29){
cout << "Va a una velocidad por debajo de lo establecido, se le recomienda que suba un poco la velocidad." << endl; 
    }else{
        cout << "No hay ninguna clasificacion disponible." << endl; 
    }



return 0; 

}