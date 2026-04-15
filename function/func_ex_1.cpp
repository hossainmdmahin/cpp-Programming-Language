#include<iostream>
#include<conio.h>
using namespace std;

void add_number(int a, int b){
    int result;
    result = a + b;
    cout << "The sum is: " << result << endl;
}

int main(){
    int x, y;

    cout << "Enter your first number: ";
    cin >> x;

    cout << "Enter your second number: ";
    cin >> y;

    add_number(x, y);

    getch();
}
