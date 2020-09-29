#include <iostream>

using namespace std;

int main() {
    string myString;

    getline(cin,myString);

    if(myString == "char"){
        cout << sizeof(char) << endl;
    }

    else if(myString == "short"){
        cout << sizeof(short) << endl;
    }

    else if(myString == "int"){
        cout << sizeof(int) << endl;
    }

    else if(myString == "float"){
        cout << sizeof(float) << endl;
    }

    else if(myString == "long"){
        cout << sizeof(long) << endl;
    }

    else if(myString == "double"){
        cout << sizeof(double) << endl;
    }

    return 0;
}