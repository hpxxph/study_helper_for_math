/*

    -------------------------------MATRIX CULC-------------------------------

            |-             -|    |-             -|    |-           -|
            |  a11   0    0 |    |  0   a12   0  |    | 0    0  a13 |
            |               |    |               |    |             |
            |  0   a22   0  | -> |  0    0   a23 | -> | a21  0   0  |
            |               |    |               |    |             |
            |  0    0   a33 |    |  a31  0    0  |    |  0  a32  0  |
            |-             -|    |-             -|    |-           -|

    -------------------------------------------------------------------------
*/

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

inline int inputMatrixRes(int a11, int a21, int a31,
                          int a12, int a22, int a32,
                          int a13, int a23, int a33);

int main()
{
    int rows = 3;
    int cols = 3;

    int matrix[3][3];

    cout << "Введите элементы матрицы:\n";

    for (int i = 0; i < rows; i += 1)
    {
        for (int j = 0; j < cols; j += 1)
        {
            cout << "\nЭлемент [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matrix[i][j];
        }
    }

    cout << "\033[1;35m" << "\n*********MATRIX**********\n" << "\033[0m" << endl;

    for (int i = 0; i < rows; i += 1)
    {
        for (int j = 0; j < cols; j += 1)
        {
            int index = i * cols + j;
            cout << "\033[1;31m" <<  "   " << matrix[i][j] << "\t" << "\033[0m";
        }
        std::cout << "\n";
    }

    cout << "\033[1;35m" << "\n*************************\n" << "\033[0m" << endl;

    int result = inputMatrixRes(
            matrix[0][0], matrix[1][0], matrix[2][0],
            matrix[0][1], matrix[1][1], matrix[2][1],
            matrix[0][2], matrix[1][2], matrix[2][2]);

    return 0;
}


int inputMatrixRes(int a11, int a21, int a31,
                   int a12, int a22, int a32,
                   int a13, int a23, int a33)
{
    int resMatrix = a11 * a22 * a33 +
                    a12 * a23 * a31 +
                    a13 * a21 * a32 ;

    std::cout << "\033[1;31m"
              << a11 << " * " << a22 << " * " << a33 << " + "
              << a12 << " * " << a23 << " * " << a31 << " + "
              << a13 << " * " << a21 << " * " << a32 << " = " << resMatrix
              << "\033[0m" << std::endl;

    return 0;
}