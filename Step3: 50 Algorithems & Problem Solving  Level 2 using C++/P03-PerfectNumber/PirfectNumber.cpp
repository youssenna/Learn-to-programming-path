#include <iostream>

using namespace std;

enum en_IsPerfect {Perfect = 1, notPerfect = 2};

int ft_ReadPositifNbr(string message) {
    int nbr;
    while (nbr <= 0) {
        cout << message;
        cin >> nbr;
    }
    return nbr;
}

float ft_calcSumOfAllDivise(int nbr) {
    float sum = 0;
    int i = 1;
    while(i <= nbr / 2) {
        if(nbr % i == 0)
            sum += i;
        i++;
    }
    return float(sum);
}

en_IsPerfect ft_chekIsPrimerNumber(int nbr) {
    if (ft_calcSumOfAllDivise(nbr) == nbr)
        return en_IsPerfect::Perfect;
    else
        return en_IsPerfect::notPerfect;
}

void ft_PrintIsPerfectNumber(int nbr) {
    if (ft_chekIsPrimerNumber(nbr) == en_IsPerfect::Perfect)
        cout << nbr << " Is Perfect number" << endl;
    else
        cout << nbr << " Is not Perfect number" << endl;
}
int main() {
    ft_PrintIsPerfectNumber(ft_ReadPositifNbr("Plese enter Positif number : "));
    return 0;
}