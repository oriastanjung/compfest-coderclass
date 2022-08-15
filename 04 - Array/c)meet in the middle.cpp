#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int input[n];
    int arr[n];
    for (int i =0; i < n; i++){
        cin >> input[i];
    }
    // 0 1 2 3 4 5 6
    // 2 8 9 7 9 1 8   j = 6
    // 1 n 2 n-1 3 n-2
    // 2 8 8 1
    int kurang = 1;
    for (int i = 0, j = n-1; i < n; i++){
        if(i %2 != 0){
            arr[i] = input[j--];
        }
        else{
            if(i == 0){
                arr[i] = input[i];
            }
            else{
                arr[i] = input[i-kurang];
                kurang++;
            }
        }
      
    }

    for (int i =0; i < n; i++){
        cout << arr[i] << " ";
    }


    return 0;

}
