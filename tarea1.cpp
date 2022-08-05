// crear un programa que lea 2 numeros en teclado y realice operaciones algebraicas con ellos. 
// El programa debe mostrar el resultado de las operaciones.

#include <iostream>

int main(){
    int num1, num2, eleccion, suma, resta, multiplicacion, division;
    std::cout << "Ingrese el primer numero: ";
    std::cin >> num1;
    std::cout << "Ingrese el segundo numero: ";
    std::cin >> num2;
    std::cout << "Ingrese el numero de la operacion que desea realizar: ";
    std::cout << "1. Suma" <<"\n" << "2. Resta" <<"\n" << "3. Multiplicacion" <<"\n" << "4. Division" <<"\n";
    std::cin >> eleccion;

    switch(eleccion){
        case 1:
            suma = num1 + num2;
            std::cout << "La suma es: " << suma << "\n";
            break;
        case 2:
            resta = num1 - num2;
            std::cout << "La resta es: " << resta << "\n";
            break;
        case 3:
            multiplicacion = num1 * num2;
            std::cout << "La multiplicacion es: " << multiplicacion << "\n";
            break;
        case 4:
            division = num1 / num2;
            std::cout << "La division es: " << division << "\n";
            break;
        default:
            std::cout << "Opcion no valida" << "\n";
            break;
    }

    return 0;
}
