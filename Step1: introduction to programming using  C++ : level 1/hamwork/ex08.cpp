#include <iostream>

using namespace std;

int x = 5000;

void myfunctio() {
    int x = 15;
    cout << x << '\n';
};
int main()
{
    int x;
    x = 4;
    myfunctio();
    cout << x << '\n';
    cout << ::x;
    ::x = 10;
    cout << ::x; 
    return 0;
}