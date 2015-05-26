#include <iostream>

using namespace std;

void greetings(){
    string name;
    cin >> name;
    cout << "Hello, "+name+"!\n" << endl;
}

int fat(int n){
    if(n==1 || n==0){
        return 1;
    }
    return n * fat(n-1);
}

int main() {
    //greetings();
    cout << fat(10);
    return 0;
}