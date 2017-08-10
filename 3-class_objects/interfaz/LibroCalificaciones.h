// LibroCalificaciones.h
// definición de la clase LibroCalificaciones. Este archivo presenta la interfaz
// public de LibroCalificacioes sin revelar las implementaciones de sus funciones
// miembro, que están definidas en LibroCalificaciones.cpp
#include <string> // la clase LibroCalificaciones utiliza la clase string estándar de C++
using std::string;

// definición de la clase LibroCalificaciones
class LibroCalificaciones
{
public:
	LibroCalificaciones( string ); // constructor que inicializa anombreCurso
	void establecerNombreCurso( string ); // función que establece el nombre del curso
	string obtenerNombreCurso(); // función que obtiene el nombre del curso
	void mostrarMEnsaje(); // función que muestra un mensaje de bienvenida
private:
	string nombreCurso; // nombre del curso para este LibroCalificaciones
}; // fin de la clase LibroCalificaciones