#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    double a, b, result;
    char op;
    char choice;

    do
    {
        system("cls");

        cout << "------------------" << endl;
        cout << "Simple Calculator" << endl;
        cout << "------------------" << endl;

        cout << "Enter first number: ";
        cin >> a;

        cout << "Enter operator (+, -, *, /): ";
        cin >> op;

        cout << "Enter second number: ";
        cin >> b;

        switch (op)
        {
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            if (b != 0)
            {
                result = a / b;
            }
            else
            {
                cout << "Error: Division by zero is not allowed." << endl;
                return 1;
            }
            break;
        default:
            cout << "Error: Invalid operator" << endl;
            return 1;
        }

        cout << "Result: " << a << " " << op << " " << b << " = " << result << endl;
        cout << "Want to calculate more? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');
    return 0;
}
