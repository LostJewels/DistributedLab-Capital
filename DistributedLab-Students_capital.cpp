#include <iostream>
#include <vector>
#include <limits>

using namespace std;

int main() {
    int N, C;
    cout << "Enter the maximum number of laptops: ";
    while (!(cin >> N)) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input. Please try again: ";
    }
    cout << "Enter the initial capital: ";
    while (!(cin >> C)) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input. Please try again: ";
    }
    vector<int> buyPrices(N);
    int totalBuyPrice = 0;
    cout << "Enter the buy price for each laptop separated by space: ";
    for (int i = 0; i < N; i++) {
        int price;
        while (!(cin >> price)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please try again: ";
        }
        buyPrices[i] = price;
        totalBuyPrice += price;
    }
    // Проверка, что сумма цен покупки не превышает начальный капитал
    if (totalBuyPrice > C) {
        cout << "Total buy price exceeds initial capital." << endl;
        return 1;
    }
    vector<int> expectedProfits(N);
    int totalExpectedProfit = 0;
    cout << "Enter the expected profit for each laptop separated by space: ";
    for (int i = 0; i < N; i++) {
        int profit;
        while (!(cin >> profit)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please try again: ";
        }
        expectedProfits[i] = profit;
        totalExpectedProfit += profit;
    }
    int finalCapital = C + totalExpectedProfit;
    cout << "Capital after the end of the summer: " << finalCapital << endl;
    return 0;
}