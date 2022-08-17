#include <iostream>

using namespace std;

void sort(int arr[], int size){
    int temp;
    for (int i =0; i < size; i++){
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                cout << i+1 << " " << j+1 << endl;
            }
        }
        
    }
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int array[n];
    for (int i =0; i < n; i++){
        cin >> array[i];
    }

    sort(array , n);

    return 0;
}
