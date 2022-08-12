#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    long a, b;
    char ops;

    cin >> a >> ops >> b;
    if (ops == '+') {
        cout << a + b;
    }else if (ops == '-'){
        cout << a-b;
    }else if (ops == '*'){
        cout << a*b;
    }else if (ops == '/'){
        cout << a/b;
    }else if (ops == '%'){
        cout << a%b;
    }
    return 0;
}
