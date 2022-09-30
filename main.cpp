#include <iostream>
#include <chrono>
#include <string.h>
using namespace std;

int main(){
    int age;
    string name;
    cout<<"enter your name:";
    cin >> name;

    cout<<"enter your age:";
    cin >> age;

    cout << "hello " << name << endl<< "now way you are " << age ;

    return 0;
}