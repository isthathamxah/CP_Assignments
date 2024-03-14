#include <iostream>

using namespace std;

int main()
{
    double account_balance = 1000.0;
    double withdraw_amount;
    const double MAX_WITHDRAWAL = 500.0;
    const double SERVICE_CHARGE_THRESHOLD = 300.0;
    const double SERVICE_CHARGE_PERCENTAGE = 0.04;
    const double INSUFFICIENT_FUNDS_CHARGE = 25.0;

    cout << "Enter the amount to withdraw: $";
    cin >> withdraw_amount;

    if(withdraw_amount > MAX_WITHDRAWAL)
    {
        cout << "\nMaximum withdrawal amount is $" << MAX_WITHDRAWAL << endl;
    }
    else if(withdraw_amount > account_balance)
    {
        cout << "Insufficient funds." << endl;
        cout << "Do you want to withdraw $" << withdraw_amount << " with a service charge of $" << INSUFFICIENT_FUNDS_CHARGE << "? (Y/N): ";
        char choice;
        cin >> choice;
        if(choice == 'Y' || choice == 'y')
        {
            account_balance -= INSUFFICIENT_FUNDS_CHARGE;
            cout << "\nWithdrawal successful. Remaining balance: $" << account_balance << endl;
        }
        else
        {
            cout << "Withdrawal canceled." << endl;
        }
    }
    else if
    (withdraw_amount > SERVICE_CHARGE_THRESHOLD)
    {
        double serviceCharge = (withdraw_amount - SERVICE_CHARGE_THRESHOLD) * SERVICE_CHARGE_PERCENTAGE;
        cout << "Service charge: $" << serviceCharge << endl;
        account_balance -= (withdraw_amount + serviceCharge);
        cout << "Withdrawal successful. Remaining balance: $" << account_balance << endl;
    }
    else
    {
        account_balance -= withdraw_amount;
        cout << "Withdrawal successful. Remaining balance: $" << account_balance << endl;
    }

    return 0;
}
