#include <iostream>

using namespace std;

void fungsi(char s[], int size, int operasiKe1[], int operasiKe2[]){
    // operasi 1 tukar A ,B 
    int temp;
    temp = s[operasiKe1[0]];
    s[operasiKe1[0]] = s[operasiKe1[1]];
    s[operasiKe1[1]] = temp;
    cout << s;

    // operasi ke 2 , balikkan semua string dari index ke a, b


}

int main(int argc, char const *argv[])
{
    int panjangString, banyakOperasi;
    cin >> panjangString >> banyakOperasi;
    char input[panjangString];
    cin.getline(input , panjangString);
    // cout << input;
    // cin.ignore(1, '\n');
    int operasiKe[banyakOperasi];
    int operasiKe1[2];
    cin >> operasiKe[0] >> operasiKe1[0] >> operasiKe1[1];

    int operasiKe2[2];
    cin >> operasiKe[1] >> operasiKe2[0] >> operasiKe2[1];

    fungsi(input, panjangString, operasiKe1, operasiKe2);

    return 0;
}
