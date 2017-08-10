// fig03_03.cpp
// Define la clase LibroCalificaciones con una función miembro que recibe un parámetro;
// Crea un objeti LibroCalificaciones y llama a su función mostrarMensaje
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;
using std::getline;

// definición de la clase LibroCalificaciones
class LibroCalificaciones
{
public:
	// función que muestra un mensaje de bienvenida para el usuario de LibroCalificaciones
	void mostrarMensaje(string nombreCurso)
	{
		cout << "Bienvenido al libro de calificaciones para \n" << nombreCurso << "!" 
		<< endl;
	} // fin de la función mostrarMensaje
}; // fin de la clase LibroCalificaciones

// la función main empieza la ejecución del programa
int main()
{
	string nombreCurso; // cadena de caracteres que almacena el nombre del curso
	LibroCalificaciones miLibro; // crea un objeto LibroClificaciones llamado miLibro

	// pide y recibe el nombre del curso como entrada
	cout << "Escriba el nombre del curso: " << endl;
	getline(cin, nombreCurso); // lee el nombre de un curso con espacios en blanco
	cout << endl; // imprime una línea en blanco

	// llama a la función mostrarMensaje de miLibro
	// y pasa nombreDelCurso como argumento
	miLibro.mostrarMensaje(nombreDelCurso);
	return 0; // indica que terminó correctamente
} // fin de main