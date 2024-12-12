/*	Este programa administra libros en una biblioteca.
	
	Escrito por 
        JILBERTO BECERRA CCAHUA 182722
        FRED ANTHONY VIGORIA HUALLA 231820
        WINSTON PUMACALLAHUI SALCEDO 230903
    
    para IFI170AFI, Proyecto final, 13/12//24
	
	Entrada:codigo del libro, nombre, autor, volumen, editorial y condicion
	Salida: segun la opcion que selecciona el usuario
			1. Ver todos los libros
			2. Buscar libros
			3. Insertar libros
			4. Actualizar libros
			5. Eliminar libros 
			6. Prestar libro
			7. Devolver libro
			8. Ordenar libros
			9. Salir
	---------------------------------------------------------------------*/

// importar las librerías a usar   
#include <iostream> // Para el manejo de datos de entrada y salida por consola
#include <string> // Para el manejo de cadenas de texto
#include <iomanip> // Para manipular los datos de entrada y salida

// Configuracion estandar para evitar el uso de std::
using namespace std;

// Prototipos de funciones
void mostrarTodosLosLibros();
void mostrarDetallesLibro(int indice);
void buscarLibro();
void insertarLibro();
void actualizarLibro();
void eliminarLibro();
void prestarLibro();
void devolverLibro();
void ordenarLibro();

// Variables Globales
int n = 5;  // Numero de libros actuales
const int max_libros = 100; // Capacidad maxima de libros

// Definir la estructura de un libro
struct EstructuraLibro {
    int codigo;
    string nombre;
    string autor;
    string ISBN;
    int volumen;
    string editorial;
    string condicion;
    int cantidad;
    string materia;
    int anho;
    int edicion;
};

// Crear base de datos
EstructuraLibro BaseDatos[max_libros];

