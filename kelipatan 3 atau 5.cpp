#include <iostream>

using namespace std;

int main()
{

    int hasil=0, hasila=0, hasilb=0, a=0;
    while (a < 1000)
    {
        if(a%3 == 0 || a%5 ==0)
        {
            cout<<a<<" ";
            hasil += a;
        }
        a++;
    }
    cout<<hasil;

}
