// Ejecutar
// g++ /home/diana/Documentos/Maestria/Programacion_2/Codigos/Sebas-Diana/matTest/main.cpp
// ./a.out
#include <iostream>

using namespace std;

class matrices {

      public:
        int getMatrix(int param1, int param2);// Member functions declaration
        int showMatrix(int param1, int param2);
        int AddMatrix(int param1, int param2);
        int diffMatrix(int param1, int param2);
        //void addition();
      private:

        int **mat1;
        int **mat2;
        int **mat3;
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



        cout << "--------------Matriz 1--------------" << endl;

        for (int i = 0; i < param1; ++i) {
            for (int j = 0; j < param2; ++j) {
                cout << "Ingrese el elemento mat1[" << i << "," << j << "]: ";
                cin >> mat1[i][j];
            }
        }

        cout << "--------------Matriz 2--------------" << endl;

        for (int i = 0; i < param1; ++i) {
            for (int j = 0; j < param2; ++j) {
                cout << "Ingrese el elemento mat2[" << i << "," << j << "]: ";
                cin >> mat2[i][j];
            }
        }
}
int matrices::showMatrix(int param1, int param2)
{

     for ( int i = 0; i < param1; i++ ){
      for ( int j = 0; j < param2; j++ ) {
         //cout << "mat3[" << i << "][" << j << "]: ";
         cout << mat3[i][j]<<" ";
      }
      cout << "\n";
    }

}

int matrices::AddMatrix(int param1,int param2)
{
            mat3 = new int * [param1];
                      for (int i = 0; i < param1; i++) {
                mat3[i] = new int [param2];
            }
    cout << "El resultado de la suma de las matrices 1 y 2 es: "<<"\n";

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

    cout << "El resultado de la resta de las matrices 1 y 2 es: "<<"\n";

			for(int i = 0; i < param1; i++) {
				for (int j = 0; j < param2; j++) {
					mat3[i][j]= mat1[i][j] - mat2[i][j];
				}
     }
}



int main() {
   matrices op;        // Declare objects of a class.
   int row = 0, col = 0;
   cout << "Introduzca un numero de filas diferente de cero para construir las matrices a operar: ";
   cin >> row;
   cout << "Introduzca un numero de columnas diferente de cero para construir las matrices a operar: ";
   cin >> col;

   op.getMatrix(row, col);
   op.AddMatrix(row,col);
   op.showMatrix(row,col);
   op.diffMatrix(row,col);
   op.showMatrix(row,col);
}

