#include<iostream>
#include<string>
#include<array>
using namespace std;
int main(){
    string name = "";
    cin >> name;
    if(name.empty()) {
        cout << "null";
        return 1;
    }
    cout << name.length() << endl;

    for(int i = name.length()-1; i>=0;i--){
        cout << name.at(i);
    }
    return 0;
}