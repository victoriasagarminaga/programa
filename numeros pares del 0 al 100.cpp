#include <iostream>
#include <vector>

using namespace std;

int main() {
    int numEmpleados;
    const int dias = 6;
    const double tarifaHoraria = 20.0; // Tarifa horaria fija

    cout << "Ingrese la cantidad de empleados: ";
    cin >> numEmpleados;

    vector<vector<int>> horasTrabajadas(numEmpleados, vector<int>(dias));
    vector<int> totalHoras(numEmpleados, 0);
    vector<double> sueldoTotal(numEmpleados, 0.0);

    // Registrar las horas trabajadas por cada empleado durante seis días
    for (int i = 0; i < numEmpleados; ++i) {
        cout << "Ingrese las horas trabajadas por el empleado " << i + 1 << " durante seis días:" << endl;
        for (int j = 0; j < dias; ++j) {
            cout << "Día " << j + 1 << ": ";
            cin >> horasTrabajadas[i][j];
            totalHoras[i] += horasTrabajadas[i][j];
        }
        sueldoTotal[i] = totalHoras[i] * tarifaHoraria;
    }

    // Mostrar el total de horas y el sueldo total de cada empleado
    for (int i = 0; i < numEmpleados; ++i) {
        cout << "Empleado " << i + 1 << ": Total horas trabajadas = " << totalHoras[i] << ", Sueldo total = $" << sueldoTotal[i] << endl;
    }

    return 0;
}
