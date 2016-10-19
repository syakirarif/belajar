#include <iostream>
using namespace std;

long int a, b, c, hasil;

int main()
{
    a=1;
    b=1;
    c=0;
    while (c<4000000){
        c = a + b;
        a = b;
        b = c;
        if (c%2 == 0)
            hasil += c;

    }
    cout<<hasil<<endl;
}
