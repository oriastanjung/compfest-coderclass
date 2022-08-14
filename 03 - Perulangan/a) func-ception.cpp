#include <iostream>


using namespace std;

int main(int argc, char const *argv[])
{
    int a,b,x,y;
    cin >> a >> b >> x >> y;

    while (x <= y){
        cout << x << endl;
        x = a*x +b;
    }
    return 0;
}
