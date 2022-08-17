#include <iostream>

using namespace std;

int g(int n){
    int total_faktor = 0;
    for (int i = 1; i <= n; i++){
        if(n % i == 0){
            total_faktor++;
        }
    }

    return total_faktor;
}


int h(int n){
    int totalJumlahFaktor =0;
    for (int i = 1; i <= n; i++){
        totalJumlahFaktor += g(i);
    }

    return totalJumlahFaktor;
}

int main(int argc, char const *argv[])
{
    int input;
    cin >> input;

    cout << h(input) << endl;
    
    return 0;
}
