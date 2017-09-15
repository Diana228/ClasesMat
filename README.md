# ClasesMat

Descripción 

En primera instancia, se debe de clonar el presente repositorio para poder utilizar el programa.

Si va a trabajar con el OS Windows debe de abrir el main.cpp del respositorio clonado y utilizar un compilador de c++. Dado el caso que no compile, debe de verificar si el compilador que esta utilizando requiere una libreria en especial.

Por el contrario, si va trabajar con el sistema operativo (OS) LINUX, y a su vez desde la consola, debe de compilar el programa con el comando g++, seguido de la ruta donde se encuentra clonado el archivo .cpp. Por ejemplo: g++ /home/diana/Documentos/Maestria/Programacion_2/Codigos/Sebas-Diana/matTest/main.cpp

Ahora bien, esta clase permitirá crear dos matriz de mxn, donde m y n corresponden al número de filas y columnas ingresadas por el usuario,respectivamente. Despúes de haber establecido el tamaño y los elementos de cada matriz, el programa calculará la suma,resta, producto de ambas matrices y la reduccion de la primera matriz por el método de Gauss-Jordan.

Esta clase denominada matrices utilizada dentro de ella los siguientes objetos para llevar a cabo las operaciones mencionadas.
-int getMatrix(int param1, int param2); Este objeto que tiene como función generar las matrices 1 Y 2 a operar. 
    Entradas
     param1: Es el número de filas que van a poseer las matrices.
     param2: Es el número de columnas que van a poseer las matrices.
    
    Salida
    Se obtendrán dos matrices de mxn   
-int showMatrix(int param1, int param2, int NumMat);Este objeto tiene como función mostrar las matrices generadas o las matrices   resultantes de las operaciones efectuadas.

   Entradas
    param1: Es el número de filas que poseen las matrices a visualizar.
    param2: Es el número de columnas que poseen las matrices a visualizar.
    NumMat: Este parametro indica si se desea mostrar la matriz resultante de las operaciones suma, resta y multiplicacion nxn o mxn.

    
          int AddMatrix(int param1, int param2);
          int diffMatrix(int param1, int param2);
          int MultMatrix(int param1, int param2);
        

%
% Output:
% The  function  will    return a column vector  representing
 the solution to each variable in order of appearance in the
% given matrix.
