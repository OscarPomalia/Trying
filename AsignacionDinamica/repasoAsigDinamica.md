# Repaso de Asignación de Memoria dinámica

1. Asignar memoria dinámica a una **cadena de caracteres** y a un **entero**. Liberar la memoria asignada.

    ```cpp
    #include <iostream>
    #include <cstring> //strlen()
    using namespace std;

    int main(int argc, char *argv[]){

        //Declaramos variables
        const char *Cadena = "Los programadores no son gente normal. Piensan en bits y bytes";
        int * pEntero, lonCadena, Entero = 15;
        char *pCadena;
        
        lonCadena = strlen(Cadena);
        pCadena = new char[lonCadena+1]; //asignamos memoria con una posición para el fin de cadena
        strcpy(pCadena, Cadena); //copia Cadena a nueva área de memoria (Heap)
        
        pEntero = new int; //se reserva memoria para un entero
        *pEntero = Entero; // se almacena en contenido de pEntero 15


        cout << " pCadena =" << pCadena << endl;
        cout << " longitud = "<< lonCadena<< endl;
        // libera memoria de pCadena ???
        

        cout << " *pEntero = " << *pEntero << endl ;
        delete pEntero; // libera memoria de pEnter;
        
        return 0;
    }
    ```

2. **Reservar  e inicializar** memoria dinámica de un entero y de un arreglo de enteros dinámico, visualizando los contenidos. Liberar memoria

    ```cpp
    #include <iostream>
    using namespace std;

    int main(int argc, char *argv[]){
        int i, *v, n, *pEntero;
        pEntero = new int(20); //o {20}, reserva e incialización de memoria
        
        cout << " *pEntero incializado: " << *pEntero << endl;
        
        cout << " introduzca dimension de v : ";
        cin >> n;
        v = new int[n]; // reserva dinámica no se puede inicializar
    
        for( i = 0; i < n; i++)
            v[i] = 10 * (i+1); // rellenado del vector

        cout <<" vector :\n";
        for( i = 0; i < n; i++)
            cout << " v[" << i << "]=" << *v++ <<endl;//salida de datos con puntero

        //Liberando memoria ??


    }
    ```

3. Asignar **memoria dinámica para una matriz de m x n**. Tratar como puntero a puntero de un tipo dado. rellenar la matriz con datos aleatorios y mostrar la matriz de la forma estándar y con punteros. Liberar memoria.

    ```cpp
    #include <iostream>
    using namespace std;

    int main(int argc, char *argv[]){
        int i, j, m, n;
        //typedef int* col; // col es un sinónimo de puntero a entero
        //using col = int*; //equivalente  C++11, posteriores, más clara y legible

        int **ptr; //m es puntero que apuntan a punteros a enteros
        cout << " introduzca dimension de las filas y columnas (m,n) : ";
        cin >> m >> n;

        ptr = new int*[m]; // reserva de memoria para m punteros a enteros
        
        for( i = 0; i < m; i++){
            ptr[i] = new int[n]; // ptr[i] puntero a vector de n enteros

            for (j = 0; j < n; j++)
            ptr[i][j] = 10 * (i + 1) + j;
        }
        
        cout << "\n mostrando la matriz con indexacion: \n";
        for( i = 0; i < m; i++){
            for (j = 0; j < n; j++)
                cout << " " << ptr[i][j]; // indexación tipo matriz
            cout << endl;
        }
                
        cout << "\n mostrando matriz con punteros: \n" ;
        for( i = 0; i < m; i++){
            for (j = 0; j < n; j++)
                cout<<" " << *(*(ptr+i)+j); // también válido con *(ptr[i]+j)...*(i[ptr] + j)
            cout << endl;
        }

        //Liberando memoria
        

        return 0;
    }
    ```


4. **Lectura y visualización de matrices cuadradas con funciones cuya memoria se reserva dinámicamente**. Implementar las funciones de lectura y escritura de matrices cuadradas, cuya memoria se ha reservado dinámicamente en un programa principal.Liberar memoria.

    ```cpp
    #include <iostream>
    using namespace std;

    void leermatriz (int** m, int n){
        int i, j;
        cout << "Ingrese los elementos:\n";
        for( i = 0; i < n; i++)
            for (j = 0; j < n; j++)
                cin >> m[i][j] ;
    }

    void escribirmatriz (int** m, int n){
        int i, j;
        for( i = 0; i < n; i++){
            for (j = 0; j < n; j++)
                cout << " " << m[i][j] ;
            cout << endl;
        }
    }


    int main(int argc, char *argv[]){
        int n;
        int **m; 
        cout << " introduzca la dimension de la matriz cuadrada: ";
        cin >> n;
        
        m = new int*[n];
        
        for (int i = 0; i < n; i++)
            m[i] = new int[n];
            
        leermatriz(m,n);
        escribirmatriz(m,n);

        //Liberar memoria ??

        return 0;
    }
    ```

5. **Lectura y visualización de un texto almacenado en memoria dinámica**. Lee un texto de 10 líneas, nuestre el texto indicando la longitud de cada línea. La memoria se ajusta a la longitud mínima de la entrada de datos. Para ello, se reserva memoria dinámica a un arreglo de punteros a caracteres. Se lee una línea en un buffer de longitud constante 81, y se ajusta la longitud del texto de entrada al valor leído. Liberar memoria.

    ```cpp
    #include<iostream>
    #include<cstring> // strlen(), strcpy()
    using namespace std;

    int main(int argc, char *argv[]){
        
        char** textoentrada; //Puntero doble para manejar múltiples cadenas
        int n = 3;
        char buffer[81];
        textoentrada = new char*[n]; // reserva de memoria
        
        for (int i = 0; i < n; i++){
            cout << " Ingrese linea " << i+1 << ": ";
            cin.getline(buffer,80);
            textoentrada[i] = new char [strlen (buffer)+1]; //ajuste
            strcpy (textoentrada[i], buffer);
        }
        
        cout <<"longitud linea\n";
        
        for (int i = 0; i < n; i++) // visualización con punteros
            cout << strlen(*(textoentrada + i)) << " :" << *(textoentrada + i) << endl;

        //Liberar memoria   
            
        return 0;
    }
    ```

6. **Reserva espacio en memoria para un arreglo dinámico de n elementos de estructuras**. leer y mostrarlo mediante funciones, las coordenadas de n puntos del plano, almacenando los resultados en un arreglo dinámico. Liberar memoria.

    ```cpp
    #include <iostream>
    using namespace std;

    struct Punto{
        float coordX;
        float coordY;
    };

    Punto *Vector; 

    void leerPunto( Punto &p){
        cout << "Ingrese coordenada x e y : ";
        cin >> p.coordX >> p.coordY;
    }

    void escribirPunto(Punto p){
        cout << " "<< p.coordX <<" "<< p.coordY << endl;
    }

    void leerVectorPuntos(Punto *Vector, int n){
        for (int i = 0; i < n; i++)
            leerPunto(Vector[i]);
    }

    void escrbirVectorPuntos( Punto *Vector, int n){
        cout <<"\nLos puntos ingresados son:\n";
        for (int i = 0; i < n; i++)
            escribirPunto(Vector[i]);
    }

    int main(int argc, char *argv[]){
        int n;
        cout << "Cuantos puntos ingresara?: ";
        cin >> n;
        //Validar n ??
        
        
        Vector = new Punto[n];
        
        leerVectorPuntos(Vector, n);
        
        escrbirVectorPuntos(Vector, n);

        //Liberar memoria ??

        return 0;
    }
    ```