int main()
{
    // Definir ejemplos

    EstructuraLibro Libro1;
    EstructuraLibro Libro2;
    EstructuraLibro Libro3;
    EstructuraLibro Libro4;
    EstructuraLibro Libro5;

    // Codigos de los ejemplos
    Libro1.codigo = 100001;
    Libro2.codigo = 100002;
    Libro3.codigo = 100003;
    Libro4.codigo = 100004;
    Libro5.codigo = 100005;

    // Nombre de los ejemplos
    Libro1.nombre = "Fisica para Ciencia y Tecnologia";
    Libro2.nombre = "Fisica para Ciencias e Ingenieria";
    Libro3.nombre = "Fisica para la ciencia y la tecnologia";
    Libro4.nombre = "Analisis Matematico I";
    Libro5.nombre = "Analisis matematico II";

    // Autores de los ejemplos
    Libro1.autor = "Paul A. Tipler y Gene Mosca";
    Libro2.autor = "Raymond A. Serway y John W. Jewett";
    Libro3.autor = "Paul A. Tipler y Gene Mosca";
    Libro4.autor = "Eduardo Espinoza Ramos";
    Libro5.autor = "Eduardo Espinoza Ramos";

    // ISBN de los ejemplos
    Libro1.ISBN = "978-842-914-429-1";
    Libro2.ISBN = "978-970-686-822-0";
    Libro3.ISBN = "978-842-914-430-7";
    Libro4.ISBN = "978-612-4160-05-9";
    Libro5.ISBN = "978-9972-33-957-8";

    // Volumen de los ejemplos
    Libro1.volumen = 1;
    Libro2.volumen = 1;
    Libro3.volumen = 2;
    Libro4.volumen = 1;
    Libro5.volumen = 2;

    // Editorial de los ejemplos
    Libro1.editorial = "Editorial Reverte";
    Libro2.editorial = "Cengage Learning";
    Libro3.editorial = "Editorial Reverte";
    Libro4.editorial = "Edukperu";
    Libro5.editorial = "Edukperu";

    // Condicion de los ejemplos
    Libro1.condicion = "No disponible";
    Libro2.condicion = "Disponible";
    Libro3.condicion = "Disponible";
    Libro4.condicion = "No disponible";
    Libro5.condicion = "Disponible";

    // Cantidad de los ejemplos
    Libro1.cantidad = 1;
    Libro2.cantidad = 2;
    Libro3.cantidad = 4;
    Libro4.cantidad = 1;
    Libro5.cantidad = 2;

    // Materia de los ejemplos
    Libro1.materia = "Fisica";
    Libro2.materia = "Fisica";
    Libro3.materia = "Fisica";
    Libro4.materia = "Matematica";
    Libro5.materia = "Matematica";

    // Anho de los ejemplos
    Libro1.anho = 2012;
    Libro2.anho = 2013;
    Libro3.anho = 2012;
    Libro4.anho = 2012;
    Libro5.anho = 2012;

    // Edicion de los ejemplos
    Libro1.edicion = 6;
    Libro2.edicion = 9;
    Libro3.edicion = 6;
    Libro4.edicion = 6;
    Libro5.edicion = 6;

    // Anadimos los libros a la base de datos

    BaseDatos[0] = Libro1;
    BaseDatos[1] = Libro2;
    BaseDatos[2] = Libro3;
    BaseDatos[3] = Libro4;
    BaseDatos[4] = Libro5;

    // Creamos una variable auxiliar para ser la opción
    int opcion = 0;

    // Opcion a seleccionar
    while (opcion != 9) 
	{
        // Mostrar menu principal
        cout << "Menu de opciones :" << endl; 
        cout << "1. Ver todos los libros" << endl; 
        cout << "2. Buscar libros" << endl; 
        cout << "3. Insertar libros" << endl; 
        cout << "4. Actualizar libros" << endl; 
        cout << "5. Eliminar libros" << endl; 
        cout << "6. Prestar libro" << endl;
        cout << "7. Devolver libro" << endl;
        cout << "8. Ordenar libros" << endl;
        cout << "9. Salir" << endl;
        cout << "Por favor, ingrese una opcion :" << endl; 
        cin >> opcion;
        cout <<endl << endl; 
        
        // Analizar la entrada
        switch(opcion) 
		{
            case 1:
            	//Llamar a la funcion mostrarTodosLosLibros
                mostrarTodosLosLibros();
                break;
            case 2:
            	//Llamar a la funcion buscarLibro
                buscarLibro();
                break;
            case 3:
            	//Llamar a la funcion insertarLibro
                insertarLibro();
                break;
            case 4:
            	//Llamar a la funcion actualizarLibro
                actualizarLibro();
                break;
            case 5:
            	//Llamar a la funcion eliminarLibro
                eliminarLibro();
                break;
            case 6:
            	//Llamar a la funcion prestarLibro
                prestarLibro();
                break;
            case 7:
            	//Llamar a la funcion devolverLibro
                devolverLibro();
                break;
            case 8:
            	//Llamar a la funcion ordenarLibro
                ordenarLibro();
                break;
            case 9:
            	//El programa finaliza
                cout << "Saliendo..." << endl;
                break;
            default:
                cout << "Opcion no valida. Por favor, elija una opcion entre 1 y 9." << endl;
                break;
        }
    }

    return 0;
}

/*
    Funcion mostrarTodosLosLibros
    Tarea:	Esta funcion muestra todos los libros con sus respectivas caracteristicas almacenados en la matriz
    Dato de entrada: NADA
    Dato salida: Imprime todos los libros disponibles
    Editado por: Fred Anthony Vigoria Hualla
    Revisado por: Jilberto Becerra Ccahau
    Fecha de la última revisión: 09/12/2024
*/
void mostrarTodosLosLibros() 
{
    // Encabezados para la tabla
    cout << left 
         << setw(8)  << "Codigo" 
         << setw(41) << "Nombre" 
         << setw(30) << "Autor" 
         << setw(20) << "Condicion" 
         << endl;

    // Linea separadora
    cout << string(100, '-') << endl; 
    
    // Imprimir detalles de los libros
    for (int i = 0; i < n; i++) 
    {
        cout << left 
             << setw(8)  << BaseDatos[i].codigo
             << setw(41) << BaseDatos[i].nombre 
             << setw(18) << BaseDatos[i].autor
             << setw(20) << BaseDatos[i].condicion
             << endl;
    }
    // Linea en blanco para separacion al final
    cout << endl; 
}


