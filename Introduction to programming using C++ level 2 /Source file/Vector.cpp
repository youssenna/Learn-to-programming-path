#include <iostream>
#include <vector>

#include "../Header file/PrintOutput.h"

using namespace std;

int main() {
    
    Vector::ft_VectorInistialization();
    
    printf("\n//////////////////////////\n\n");
    
    Vector::AddElementToVectors();
    
    printf("\n//////////////////////////\n\n");
    Vector::ft_PrintVectorElements();
    
    printf("\n//////////////////////////\n\n");
    Vector::ft_VectorOfStruct();
    
    printf("\n//////////////////////////\n\n");
    
    vector <Vector::st_employementInfo> v_employements;
    
    Vector::ft_ReadVectorOfStruct(v_employements);
    Vector::ft_PrintVectorOfStruct(v_employements);

    // acces to vector elements
    vector <int> num {1,2,3,4,6};
    // declaration iterator

    cout << "vector element using itrrator: ";
    vector <int>::iterator it;
    //use iterator eith for loop
    for (it = num.begin(); it != num.end(); it++) {
        cout << *it << "  ";
    }
    cout << endl;
     
    return 0;
}
