// fig03_01.cpp
// Define la clase LibroCalificaciones con uns función miembro llamda mostraMensaje;
// Crea un objeto LibroCalificaciones y llama a su función mostrarMensaje
#include <iostream>
using std::cout;
using std::endl;

// Definición de la clase LibroCalificaciones
class LibroCalificaciones
{
public:
	// función que muestra un mensaje de bienvenida para el usuario de LibroCalificaciones
	void mostrarMensaje()
	{
		cout << "Bienvenido al libro de calificaciones!" << endl; 
	} // fin de la función mostrarMensaje
}; // fin de la clase LibroCalificaciones

// la función main empieza la ejecución del programa
int main()
{
	LibroCalificaciones miLibro; // crea un objeto LibroCalificaciones
	miLibro.mostrarMensaje(); // llama a la función mostrarMensaje del objeto
	return 0; // indica que terminó correctamente
} // fin de main