/*
    Funcion	mostrarDetallesLibro

    Tarea:	Esta funcion muestra los detalles de un determinado libro
    Dato de entrada: indice
    Dato salida: Esta funcion muestra los detalles de un libro
    Editado por: Jilberto Becerra Ccahau
    Revisado por: Fred Anthony Vigoria Hualla
    Fecha de la última revisión: 09/12/2024
*/

void mostrarDetallesLibro(int indice) 
{
    // Encabezados para los campos
    cout << left 
         << setw(8)  << "Codigo" 
         << setw(20) << "ISBN" 
         << setw(41) << "Nombre" 
         << setw(18) << "Autor" 
         << setw(10) << "Volumen" 
         << setw(19) << "Editorial" 
         << setw(10) << "Edicion" 
         << setw(6)  << "Ano" 
         << setw(10) << "Materia" 
         << setw(6)  << "Cant" 
         << setw(15) << "Condicion" 
         << endl;

    cout << string(165, '-') << endl; // Separador visual

    // Detalles del libro
    cout << left 
         << setw(8)  << BaseDatos[indice].codigo 
         << setw(20) << BaseDatos[indice].ISBN
         << setw(41) << BaseDatos[indice].nombre 
         << setw(18) << BaseDatos[indice].autor 
         << setw(10) << BaseDatos[indice].volumen 
         << setw(19) << BaseDatos[indice].editorial 
         << setw(10) << BaseDatos[indice].edicion 
         << setw(6)  << BaseDatos[indice].anho 
         << setw(10) << BaseDatos[indice].materia 
         << setw(6)  << BaseDatos[indice].cantidad 
         << setw(15) << BaseDatos[indice].condicion 
         << endl;

    cout << endl; // Linea en blanco para separacion
}

/*
    Funcion	buscarLibro

    Tarea:	Esta funcion muestra todos los libros con sus respectivas caracteristicas almacenados en la Esta funcion busca libros
    Dato de entrada: NADA
    Dato salida: Busca al libro en función de una caracteristica
    Editado por: Fred Anthony Vigoria Hualla
    Revisado por: Jilberto Becerra Ccahau
    Fecha de la última revisión: 09/12/2024
*/

