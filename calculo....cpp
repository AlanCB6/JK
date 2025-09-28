#include <iostream>
using namespace std;

void calcularFactorial() {
    int repetir;
    do {
        int numero, number = 1;
        cout << "Ingrese un numero entero positivo: ";
        cin >> numero;

        if (numero < 0) {
            cout << "El factorial no está definido para numeros negativos.\n";
        } else {
            for (int i = 1; i <= numero; i++) {
                number *= i;
            }
            cout << numero << "! = " << number << endl;
        }

        cout << "\n¿Desea calcular otro factorial?\n";
        cout << "1. Si\n";
        cout << "2. Regresar al menu\n";
        cout << "Seleccione una opcion: ";
        cin >> repetir;

    } while (repetir == 1);
}

void calcularSubsidio() {
    int cantidad_hijos;
    double subsidio = 0.0, total_extra = 0.0;

    cout << "Ingrese cantidad de hijos: ";
    cin >> cantidad_hijos;

    if (cantidad_hijos == 3) {
        subsidio = 300.0;
    } else if (cantidad_hijos >= 4 && cantidad_hijos <= 5) {
        subsidio = 350.0;
    } else if (cantidad_hijos > 5) {
        subsidio = 400.0;
    }

    if (subsidio > 0) {
        for (int i = 1; i <= cantidad_hijos; i++) {
            int edad;
            cout << "Edad del hijo " << i << ": ";
            cin >> edad;

            if (edad >= 7 && edad <= 18) {
                total_extra += subsidio * 0.06;
            }
        }

        double subsidio_total = subsidio + total_extra;
        cout << "El subsidio total es: Q" << subsidio_total << endl;
    } else {
        cout << "No aplica subsidio para menos de 3 hijos.\n";
    }
}

void mostrarMenu() {
    cout << "\n--- MENU PRINCIPAL ---\n";
    cout << "1. Factorial de un numero\n";
    cout << "2. Determinar subsidio de familia\n";
    cout << "3. Salir\n";
    cout << "Seleccione una opcion: ";
}

int main() {
    int opcion;

    do {
        mostrarMenu();
        cin >> opcion;

        if (opcion == 1) {
            calcularFactorial();
        } else if (opcion == 2) {
            calcularSubsidio();
        } else if (opcion == 3) {
            cout << "Saliendo del programa..." << endl;
        } else {
            cout << "Opción invalida. Intente de nuevo." << endl;
        }

    } while (opcion != 3);

    return 0;
}
