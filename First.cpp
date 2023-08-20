#include <iostream>
#include <vector>
using namespace std;

void del_value(vector<int>& vec, const int num) {
    vector<int> newVec;
    for (int i = 0; i < vec.size(); i++)
        if (vec[i] != num) newVec.push_back(vec[i]);
    vec = newVec; 
}

int main() {
    int n, delN;
    cout << "Input vector size: ";
    cin >> n;
    vector<int> vec(n);
    cout << "Input numbers: ";
    for (int i = 0; i < n; i++)
        cin >> vec[i];
    cout << "Input number to delete: ";
    cin >> delN;
    del_value(vec, delN);
    cout << "Result: ";
    for (int i = 0; i < vec.size(); i++)
        cout << vec[i] << " ";
    cout << "\n";
    system("pause");
}