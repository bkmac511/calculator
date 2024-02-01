#include <iostream>
#include <cmath>

using namespace std;

int main() {

    char dzialanie;
    double a;
    double b;

    cout << "Podaj liczbe/liczby: " << endl;
    cin >> a;
    cin >> b;

    cout << "Wybierz dzialanie (+, -, *, /, sqrt): " << endl;
    cin >> dzialanie;

    switch (dzialanie) {
        case '+':
            return a + b;
            break;
        case '-':
            return a - b;
            break;
        case '*':
            return a * b;
            break;
        case '/':
            return a / b;
            break;
        case 'p':
            return sqrt(a);
            break;
        default:
            std::cout << "Błędna operacja! Wybierz +, -, *, lub /." << std::endl;
    };

    cout << "= " << dzialanie << endl;

    return 0;
}
