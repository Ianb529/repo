#include <iostream>

using namespace std;

int main()
{
    /*
    int num;
    cout << "Ingrese un numero: ";
    cin >>num;

    cout << "Su numero es: " << num >> endl;
    return 0;

    int n;
    cout << "ingrese un numero: ";
    cin >> n;

    cout << (n / 1000) << endl;
    cout << (n / 100 ) % 10 << endl;
    cout << (n / 10 ) % 10 << endl;
    cout << (n % 10) << endl;
    return 0;


    char caracter;
    cout << "Ingrese un numero: ";
    cin >>caracter;
    int val = static_cast<int>(caracter);
    if( ( val >= 65 && val <= 90) || (val >=97 && val <= 122 )) {
            cout << "es letra " << endl;
    } else {
        cout << "no es letra" << endl;
    }
        return 0;
    */
    long num;
    cout << "ingrese un numero: ";
    cin >> num;
    if( !(num % 2) ){
            cout << "es par" << endl;
    } else {
        cout <<"es impar" << endl;
    }

    return 0;
}
