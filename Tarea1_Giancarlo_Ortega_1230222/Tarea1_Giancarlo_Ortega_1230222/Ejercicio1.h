#pragma once


class Ejercicio1
{
    int multiWhile(int multiplicador, int numero, int contmulti, int suma) {
        while (multiplicador != 0) {
            suma = suma + numero;

            multiplicador--;
            return suma;

        }
    }

};



