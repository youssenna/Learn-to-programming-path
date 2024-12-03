#include <iostream>

using namespace std;

int main(){
    int nbrs;
    int sum = 0;
    cout << "please enter 5 numbers\n";
    for(int i=0; i < 5;i++){
        cin >> nbrs;
        if (nbrs > 50) {
            continue;
        }
        sum += nbrs; 
    }
    cout << "sum of numbers < 50 is " << sum;
}