#include <iostream> // Para entrada y salida (cout, cin)
#include <string>   // Para usar strings (nombre del usuario)
#include <iomanip>  // Para formatear el dinero (dos decimales)
#include <limits>   // Para limpiar el buffer de entrada en caso de error

using namespace std; // Directiva para usar el espacio de nombres estándar

// --- 1. Prototipos de las Funciones ---
// Esto le dice al programa qué funciones existen antes de usarlas.
// Es como el índice de un libro.
void mostrarMenu();
void agregarDinero(double &saldo); // El & significa que la función puede MODIFICAR el saldo
void retirarDinero(double &saldo);
void registrarMovimiento(const string &tipo, double cantidad, double saldoActual);

// --- 2. Función Principal (El Cerebro del Programa) ---
int main() {
    // --- Variables Principales ---
    string nombreUsuario;
    double saldo = 100.00; // Saldo inicial de ejemplo
    int opcion;

    // --- Bienvenida (se ejecuta una sola vez) ---
    cout << "--- BIENVENIDO A TU BILLETERA DIGITAL ---" << endl;
    cout << "Por favor, ingresa tu nombre: ";
    getline(cin, nombreUsuario);

    // --- Bucle Principal del Menú ---
    do {
        cout << "\n----------------------------------------" << endl;
        cout << "Usuario: " << nombreUsuario << " | Saldo Actual: $" 
             << fixed << setprecision(2) << saldo << endl;
        
        mostrarMenu();
        cout << "Elige una opcion: ";
        
        // Bucle para validar que el usuario ingrese un número
        while (!(cin >> opcion)) {
            cout << "Error: Por favor, ingresa solo un numero. Intenta de nuevo: ";
            cin.clear(); // Limpia el error de la entrada
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Descarta la entrada incorrecta
        }

        // --- Selector de Acciones ---
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

// --- 3. Implementación de las Funciones (Los "Cascarones" Vacíos) ---
// Aquí es donde cada miembro del equipo trabajará en su rama.

void mostrarMenu() {
    cout << "\n1. Agregar dinero" << endl;
    cout << "2. Retirar dinero" << endl;
    cout << "3. Salir" << endl;
}

/**
 * TAREA PARA EL ENCARGADO DE LA LÓGICA
 * Esta función debe pedir al usuario una cantidad, validarla,
 * y sumarla al saldo.
 */
void agregarDinero(double &saldo) {
    cout << "\n--> [FUNCION AGREGAR DINERO EN CONSTRUCCION...]" << endl;
    // Futuro código aquí...
}

/**
 * TAREA PARA EL ENCARGADO DE LA LÓGICA
 * Esta función debe pedir al usuario una cantidad, validar que
 * haya fondos suficientes, y restarla del saldo.
 */
void retirarDinero(double &saldo) {
    cout << "\n--> [FUNCION RETIRAR DINERO EN CONSTRUCCION...]" << endl;
    // Futuro código aquí...
}

/**
 * TAREA PARA EL ENCARGADO DEL HISTORIAL
 * Esta función debe abrir 'historial.txt' y escribir una línea
 * con los detalles de la transacción.
 */
void registrarMovimiento(const string &tipo, double cantidad, double saldoActual) {
    cout << "\n--> [FUNCION REGISTRAR MOVIMIENTO EN CONSTRUCCION...]" << endl;
    // Futuro código aquí...
}