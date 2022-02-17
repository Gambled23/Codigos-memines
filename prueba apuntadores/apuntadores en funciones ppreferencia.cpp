#include <iostream>
#include <cstdlib>
 
using namespace std;

void mostrar (int *);
int main()
{
    int number;
    cout<<"ingrese un numero\n";
    cin>>number;
    mostrar(&number);
    system("PAUSE");
    return 0;
}

void mostrar (int *ptr)
{
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
}