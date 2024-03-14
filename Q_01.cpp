#include <iostream>
#include <iomanip>

using namespace std;

int main() 
{
    double total_miles, cost_per_gallon, avg_miles_per_gallon, parking_fees, tolls;

    // Input section
    cout << "Enter total miles driven per day: ";
    cin >> total_miles;

    cout << "Enter cost per gallon of gasoline: $";
    cin >> cost_per_gallon;

    cout << "Enter average miles per gallon: ";
    cin >> avg_miles_per_gallon;

    cout << "Enter parking fees per day: $";
    cin >> parking_fees;

    cout << "Enter tolls per day: $";
    cin >> tolls;

    // Calculation
    double fuelCost = (total_miles / avg_miles_per_gallon) * cost_per_gallon;
    double totalCost = fuelCost + parking_fees + tolls;

    // Output section
    cout << fixed << setprecision(2);
    cout << "\nDaily driving cost breakdown:\n";
    cout << "Fuel cost: $" << fuelCost << endl;
    cout << "Parking fees: $" << parking_fees << endl;
    cout << "Tolls: $" << tolls << endl;
    cout << "Total cost: $" << totalCost << endl;

    return 0;
}
