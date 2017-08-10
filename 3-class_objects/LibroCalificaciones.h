// LibroCalificaciones.h
// Definición de la clase LibroCalificaciones en un archivo separado de main.
#include <iostream>
using std::cout;
using std::endl;

#include <string> // la clase LibroCalificaciones utiliza la clase string estándar de C++
using std::string;

// definición de la clase LibroCalificaciones
class LibroCalificiones
{
public:
	// el constructor inicializa nombreCurso con la cadena que se suministra como argumento
	LibroCalificaciones( string nombre )
	{
		establecerNombreCurso( nombre ); // llama a la función establecer para inicializar nombreCurso
	} // fin del constructor de LibroCalificaciones

	// función para establecer el nombre del curso
	void establecerNombreCurso( string nombre )
	{
		nombreCurso = nombre; // almacena el nombre del curso en el objeto
	} // fin de la función establecerNombreCurso

	//función para obtener el nombre del curso
	string obtenerNombreCurso()
	{
		return nombreCurso; // devuelve el nombreCurso del objeto
	} // fin de la función obtenerNombreCurso

	// muestra un mensaje de bienvenida al usuario de LibroCalificaciones
	void mostrarMensaje()
	{
		// llama a ontenerNombreCurso para obtener el nombreCurso
		cout << "Bienvenido al libro de LibroCalificaciones para\n" << obtenerNombreCurso()
			<< "!" << endl;
	} // fin de la función mostrarMensaje
private:
	string nombreCurso; // nombre del curso para este LibroCalificaciones
}; // fin de la clase LibroCalificaciones