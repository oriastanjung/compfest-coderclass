#include <iostream>


using namespace std;

int main(int argc, char const *argv[])
{
    long long a,b,c,x;
    cin >> a >> b >> c >> x;
    long long count=0;
    long long posisiSekarang = x;
    long long posisiTeleport;
    
    do{
        posisiTeleport = (a*posisiSekarang + b) %c;
        posisiSekarang = posisiTeleport;
        count++;
    }
    while(posisiTeleport != x);
    
    cout << count << endl;
    return 0;
}
