#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct libro {
    string titulo;
    string autor;
    int año;
    string editorial;
    string ISBN;
    int paginas;
    int stock;
};

struct lector {
    string nombre; 
    int DNI;
    string libro_solicitado;
};

void guardarlibro(ofstream& archivo, const libro& libro) {
    archivo << "Título: " << libro.titulo << endl;
    archivo << "Autor: " << libro.autor << endl;
    archivo << "Año de publicación: " << libro.año << endl;
    archivo << "Editorial: " << libro.editorial << endl;
    archivo << "ISBN: " << libro.ISBN << endl;
    archivo << "Cantidad de páginas: " << libro.paginas << endl;
    archivo << "Stock disponible: " << libro.stock << endl;
    archivo << endl;
}

void nuevolibro(ofstream& archivo) {
    libro nuevolibro;

    cout << "Ingrese los datos del libro: " << endl;
    cout << "Titulo: ";
    cin.ignore();
    getline(cin, nuevolibro.titulo);

    cout << "Autor: ";
    getline(cin, nuevolibro.autor);

    cout << "Año de publicacion: ";
    cin >> nuevolibro.año;

    cout << "Editorial: ";
    cin.ignore(); 
    getline(cin, nuevolibro.editorial);

    cout << "ISBN: ";
    cin.ignore();
    getline(cin, nuevolibro.ISBN);

    cout << "Cantidad de paginas: ";
    cin >> nuevolibro.paginas;

    cout << "Stock disponible: ";
    cin >> nuevolibro.stock;

    guardarlibro(archivo, nuevolibro);
}

int main() {
    int opcion;
//Crea el archivo biblioteca.txt
    ofstream libros("biblioteca.txt", ios::app);
    if (libros.fail()) {
        cout << "Error, no se pudo abrir el archivo biblioteca.txt" << endl;
        exit(1);
    }

    cout << "Hola, bienvenido al gestionador de biblioteca. Porfavor, elija que operacion desea realizar escribiendo el numero que le corresponde y presionando ENTER." << endl;

    cout << "1. Agregar libros a la lista enlazada." << endl;
    cout << "2. Ordenar libros." << endl;
    cout << "3. Buscar libros." << endl;
    cout << "4. Solicitar libros." << endl;
    cout << "5. Devolver libros." << endl;
    cin >> opcion;

    switch(opcion) {
        case 1:
            cout << "Ha elegido la opcion 1." << endl;
            nuevolibro(libros);
            cout << "El archivo se ha actualizado correctamente. Fin de la ejecucion.";
            break;
        
        case 2:
            cout << "Ha elegido la opcion 2." << endl;
            //cout << "El archivo se ha actualizado correctamente. Fin de la ejecucion.";
        break;

        case 3:
            cout << "Ha elegido la opcion 3." << endl;
            //cout << "El archivo se ha actualizado correctamente. Fin de la ejecucion.";
        break;

        case 4:
            cout << "Ha elegido la opcion 4." << endl;
            //cout << "El archivo se ha actualizado correctamente. Fin de la ejecucion.";
        break;

        case 5:
            cout << "Ha elegido la opcion 5." << endl;
            //cout << "El archivo se ha actualizado correctamente. Fin de la ejecucion.";
        break;

        default:
            cout << "Porfavor, elija una opcion valida." << endl;
        break;
    }

    return 0;
} 