// fig03_05.cpp
// Define la clase LibroCalificaciones que contiene un miembro de datos
// nombreCurso y funciones miembro para establecer y obtener su valor;
// Crea y manipula un objeto LibroCalificaciones.
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string> // el programa usa la clase string estándar de C++
using std::string;
using std::getline;

// definición de la clase LibroCalificaciones
class LibroCalificaciones
{
public:
	// función que establece el nombre del curso
	void establecerNombreCurso( string nombre )
	{
		nombreCurso = nombre; // almacena el nombre del curso en el objeto
	} // fin de la función establecerNombreCurso

	//función que obtiene el nombre del curso
	string obtenerNombreCurso()
	{
		return nombreCurso; // devuelve el nombreCurso del objeto
	} // fin de la función obtenerNombreCurso 

	//función que muestra un mensaje de bienvenida
	void mostrarMensaje()
	{
		//esta instrucción llama a obtenerNombreCurso para obtener el
		// nombre del curso que representa este LibroCalificaciones
		cout << "Bienvenido al libro de calificaiones para \n" << obtenerNombreCurso() << "!"
			<< endl;
	} // fin de la función mostrarMensaje
private:
	string nombreCurso; // nombre del curso para este LibroCalificaciones
}; // fin de la clase LibroCalificaciones

// la función main empieza la ejecución del programa
int main(){
	string nombreDelCurso; // cadena de carecteres para almacenar el nombre del curso
	LibroCalificaciones miLibro; // crea un objeto LibroCalificaciones llamado miLibro

	// muestra el valor inicial de nombreCurso
	cout << "El nombre inicial del curso es: " << miLibro.obtenerNombreCurso()
		<< endl;

	// pide, recibe y establece el nombre del curso
		cout << "\nEscriba el nombre del curso: " << endl;
		getline( cin, nombreDelCurso); // lee el nombre de un curso con espacios en blanco
		miLibro.establecerNombreCurso( nombreDelCurso ); // establece el nombre del cursp

		cout << endl; // imprime una línea en blanco
		miLibro.mostrarMensaje(); // muestra un mensaje con ek nuevo nombre del curso
		return 0; // indica que terminó correctamente
} // fin de main