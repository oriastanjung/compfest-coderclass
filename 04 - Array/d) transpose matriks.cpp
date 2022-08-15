#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int baris, kolom;
    cin >> baris >> kolom;
    int matriks[baris][kolom];
    int transposeMatriks[kolom][baris];

    for (int i = 0; i < baris; i++){
        for (int j = 0; j < kolom; j++){
            cin >> matriks[i][j];
            transposeMatriks[j][i] = matriks[i][j];
        }
    }
    for (int i = 0; i < kolom; i++){
        for (int j = 0; j < baris; j++){
            cout << transposeMatriks[i][j] << " ";
        }
        cout << endl;
    }


    return 0;

}
