#include <iostream>
#include <string>
#include <iomanip>
#include <limits>

using namespace std;

void mostrarMenu();
void agregarDinero(double &saldo);
void retirarDinero(double &saldo);
void registrarMovimiento(const string &tipo, double cantidad, double saldoActual);

int main() {
    string nombreUsuario;
    double saldo = 100.00;
    int opcion;

    cout << "--- BIENVENIDO A TU BILLETERA DIGITAL ---" << endl;
    cout << "Por favor, ingresa tu nombre: ";
    getline(cin, nombreUsuario);

    do {
        cout << "\n----------------------------------------" << endl;
        cout << "Usuario: " << nombreUsuario << " | Saldo Actual: $" 
             << fixed << setprecision(2) << saldo << endl;
        
        mostrarMenu();
        cout << "Elige una opcion: ";
        
        while (!(cin >> opcion)) {
            cout << "Error: Por favor, ingresa solo un numero. Intenta de nuevo: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        switch (opcion) {
            case 1:
                agregarDinero(saldo);
                break;
            case 2:
                retirarDinero(saldo);
                break;
            case 3:
                cout << "\nGracias por usar la billetera. ¡Hasta pronto!" << endl;
                break;
            default:
                cout << "\nOpcion no valida. Por favor, intenta de nuevo." << endl;
                break;
        }

    } while (opcion != 3);

    return 0;
}

void mostrarMenu() {
    cout << "\n1. Agregar dinero" << endl;
    cout << "2. Retirar dinero" << endl;
    cout << "3. Salir" << endl;
}

void agregarDinero(double &saldo) {
    cout << "\n--> [FUNCION AGREGAR DINERO EN CONSTRUCCION...]" << endl;
}

void retirarDinero(double &saldo) {
    cout << "\n--> [FUNCION RETIRAR DINERO EN CONSTRUCCION...]" << endl;
}

void registrarMovimiento(const string &tipo, double cantidad, double saldoActual) {
    cout << "\n--> [FUNCION REGISTRAR MOVIMIENTO EN CONSTRUCCION...]" << endl;
}