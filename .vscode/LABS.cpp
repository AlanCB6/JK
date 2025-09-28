#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int suma(int a, int b) {
    return a + b;
}

int resta(int a, int b) {
    return a - b;
}

int multiplicacion(int a, int b) {
    return a * b;
}

float division(int a, int b) {
    if (b == 0) {
        return 0;
    }
    return (float)a / b;
}

string invertirFrase(string frase) {
    reverse(frase.begin(), frase.end());
    return frase;
}

int main() {
    int num1, num2;
    int opcion;
    string frase;

    cout << "Ingresa el primer numero: ";
    cin >> num1;

    cout << "Ingresa el segundo numero: ";
    cin >> num2;

    cout << "\nQue operacion deseas realizar?\n";
    cout << "1. Suma\n";
    cout << "2. Resta\n";
    cout << "3. Multiplicacion\n";
    cout << "4. Division\n";
    cout << "Opcion (1-4): ";
    cin >> opcion;

    switch(opcion) {
        case 1:
            cout << "\nResultado de la suma: " << suma(num1, num2) << endl;
            break;
        case 2:
            cout << "\nResultado de la resta: " << resta(num1, num2) << endl;
            break;
        case 3:
            cout << "\nResultado de la multiplicacion: " << multiplicacion(num1, num2) << endl;
            break;
        case 4:
            if (num2 != 0) {
                cout << "\nResultado de la division: " << division(num1, num2) << endl;
            }
            break;
        default:
            cout << "\nOpcion invalida." << endl;
    }

    cin.ignore();
    cout << "\nEscribe una frase para invertirla: ";
    getline(cin, frase);

    cout << "Frase invertida: " << invertirFrase(frase) << endl;

    return 0;
}
