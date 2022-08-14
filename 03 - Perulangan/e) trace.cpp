#include <iostream>


using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int temp;
    int sum = 0;
    for (int i =0; i < n; i++){
        for (int j = 0; j < n; j++)
        {
            cin >> temp;
            if(i == j){
                sum += temp;
            }
        }
        
    }
    cout << sum << endl;
    return 0;
}
