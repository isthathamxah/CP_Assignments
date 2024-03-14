#include <iostream>

using namespace std;

int main()
{
    double pay_rate, hours_worked, total_income, gross_pay, taxes, net_income, clothes_and_accessories, schoolupplies, savings_bonds, parents_bonds;

    cout << "Enter the pay rate per hour: $";
    cin >> pay_rate;

    cout << "Enter the number of hours worked per week: ";
    cin >> hours_worked;

    // Calculate gross pay for five weeks
    gross_pay = pay_rate * hours_worked * 5;

    // Calculate taxes at 14%
    taxes = gross_pay * 0.14;

    // Calculate net income
    net_income = gross_pay - taxes;

    // Calculate money spent on clothes and accessories (10% of net income)
    clothes_and_accessories = net_income * 0.10;

    // Calculate money spent on school supplies (1% of net income)
    schoolupplies = net_income * 0.01;

    // Calculate money spent on savings bonds (25% of remaining money after buying clothes and supplies)
    savings_bonds = (net_income - clothes_and_accessories - schoolupplies) * 0.25;

    // Calculate money parents spend on additional savings bonds (.50 for every $1 you spend)
    parents_bonds = savings_bonds * 0.50;

    // Display output
    cout << "\nYour gross pay before taxes: $" << gross_pay << endl;
    cout << "Taxes withheld (14%): $" << taxes << endl;
    cout << "Net income after taxes: $" << net_income << endl;
    cout << "Money spent on clothes and accessories: $" << clothes_and_accessories << endl;
    cout << "Money spent on school supplies: $" << schoolupplies << endl;
    cout << "Money spent on savings bonds: $" << savings_bonds << endl;
    cout << "Money your parents spend on additional savings bonds: $" << parents_bonds << endl;

    return 0;
}
