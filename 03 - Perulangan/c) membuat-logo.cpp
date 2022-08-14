#include <iostream>


using namespace std;

int main(int argc, char const *argv[])
{
    int tinggi, lebar, tebal;
    cin >> tinggi >> lebar >> tebal;

    for (int i=0; i < (tinggi-tebal); i++){
        for (int j= 0; j < lebar; j++){
            if ((j > tebal-1 && i > tebal-1))
            {
                cout << ".";
            }else{
                cout << "*";
            }
        }
        cout << endl;
    }
    for (int i = (tinggi-tebal)-1 ; i < tinggi-1; i++){
        for (int j=0; j< lebar; j++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
