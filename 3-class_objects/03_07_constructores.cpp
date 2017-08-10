// fig03_07.cpp
// Creación de instancias de varios objetos de la clase LibroCalificaciones y uso
// del constructor de LibroCalificaciones para especificar el nombre del curso
// cuando se crea cada objeto LibroCalificaciones.
#include <iostream>
using std::cout;
using std::endl;

#include <string> // el programa usa la clase string stándar de C++
using std::string;

//definición de la clase LibroCalificaciones
class LibroCalificaciones
{
public:
	//el constructor inicializa a nombreCurso con la cadena que se suministra como argumento
	LibroCalificaciones( string nombre )
	{
		establecerNombreCurso( nombre ); // llama a la función establecer para inicializar nombreCurso
	} // fin del constructor de LibroCalificaciones

	// función para obtener el nombre del curso
	void establecerNombreCurso( string nombre )
	{
		nombreCurso = nombre; // almacena el nombre del curso en el objeto
	} // fin de la función establecerNombreCurso

	// función para obtener el nombre del curso
	string obtenerNombreCurso()
	{
		return nombreCurso; // devuelve el nombreCurso del objeto
	} // fin de la función obtenerNombreCurso

	// muestra un mensaje de bienvenida para el usuario de LibroCalificaciones
	void mostrarMensaje()
	{
		// llama a obtenerNombreCurso para obtener el nombreCurso
		cout << "Bienvenido al libro de calificaciones para\n" << obtenerNombreCurso()
			<< "!" << endl;
	} // fin de la función mostrarMensaje
private:
	string nombreCurso; // nombre del curso para este LibroCalificaciones
} // fin de la clase LibroCalificaciones

// la función main empieza la ejecución del programa
int main()
{
	// crea dos objetos LibroCalificaciones
	LibroCalificaciones libroCalificaciones1("CS101 Introducción a la programación en C++");
	LibroCalificaciones libroCalificaciones2("CS102 Estructuras de datos e C++");

	// muestra el valor inicial de nombreCurso para cada LibroCalificaciones
	cout << "libroCalificaciones1 se creo para el curso: " << libroCalificaciones1.obtenerNombreCurso()
		<< "\nlibroCalificaciones2 se creo para el curso: " << libroCalificaciones2.obtenerNombreCurso()
		<< endl;
	return 0; // indica que terminó corretamente
}