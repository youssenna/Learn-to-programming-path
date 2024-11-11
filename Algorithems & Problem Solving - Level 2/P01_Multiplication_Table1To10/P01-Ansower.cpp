#include <iostream>

using namespace std;

void ft_prtintFirstColumn() {
	cout << "\t\t\tMultiplication table 1 to 10\n";
	for (int i = 1;i <= 10; i++) {
		cout << "\t" << i;
	}
	cout << "\n";
}

string ft_rowMarck(int count) {
	if (count < 10)
		return "   |";
	else
		return "  |";
}

void ft_printLine() {
	for (int i = 1;i <= 10; i++) {
		cout << "_________";
	}
	cout << "\n";
}
void ft_printTableContunu() {
	int i = 1;
	while(i <= 10) {
		cout << i <<  ft_rowMarck(i) << "  ";
		int j = 1;
		while (j <= 10) {
			cout << i * j << '\t';
			j++;
		}
		cout << '\n' ;
		i++;
	}
}

void ft_printMultiplicationTable1to10() {
	ft_prtintFirstColumn();
	ft_printLine();
	ft_printTableContunu();
}
int main() {
	 ft_printMultiplicationTable1to10(); 	
}
