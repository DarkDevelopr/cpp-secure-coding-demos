#include<iostream>
#include<vector>
using namespace std;
int main() {
    vector<int> numbers = {1,2,3,4,5};
    for (auto& a : numbers) {
        a*=2;
    }
    for (const auto& b : numbers) {
        cout << b << " ";
    }
    return 0;
}