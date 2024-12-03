#include <iostream>
// in this code I ude language c to practice write function
#include <unistd.h>

void ft_putchar(char caraacter) {
    write(1, &caraacter, 1);
}

using namespace std;

void ft_PrintAllLetterFromAAAToZZZ() {
    int i = 65, j = 0, k = 0;
    while (i <= 90) {
        j = 65;
        while(j <= 90) {
            k = 65;
            while(k <= 90) {
                ft_putchar(i);
                ft_putchar(j);
                ft_putchar(k);
                ft_putchar('\n');
                k++;
            }
            j++;
        }
        i++;

    }
}

int main() {
    ft_PrintAllLetterFromAAAToZZZ();
    return 0;
}