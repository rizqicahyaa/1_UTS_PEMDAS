# include <iostream>
# include <conio.h>
using namespace std;

int main() {
    char operasi;
    int angka1, angka2;

	cout << "Enter any two number: ";
    cin >> angka1 >> angka2;
    
    cout << "Enter the operator (+, -, *, /): ";
    cin >> operasi;
    cout << "\n";

    switch(operasi) {
        case '+':
            cout << "The calculated result is : " <<angka1 + angka2;
            break;

        case '-':
            cout << "The calculated result is : " <<angka1 - angka2;
            break;

        case '*':
            cout << "The calculated result is : " <<angka1 * angka2;
            break;

        case '/':
            cout << "The calculated result is : " <<angka1 / angka2;
            break;

        default:
            cout << "Error! operator is not correct";
            break;
    }

    getch();
}
