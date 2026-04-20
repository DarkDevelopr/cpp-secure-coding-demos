#include<iostream>
#include<array>
using namespace std;
int main(){
    array<int, 5> arr = {4,5,6,88,99};
    int index;
    cin >> index;
    try{
        cout << arr.at(index) << endl;
    }
    catch (std::out_of_range& e){
        cout << "invalid index";
        return 1;
    }

}