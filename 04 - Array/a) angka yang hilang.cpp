#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int banyakKertasAwal, banyakKertasDitemukan;
    cin >> banyakKertasAwal >> banyakKertasDitemukan;

    int arrayAwal[banyakKertasAwal];
    bool arrayTidakHilang[banyakKertasAwal];
    // 5 3
    // 1 2 3 4 5
    // false false false false false
    // 2 3 4
    // false false false false false

    for (int i = 0; i < banyakKertasAwal; i++){
        arrayAwal[i] = i+1;
        arrayTidakHilang[i] = false;
    }
    int input;
    int temp;
    for(int i = 0; i < banyakKertasDitemukan; i++){
        cin >> input;
        temp = input;
        if(input == arrayAwal[temp-1] ){
            
            arrayTidakHilang[temp-1] = true;
           
        }
    }

    for (int i = 0; i < banyakKertasAwal; i++){
        
        if(arrayTidakHilang[i] == false){
            cout << arrayAwal[i]<< " ";
        }
    }
}
