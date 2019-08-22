#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cout << " Ingrese el primer numero : " ;
    cin >> a;
    cout << endl;
    cout << " Ingrese el segundo numero : ";
    cin >> b;
    cout << endl;
    cout << " Ingrese el tercer numero : ";
    cin >> c;
    if (a<b)
        cout << "El menor es : " << a << endl;
    else if(b<c)
        cout << " El menor es :" <<  b << endl ;
    else
        cout << "El menor es : " << c << endl ;


}
