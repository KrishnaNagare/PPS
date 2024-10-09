#include <iostream>

using namespace std;

int main() {
int chips = 7;
int chocolates = 4;
int sodas = 6;
int totalItems = chips + chocolates + sodas;
int costPerChip = 30;
int costPerChocolate = 70;
int costPerSoda = 50;
int totalCost = (chips * costPerChip) + (chocolates *
costPerChocolate) + (sodas * costPerSoda);
// Output the results
cout << "Total Number of Items: " << totalItems << endl;
cout << "Total Cost: " << totalCost << " Rupees" << endl;
return 0;
}