void buscarLibro() 
{
	//El progrma pide seleccionar una opcion para proceder
    int opcion;
    cout << "Opciones de busqueda:" << endl;
    cout << "1. Buscar por autor" << endl;
    cout << "2. Buscar por nombre" << endl;
    cout << "3. Buscar por editorial" << endl;
    cout << "4. Buscar por volumen" << endl;
    cout << "5. Buscar libros disponibles" << endl;
    cout << "6. Buscar por codigo" << endl;
    cout << "Seleccione la opcion de busqueda:" ;
    cin >> opcion;

    switch(opcion) {
        case 1: 
		{ 
			// Buscar por autor
            string autor;
            cout << "Ingrese el nombre del autor: ";
            cin.ignore();
            getline(cin, autor);
            
            bool encontrado = false;
            
            // Mostrar interfaz de busqueda
            cout << left 
            << setw(8)  << "Codigo" 
            << setw(41) << "Nombre" 
            << setw(18) << "Autor" 
            << setw(20) << "Condicion" 
            << endl;

            //Verificar si el libro se encuentra o no en el vector
            for (int i = 0; i < n; i++) 
			{
                if (BaseDatos[i].autor == autor) 
				{
					//Mostrar detalles del libro
                    cout << left 
                    << setw(8)  << BaseDatos[i].codigo
                    << setw(41) << BaseDatos[i].nombre
                    << setw(18) << BaseDatos[i].autor
                    << setw(20) << BaseDatos[i].condicion
                    << endl;
                    encontrado = true;
                }
            }
            if (!encontrado) cout << "Error: no se encontraron libros de ese autor." << endl;
            break;
        }
        case 2: 
		{ 
			// Buscar por nombre
            string nombre;
            cout << "Ingrese el nombre del libro: ";
            cin.ignore();
            getline(cin, nombre);
            
            bool encontrado = false;

            // Mostrar interfaz de busqueda
            cout << left 
            << setw(8)  << "Codigo" 
            << setw(41) << "Nombre" 
            << setw(18) << "Autor" 
            << setw(20) << "Condicion" 
            << endl;
            //Verificar si el libro se encuentra o no en el vector
            for (int i = 0; i < n; i++) 
			{
                if (BaseDatos[i].nombre == nombre) 
				{
					//Mostrar detalles del libro
                    cout << left 
                    << setw(8)  << BaseDatos[i].codigo 
                    << setw(41) << BaseDatos[i].nombre
                    << setw(18) << BaseDatos[i].autor
                    << setw(20) << BaseDatos[i].condicion
                    << endl;
                    encontrado = true;
                }
            }
            if (!encontrado) 
			cout << "No se encontraron libros con ese nombre." << endl;
            break;
        }
        case 3: 
		{ // Buscar por editorial
            string editorial;
            cout << "Ingrese el nombre de la editorial: ";
            cin.ignore();
            getline(cin, editorial);
            bool encontrado = false;

            // Mostrar interfaz de busqueda
            cout << left 
            << setw(8)  << "Codigo" 
            << setw(41) << "Nombre" 
            << setw(18) << "Autor" 
            << setw(20) << "Condicion" 
            << endl;

            //Verificar si el libro se encuentra o no en el vector
            for (int i = 0; i < n; i++) 
			{
                if (BaseDatos[i].editorial == editorial) 
				{
					//Mostrar detalles del libro
                    cout << left 
                    << setw(8)  << BaseDatos[i].codigo 
                    << setw(41) << BaseDatos[i].nombre
                    << setw(18) << BaseDatos[i].autor
                    << setw(20) << BaseDatos[i].condicion
                    << endl;
                    encontrado = true;
                }
            }
            if (!encontrado) 
			cout << "No se encontraron libros de esa editorial." << endl;
            break;
        }
        case 4: 
		{ 
			// Buscar por volumen
            int volumen;
            cout << "Ingrese el numero de volumen: ";
            cin >> volumen;
            bool encontrado = false;
            
            // Mostrar interfaz de busqueda
            cout << left 
            << setw(8)  << "Codigo" 
            << setw(41) << "Nombre" 
            << setw(18) << "Autor" 
            << setw(20) << "Condicion" 
            << endl;

            //Verificar si el libro se encuentra o no uno en el vector
            for (int i = 0; i < n; i++) 
			{
                if (BaseDatos[i].volumen == volumen) 
				{
					//Mostrar detalles del libro
                    cout << left 
                    << setw(8)  << BaseDatos[i].codigo
                    << setw(41) << BaseDatos[i].nombre
                    << setw(18) << BaseDatos[i].autor
                    << setw(20) << BaseDatos[i].condicion
                    << endl;
                    encontrado = true;
                }
            }
            if (!encontrado) cout << "No se encontraron libros de ese volumen." << endl;
            break;
        }
        case 5: 
		{
			// Buscar libros disponibles
            bool encontrado = false;
            
            // Mostrar interfaz de busqueda
            cout << left 
            << setw(8)  << "Codigo" 
            << setw(41) << "Nombre" 
            << setw(18) << "Autor" 
            << setw(20) << "Condicion" 
            << endl;

            //Verificar si el libro se encuentra o no uno en el vector
            for (int i = 0; i < n; i++) 
			{
                if (BaseDatos[i].condicion == "Disponible") 
				{
					//Mostrar detalles del libro
                    cout << left 
                    << setw(8)  << BaseDatos[i].condicion 
                    << setw(41) << BaseDatos[i].nombre
                    << setw(18) << BaseDatos[i].autor
                    << setw(20) << BaseDatos[i].condicion
                    << endl;
                    encontrado = true;
                }
            }
            if (!encontrado) cout << "No hay libros disponibles." << endl;
            break;
        }
        case 6: 
		{
			// Buscar por codigo
            int codigo;
            cout << "Ingrese el codigo del libro: ";
            cin >> codigo;
            bool encontrado = false;
            
            // Mostrar interfaz de busqueda
            cout << left 
            << setw(8)  << "Codigo" 
            << setw(41) << "Nombre" 
            << setw(18) << "Autor" 
            << setw(20) << "Condicion" 
            << endl;

            //Verificar si el libro se encuentra o no uno en el vector
            for (int i = 0; i < n; i++) 
			{
                if (BaseDatos[i].codigo == codigo) 
				{
					//Mostrar detalles del libro
                    cout << left 
                    << setw(8)  << BaseDatos[i].codigo
                    << setw(41) << BaseDatos[i].nombre
                    << setw(18) << BaseDatos[i].autor
                    << setw(20) << BaseDatos[i].condicion
                    << endl;
                    encontrado = true;
                }
            }
            if (!encontrado) cout << "No se encontro el libro con ese codigo." << endl;
            break;
        }
        default:
            cout << "Opcion no valida." << endl;
    }
}

