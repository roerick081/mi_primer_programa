#include <iostream>
#include <cmath> // Para operaciones como raiz cuadrada y potencia

using namespace std;

int main() {
    int opcion;
    double num1, num2, resultado;

    do {
        cout << "\nCalculadora : \n";
        cout << "1. Sumar\n";
        cout << "2. Restar\n";
        cout << "3. Multiplicar\n";
        cout << "4. Dividir\n";
        cout << "5. Raiz cuadrada\n";
        cout << "6. Potencia\n";
        cout << "7. Valor absoluto\n";
        cout << "8. Salir\n";
        cout << "Elija una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Ingrese dos datos para sumar : ";
                cin >> num1 >> num2;
                resultado = num1 + num2;
                cout << "Resultado: " << resultado << endl;
                break;

            case 2:
                cout << "Ingrese dos datos para restar: ";
                cin >> num1 >> num2;
                resultado = num1 - num2;
                cout << "Resultado: " << resultado << endl;
                break;

            case 3:
                cout << "Ingrese dos datos para multiplicar: ";
                cin >> num1 >> num2;
                resultado = num1 * num2;
                cout << "Resultado: " << resultado << endl;
                break;

            case 4:
                cout << "Ingrese dos datos para dividir: ";
                cin >> num1 >> num2;
                if (num2 != 0) {
                    resultado = num1 / num2;
                    cout << "Resultado: " << resultado << endl;
                } else {
                    cout << "Esto no se puede dividir" << endl;
                }
                break;

            case 5:
                cout << "Ingrese un dato para calcular la raiz cuadrada: ";
                cin >> num1;
                if (num1 >= 0) {
                    resultado = sqrt(num1);
                    cout << "Resultado: " << resultado << endl;
                } else {
                    cout << " No se puede calcular la raiz cuadrada de un numero negativo." << endl;
                }
                break;

            case 6:
                cout << "Ingrese la base y el exponente: ";
                cin >> num1 >> num2;
                resultado = pow(num1, num2);
                cout << "Resultado: " << resultado << endl;
                break;

            case 7:
                cout << "Ingrese un dato para calcular su valor absoluto: ";
                cin >> num1;
                resultado = fabs(num1);
                cout << "Resultado: " << resultado << endl;
                break;

            case 8:
                cout << "Saliendo de la calculadora .... Nos vemos pronto" << endl;
                break;

            default:
                cout << "Opción incorrecta ingrese un numero valido ." << endl;
                break;
        }
    } while (opcion != 8);

    return 0;
}

