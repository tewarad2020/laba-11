#include<iostream>

using namespace std;

int fibonacci(int);

int main(){
    int x;
    cin >> x;
    cout << fibonacci(x);
    return 0; 
}
int fibonacci(int x) {
    int sum = 0;
    if (x == 0) sum = 0;
    if (x == 1) sum = 1;
    if (x > 1) sum += fibonacci(x-1) + fibonacci(x-2);
    return sum;
}