/*
    Funcion	insertarLibro

    Tarea:	Esta funcion inserta libros
    Dato de entrada: NADA
    Dato salida: muestra las caracteristicas del libro insertado
    Editado por: Jilberto Becerra Ccahau
    Revisado por: Fred Anthony Vigoria Hualla
    Fecha de la última revisión: 09/12/2024
*/

void insertarLibro() 
{
	//Verificar la cantidad de libros que deseamos insertar
    if (n >= max_libros) 
	{
        cout << "No hay espacio para mas libros." << endl;
        return;
    }

    int codigo;
    string nombre, autor, editorial, condicion, ISBN, materia;
    int volumen, edicion, anho, cantidad;
    
    //Ingrese las caracteristicas del libro 
    cout << "Ingrese el codigo del libro: ";
    cin >> codigo;
    cout << "Ingrese el nombre del libro: ";
    cin.ignore();
    getline(cin, nombre);
    cout << "Ingrese el ISBN: ";
    cin.ignore();
    getline(cin, ISBN);
    cout << "Ingrese el autor: ";
    getline(cin, autor);
    cout << "Ingrese el volumen: ";
    cin >> volumen;
    cout << "Ingrese el ano: ";
    cin >> anho;
    cout << "Ingrese la materia: ";
    cin.ignore();
    getline(cin, materia);
    cout << "Ingrese la cantidad: ";
    cin >> cantidad;
    cout << "Ingrese la editorial: ";
    cin.ignore();
    getline(cin, editorial);
    cout << "Ingrese la condicion del libro: ";
    getline(cin, condicion);

    // Creamos una instancia de libro
    EstructuraLibro LibroNuevo;

    LibroNuevo.codigo = codigo;
    LibroNuevo.nombre = nombre;
    LibroNuevo.ISBN = ISBN;
    LibroNuevo.autor = autor;
    LibroNuevo.volumen = volumen;
    LibroNuevo.anho = anho;
    LibroNuevo.materia = materia;
    LibroNuevo.cantidad = cantidad;
    LibroNuevo.editorial = editorial;
    LibroNuevo.condicion = condicion;

    // Verificar si el nombre ya existe en la base de datos
    for (int i = 0; i < n; i++) {
        if (BaseDatos[i].nombre == nombre) {
            cout << "El libro con este nombre ya existe." << endl;
            return;
        }
    }

    // Añadimos la instancia al arreglo
    BaseDatos[n] = LibroNuevo;

    //Movemos el puntero
    n++;
    
    // Confimamos al usuario que la tarea se realizo con exito
    cout << "Libro insertado exitosamente." << endl;
}

