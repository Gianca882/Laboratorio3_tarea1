// Tarea1_Giancarlo_Ortega_1230222.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//


#include <iostream>
using namespace std;
#include "Ejercicio1.h"
#include <string>
#include <fstream>


int ConversionNum(int numero3, int baseDestino, int baseOriginal) {

    int multi = 1, result = 0, residuo;
    while (numero3 > 0) {
        result = result + numero3 % 10 * multi;
        multi = multi * baseOriginal;
        numero3 = numero3 / 10;
        return result;      
    }
    if (result > 0) {
        result = numero3 % baseDestino;
        residuo = numero3 / baseDestino;
        return result + residuo;
    }

}

void ConversionNum() {

    int baseOrigen, baseDestino, numero3;

    cin >> baseDestino;
    std::cout << "Ingrese numero" << endl;
    cin >> numero3;
    std::cout << "Eliga la base que desee usar: 1.Binario(Base 2). 2.Base hexadecimal(base 16). 3.Base decimal(base 10). 4.Base octal(base 8)" << endl;
    cin >> baseOrigen;

    std::cout << "El resultado en base " << baseDestino << " es igual a: " << ConversionNum(numero3, baseDestino, baseOrigen) << endl;
}
bool palindromas(string c) {


    return false;
}


void archivo() {
    fstream archivo;
    archivo.open("archivoPalindromas.txt", ios::in);
    string linea;
    char delimitador = ',';

    while (archivo.good())  //
    {
        getline(archivo, linea, delimitador);

    }
    archivo.close();
}

int main()
{
    int opcion;
    int suma = 0;
    int multiplicador, numero;


    std::cout << "Bienvenido al programa, eliga la opcion que desea. Presione 1 = Ejemplo 1. 2 = Ejemplo 2. 3 = Ejemplo 3. 4 = Salir. " << endl;
    cin >> opcion;

    if (opcion < 0 || opcion >4) {
        std::cout << "Ingrese un valor valido   " << endl;
        main();
    }
    else {

        switch (opcion) {
        case 1:
            std::cout << "Ejercicio 1 ";

           
            std::cout << "Ingrese un numero " << endl;
            cin >> numero;
            std::cout << "Ingrese el numero por el que quiere multiplicar" << endl;
            cin >> multiplicador;

            while (multiplicador != 0) {
                suma = numero + suma;

                multiplicador--;

            } 
            cout << suma;    
            std::cout << "  " << endl;

            main();

            break;
        case 2:
            std::cout << "Ejercicio 2   ";


            archivo();

            break;
        case 3:
            std::cout << "Ejercicio 3   ";

            ConversionNum();



            break;
        case 4:
            std::cout << "Sesion cerrada correctamente.   ";
            exit(0);
            break;
        }
    }
}


