#include <iostream>
#include <string>



using namespace std;

int main(int argc, char const *argv[])
{   string input;
    getline(cin,input);
    bool isUpper = false;
    if (input[0] == '0'){
        cout << "nol";
    }else if (input[0] >= 48 && input[0] <= 57){
        cout << "bilangan bulat positif";
    }else if (input[0] == '-'){
        cout << "bilangan bulat negatif";
    }else{
        int sizeInput = input.size();
        // cout << sizeInput;
        for(int i =0; i< sizeInput; i++){
            if(input[i] >= 65 && input[i] <= 90){
                isUpper = true;
                break;
            }
        }
        if(!isUpper){
            cout << "kata";
        }
    }
    return 0;
}