/*
    Funcion	actualizarLibro

    Tarea:	Esta funcion actualiza los datos del libro
    Dato de entrada: NADA
    Dato salida: muestra las caracteristicas del libro actualizado
    Editado por: Fred Anthony Vigoria Hualla
    Revisado por: Jilberto Becerra Ccahau
    Fecha de la última revisión: 09/12/2024
*/

void actualizarLibro() 
{
    // Ingreso de un codigo para actualizar
    int codigo;
    cout << "Ingrese el codigo del libro a actualizar: ";
    cin >> codigo;

    bool encontrado = false;
    
    // Actualizacion del libro segun la seleccion de la caracteristica que se desea actualizar
    for (int i = 0; i < n; i++) 
    {
        if (BaseDatos[i].codigo == codigo) 
        {
            encontrado = true;
            cout << "Actualizando informacion del libro..." << endl;
            
            // Modificar todas las caracteristicas
            cout << "Nuevo nombre: ";
            cin.ignore();
            getline(cin, BaseDatos[i].nombre);
            cout << "Nuevo autor: ";
            getline(cin, BaseDatos[i].autor);
            cout << "Nuevo volumen: ";
            cin >> BaseDatos[i].volumen;
            cout << "Nuevo ISBN: ";
            cin.ignore();
            getline(cin, BaseDatos[i].ISBN);
            cout << "Nuevo ano: ";
            cin >> BaseDatos[i].anho;
            cout << "Nueva materia: ";
            cin.ignore();
            getline(cin, BaseDatos[i].materia);
            cout << "Nueva cantidad: ";
            cin >> BaseDatos[i].cantidad;
            cout << "Nueva editorial: ";
            cin.ignore();
            getline(cin, BaseDatos[i].editorial);
            cout << "Nueva condicion: ";
            getline(cin, BaseDatos[i].condicion);
            
            cout << "Libro actualizado correctamente." << endl;
            break;
        }
    }

    if (!encontrado) {
        cout << "No se encontro el libro con ese codigo." << endl;
    }
}


/*
    Funcion	eliminarLibro

    Tarea:	Esta funcion elimina algun libro
    Dato de entrada: NADA
    Dato salida: muestra las caracteristicas de los libros, al mismo tiempo no aparece el libro eliminado
    Editado por: Jilberto Becerra Ccahau
    Revisado por: Fred Anthony Vigoria Hualla
    Fecha de la última revisión: 09/12/2024
*/


void eliminarLibro() 
{
    // El usuario ingresa un codigo
    int codigo;
    cout << "Ingrese el codigo del libro a eliminar: ";
    cin >> codigo;

    bool encontrado = false;
    
    // Volver a ordenar los libros despues de eliminar alguno
    for (int i = 0; i < n; i++) 
    {
        if (BaseDatos[i].codigo == codigo) 
        {
            // Mover todos los libros una posicion hacia atras
            for (int j = i; j < n - 1; j++) {
                BaseDatos[j].codigo = BaseDatos[j+1].codigo;
                BaseDatos[j].nombre = BaseDatos[j].nombre;
                BaseDatos[j].autor = BaseDatos[j + 1].autor;
                BaseDatos[j].volumen = BaseDatos[j + 1].volumen;
                BaseDatos[j].editorial = BaseDatos[j + 1].editorial;
                BaseDatos[j].condicion = BaseDatos[j + 1].condicion;
                BaseDatos[j].ISBN = BaseDatos[j + 1].ISBN;
                BaseDatos[j].anho = BaseDatos[j + 1].anho;
                BaseDatos[j].materia = BaseDatos[j + 1].materia;
                BaseDatos[j].cantidad = BaseDatos[j + 1].cantidad;
            }
            n--;
            encontrado = true;
            cout << "Libro eliminado correctamente." << endl;
            break;
        }
    }

    if (!encontrado) 
    {
        cout << "No se encontro el libro con ese codigo." << endl;
    }
}

