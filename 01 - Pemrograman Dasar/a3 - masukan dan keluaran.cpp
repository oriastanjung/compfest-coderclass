#include <iostream>
#include <iomanip>
using namespace std;


int main(int argc, char const *argv[])
{
    long a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    double average = ((double)(a + b + c +d +e +f)) / 6;
    cout << setprecision(11) << average;
    
    return 0;
}
