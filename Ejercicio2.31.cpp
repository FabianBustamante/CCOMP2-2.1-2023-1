#include <iostream>
using namespace std;

int main() {
    
    double totalmillas, costoporgalon, promediomillasporgalon, parking, peaje;

    
    cout << "Ingresa el total de millas conducidas por dia: ";
    cin >> totalmillas;

    cout << "Ingresa el costo por galon de gasolina: ";
    cin >> costoporgalon;

    cout << "Ingresa el promedio de millas por galon: ";
    cin >> promediomillasporgalon;

    cout << "Ingresa las tarifas de estacionamiento por día: ";
    cin >> parking;

    cout << "Ingresa el costo de peaje por dia: ";
    cin >> peaje;

    double costoPorDia = (totalmillas / promediomillasporgalon) * costoporgalon + parking + peaje;

    cout << "Tu costo diario conduciendo es $" << costoPorDia << endl;

    return 0;
}