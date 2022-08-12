#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a, b, c;
    
    cin >> a >> b >> c;
    if ((a < b && b < c && a + b > c) || (b < a && a < c && a + b > c) || (b < c && c < a && c + b > a) || (c < b && b < a && c + b > a) || (c < a && a < b && c + a > b) || (a < c && c < b && c + a > b))
    {
        cout << "segitiga";
    }
    else
    {
        cout << "bukan segitiga";
    }
    return 0;
}
