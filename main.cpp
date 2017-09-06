// Ejecutar
// g++ /home/diana/Documentos/Maestria/Programacion_2/Codigos/Sebas-Diana/matTest/main.cpp
// ./a.out
#include <iostream>

using namespace std;

class matrices {

      public:
          int getMatrix(int param1, int param2);// Member functions declaration
          int showMatrix(int param1, int param2, int NumMat);
          int AddMatrix(int param1, int param2);
          int diffMatrix(int param1, int param2);
          int MultMatrix(int param1, int param2);
        

      private:
          int **mat1;
          int **mat2;
          int **mat3;
          int **mat4; //resultado Multiplicación
};

int matrices::getMatrix(int param1, int param2)
{
    //int mat1[arg1][arg2],mat2[arg1][arg2];
        mat1 = new int * [param1];
        for (int i = 0; i < param1; i++) {
            mat1[i] = new int [param2];
            }

        mat2 = new int * [param1];
        for (int i = 0; i < param1; i++) {
            mat2[i] = new int [param2];
            }

        cout << "Por favor ingresar los elementos de la Matriz 1: " << endl;

        for (int i = 0; i < param1; ++i) {
            for (int j = 0; j < param2; ++j) {
                cout << "Mat1[" << i << "," << j << "]: ";
                cin >> mat1[i][j];
            }
            cout << "\n";
        }

        cout << "Por favor ingresar los elementos de la Matriz 2: " << endl;

        for (int i = 0; i < param1; ++i) {
            for (int j = 0; j < param2; ++j) {
                cout << "Mat2[" << i << "," << j << "]: ";
                cin >> mat2[i][j];
            }
            cout << "\n";
        }
}

int matrices::showMatrix(int param1,int param2, int NumMat)
{
    if (NumMat != 3){
        for ( int i = 0; i < param1; i++ ){
            for ( int j = 0; j < param2; j++ ) {
                cout << mat3[i][j]<<"\t";
        }
        cout << "\n";
        }
    } else {
        for ( int i = 0; i < param1; i++ ){
            for ( int j = 0; j < param1; j++ ) {
                cout << mat4[i][j]<<"\t";
        }
        cout << "\n";
        }
    }

}

int matrices::AddMatrix(int param1,int param2)
{
    mat3 = new int * [param1];
    for (int i = 0; i < param1; i++) {
        mat3[i] = new int [param2];
        }
    cout << endl << "Mat1 + Mat2 = "<<"\n";
    
    for(int i = 0; i < param1; i++) {
        for (int j = 0; j < param2; j++) {
            mat3[i][j]= mat1[i][j] + mat2[i][j];
			}
    }
}

int matrices::diffMatrix(int param1,int param2)
{
    mat3 = new int * [param1];
    for (int i = 0; i < param1; i++) {
        mat3[i] = new int [param2];
        }

    cout << endl << "Mat1 - Mat2 = "<<"\n";

    for(int i = 0; i < param1; i++) {
        for (int j = 0; j < param2; j++) {
            mat3[i][j]= mat1[i][j] - mat2[i][j];
			}
    }
}

int matrices::MultMatrix(int param1, int param2)
{
    mat4 = new int * [param1];  //saco el espacio de memoria para mat4, que es donde guardo la multiplicación
    for (int i = 0; i < param1; i++){
        mat4[i] = new int [param1];
    }
    
    cout << endl << "Mat1 * Mat2' = "<<"\n";
    
    for (int i = 0; i < param1; ++i) {  //Multiplicar mat1 con mat4
        for (int j = 0; j < param1; ++j) {
            for (int k = 0; k < param2; ++k){
                mat4[i][j] += mat1[i][k]*mat2[j][k];
            }
        }
    }
}
    

int main() 
{   
   matrices op;        // Declare objects of a class.
   int row = 0, col = 0;
   cout << "Introduzca un numero de filas diferente de cero para construir las matrices a operar: ";
   cin >> row;
   cout << "Introduzca un numero de columnas diferente de cero para construir las matrices a operar: ";
   cin >> col;

   op.getMatrix(row, col);
   op.AddMatrix(row,col);
   op.showMatrix(row,col,1);
   op.diffMatrix(row,col);
   op.showMatrix(row,col,2);
   op.MultMatrix(row,col);
   op.showMatrix(row,col,3); //Se debe modificar el show para que muestre la matriz transpuesta
   }

