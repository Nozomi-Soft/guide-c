// fig02_13.cpp
// Comparación de enteros mediante instrucciones if, operadores
// relacionales y operadores de igualdad.
#include <iostream> // permita al programa realizar operaciones de entrada y salida

using std::cout;	// el programa usa cout
using std::cin;		// el programa usa cin
using std::endl; 	// el programa usa endl

// la función main empieza la ejecución del programa
int main()
{
	int numero1;	// primer entero a comparar
	int numero2;	// segundo entero a comparar

	cout << "Escriba dos enteros a comparar: "; // pide los datos al usuario
	cin >> numero1 >> numero2; // lee dos enteros del usuario

	if( numero1 == numero2 )
		cout << numero1 << " == " << numero2 << endl;

	if( numero1 != numero2 )
		cout << numero1 << " != " << numero2 << endl;

	if( numero1 < numero2 )
		cout << numero1 << " < " << numero2 << endl;

	if( numero1 > numero2 )
		cout << numero1 << " > " << numero2 << endl;

	if( numero1 <= numero2 )
		cout << numero1 << " >= " << numero2 << endl;

	if( numero1 >= numero2 )
		cout << numero1 << " >= " << numero2 << endl;

	return 0; // indica que el programa terminó correctamente

} // fin de la cunción main