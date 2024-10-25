//p3.cpp Solucion Cadena de caracteres y punteros 
#include <iostream>
using namespace std;
const int ALFABETO_TAM = 26;  // Tamaño del alfabeto
const char PRIMERA_LETRA = 'a'; // Primera letra del alfabeto en minúscula
const int MAX_TEXTO = 100;      // Tamaño máximo para el texto
// Función para codificar y decodificar el texto
void procesarTexto(char* texto, int desplazamiento, char* resultado, bool codificar) {
    int i = 0;
    int offset;
    while (*(texto + i) != '\0') {
        if (*(texto + i) == ' ') {
            *(resultado + i) = ' '; // Mantener espacios
        }
        else {
            // Cifrado o descifrado César
            offset = codificar ? desplazamiento : -desplazamiento;
            *(resultado + i) = (*(texto + i) - PRIMERA_LETRA + offset) % ALFABETO_TAM + PRIMERA_LETRA;
        }
        i++;
    }
    *(resultado + i) = '\0'; // Finalizar la cadena resultante
}
int main() {
    char texto[MAX_TEXTO];    // Declarar como arreglo de caracteres
    char resultado[MAX_TEXTO]; // Declarar como arreglo de caracteres
    int desplazamiento;
    // Solicitar texto a codificar
    cout << "Ingrese el texto en minusculas (maximo 100 caracteres): ";
    cin.getline(texto, MAX_TEXTO);
    // Solicitar desplazamiento
    cout << "Ingrese el numero de desplazamiento: ";
    cin >> desplazamiento;
    // Codificar el texto
    procesarTexto(texto, desplazamiento, resultado, true);
    cout << "Texto codificado: " << resultado << endl;
    // Solicitar texto a decodificar
    cout << "Ingrese el texto codificado para decodificar (maximo 100 caracteres): ";
    cin.ignore(); // Ignorar el salto de línea
    cin.getline(texto, MAX_TEXTO);
    // Solicitar desplazamiento para decodificar
    cout << "Ingrese el numero de desplazamiento para decodificar: ";
    cin >> desplazamiento;
    // Decodificar el texto
    procesarTexto(texto, desplazamiento, resultado, false);
    cout << "Texto decodificado: " << resultado << endl;
    return 0;
}
