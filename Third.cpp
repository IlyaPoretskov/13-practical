#include <iostream>
#include <vector>
using namespace std;

void overwriteBuffer(vector<int>& vec, int size) {
    if (vec.size() > 20) {
    vector<int> newVec;
    for (int i = vec.size() - size; i < vec.size(); i++)
        newVec.push_back(vec[i]);
    vec = newVec;
    }
}

int main() {
    vector<int> vec(20);
    int num = 0, size = vec.size();
    while(num != -2) {
        num = 0;
        while (num != -1 && num != -2) {
            cout << "input number: ";
            cin >> num;
            if (num != -1 && num != -2)
            {
                vec.push_back(num);
            }         
        }
        overwriteBuffer(vec, size);
        cout << "output: ";
        for (int i = 0; i < size; i++)
        {
            cout << vec[i] << " ";
        }
        cout << "\n";
    }
    system("pause");
}