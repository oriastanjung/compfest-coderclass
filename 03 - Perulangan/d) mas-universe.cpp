#include <iostream>


using namespace std;

int main(int argc, char const *argv[])
{
    int n, temp, max;
    cin >> n;
    max = 0;
    for (int i =0; i < n; i++){
        cin >> temp;
        if (temp > max){
            max = temp;
        }
    }
    
    cout << max;

    return 0;
}
