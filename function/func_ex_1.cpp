#include<iostream>
#include<conio.h>
using namespace std;

void add_number(int a, int b){
    int result1;
    result1 = a + b;
    cout << "The sum is: " << result1 << endl;
}

// function definition
int rectangle(int x, int y) {

    return x * y;
    cout << "The rectangle area is: " << x * y << endl;

}


int main(){
    int x, y;

    cout << "Enter your first number: ";
    cin >> x;

    cout << "Enter your second number: ";
    cin >> y;


    add_number(x, y);

    int area = rectangle(x, y);
    cout << "The rectangle area is: " << area << endl;

    getch();
}
