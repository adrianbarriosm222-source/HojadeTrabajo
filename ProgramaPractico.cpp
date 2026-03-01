#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    string nombreCompleto;
    double precioProducto;
    int cantidad;
    double subtotal, iva, total;

    cout << "Ingrese el nombre completo del cliente: ";
    getline(cin, nombreCompleto);

    cout << "Ingrese el precio del producto: ";
    cin >> precioProducto;

    cout << "Ingrese la cantidad comprada: ";
    cin >> cantidad;

    subtotal = precioProducto * cantidad;
    iva = subtotal * 0.12;
    total = subtotal + iva;

    cout << fixed << setprecision(2);

    cout << "\n----- FACTURA -----" << endl;
    cout << "Cliente: " << nombreCompleto << endl;
    cout << "Subtotal: Q" << subtotal << endl;
    cout << "IVA (12%): Q" << iva << endl;
    cout << "Total a pagar: Q" << total << endl;

    return 0;
}