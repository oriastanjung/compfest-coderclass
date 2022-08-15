#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int arr[n];
    int res[n];
    for (int i = 0, j = n-1; i < n; i++, j--){
        cin >> arr[i];
        res[j] = arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << res[i] << endl;
    }
    

    return 0;

}
