#include <iostream>
using namespace std;

int main (){
    int a,b;

    cout << "enter the nuber a"<< endl;
    cin >> a;
    cout << "enter the nuber b"<< endl;
    cin >> b;

    char op;
    cout << " enter the operation" << endl;
    cin >> op;

    switch (op)
    {
    case '+':
        cout << a+b <<endl;
        break;
    case '-':
        cout << a-b<<endl;
        break;
    case '*':
        cout << a*b<<endl;
        break;
    case '/':
        cout << a/b<<endl;
        break;
    case '%':
        cout << a%b<<endl;
        break;
    
    default:
    cout << "Null"<<endl;
        break;
    }

}