#include <iostream>
#include <vector>
using namespace std;

int main() {
    bool correct = true;
    vector<float> prices {2.5, 4.25, 3.0, 10.0};
    vector<int> items {1, 1, 0, 3};
    float sum = 0;
    for (int i = 0; i < items.size(); i++)
    {
        if (items[i] + 1 > prices.size()) correct = false;
        sum += prices[items[i]];
    }
    if (correct) {
        cout << "Cost: " << sum << "\n";
    } else {
        cout << "Incorrect input!\n";
    }
    system("pause");
}