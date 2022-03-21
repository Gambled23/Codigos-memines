#include <iostream>
#include <cstdlib>
 
using namespace std;

int main()
{
    int x = 0;
    int y = 1;
    int z;
    for (size_t i = 0; i < 20; i++)
    {
        z = x+y;
        x = y;
        y = z;
        cout<<z<<"-";
    }
    system("PAUSE");
    return 0;
}