/*
    Funcion	prestarLibro

    Tarea:	Esta funcion se usa para prestar libro
    Dato de entrada: NADA
    Dato salida: verifica se puede prestar el libro o no
    Editado por: Fred Anthony Vigoria Hualla
    Revisado por: Jilberto Becerra Ccahau
    Fecha de la última revisión: 09/12/2024
*/

void prestarLibro() 
{
    // Ingresamos un codigo para prestar el libro
    int codigo;
    cout << "Ingrese el codigo del libro a prestar: ";
    cin >> codigo;

    bool encontrado = false;
    
    // Comprobamos codigo y condicion
    for (int i = 0; i < n; i++) 
    {
        if (BaseDatos[i].codigo == codigo) 
        {
            if (BaseDatos[i].condicion == "Disponible") 
            {
                BaseDatos[i].condicion = "No disponible";
                cout << "El libro ha sido prestado." << endl;
            } 
            else 
            {
                cout << "El libro no esta disponible." << endl;
            }
            encontrado = true;
            break;
        }
    }

    if (!encontrado) 
    {
        cout << "No se encontro el libro con ese codigo." << endl;
    }
}

/*
    Funcion	devolverLibro

    Tarea:	Esta funcion se usa para devolver un libro
    Dato de entrada: NADA
    Dato salida: se devuelve el libro prestado
    Editado por: Jilberto Becerra Ccahau
    Revisado por: Fred Anthony Vigoria Hualla
    Fecha de la última revisión: 09/12/2024
*/

void devolverLibro() 
{
	//Ingresamos un codigo
    int codigo;
    cout << "Ingrese el codigo del libro a devolver: ";
    cin >> codigo;

    bool encontrado = false;
    
    //comprobamos que el codigo y condicion
    for (int i = 0; i < n; i++) 
	{
        if (BaseDatos[i].codigo == codigo) 
		{
            if (BaseDatos[i].condicion == "No disponible") 
			{
                BaseDatos[i].condicion = "Disponible";
                cout << "El libro ha sido devuelto." << endl;
            } else 
			{
                cout << "El libro no estaba prestado." << endl;
            }
            encontrado = true;
            break;
        }
    }

    if (!encontrado) 
	{
        cout << "No se encontro el libro con ese codigo." << endl;
    }
}

/*
    Funcion	ordenarLibro

    Tarea:	Esta funcion sordena libros en caso de que esten desordenados
    Dato de entrada: NADA
    Dato salida: libros ordenados
    Editado por: Fred Anthony Vigoria Hualla
    Revisado por: Jilberto Becerra Ccahau
    Fecha de la última revisión: 09/12/2024
*/

void ordenarLibro() 
{
    // Ordenar los libros por codigo (puedes usar otro criterio de ordenacion)
    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = i + 1; j < n; j++) 
        {
            if (BaseDatos[i].codigo > BaseDatos[j].codigo) 
            {
                // Intercambiar elementos
                swap(BaseDatos[i].codigo, BaseDatos[j].codigo);
                swap(BaseDatos[i].ISBN,BaseDatos[j].ISBN);
                swap(BaseDatos[i].nombre, BaseDatos[j].nombre);
                swap(BaseDatos[i].autor, BaseDatos[j].autor);
                swap(BaseDatos[i].volumen, BaseDatos[j].volumen);
                swap(BaseDatos[i].editorial, BaseDatos[j].editorial);
                swap(BaseDatos[i].edicion, BaseDatos[j].edicion);
                swap(BaseDatos[i].anho, BaseDatos[j].anho);
                swap(BaseDatos[i].materia, BaseDatos[j].materia);
                swap(BaseDatos[i].cantidad, BaseDatos[j].cantidad);
                swap(BaseDatos[i].condicion, BaseDatos[j].condicion);
            }
        }
    }

    cout << "Libros ordenados por codigo." << endl;
}