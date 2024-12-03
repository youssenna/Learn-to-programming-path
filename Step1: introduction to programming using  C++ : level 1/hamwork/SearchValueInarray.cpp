#include <iostream>

using namespace std;

void ft_found20InArrayUsingFor()
{

    int arry[10] = {1,209,0,4,2,6,205,8,2,20};
    int i;
    for (i = 0; (i < 10); i++)
    {
        if (arry[i] == 20)
        {
            cout << "found 20 in case " << i << endl;
            break;
        }
    }
    if (arry[i] != 20 )
        cout << "not found 20 in array\n";
}

void ft_found20InArrayUsingWhile()
{

    int arry[10] = {1,209,0,4,2,6,205,8,9,20};
    int size = sizeof(arry) / sizeof(arry[0]);
    int lastelementSize = size - 1;
    int i = 0;
    while ((arry[i] != 20) && (i != lastelementSize)) {
        i++;
    }
    if (arry[i] == 20)
        cout << "found 20 in case \n" << i;
    else cout << "20 not found it in any case of array\n";
}

int main()
{
    ft_found20InArrayUsingFor();
    ft_found20InArrayUsingWhile();
    return 0;
}