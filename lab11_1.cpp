#include<iostream>

using namespace std;

long long int fibonacci(long long int);

int main(){
    long long int x;
    cout << fibonacci(50);
    return 0; 
}
long long int fibonacci(long long int x) {
    long long int sum = 0;
    if (x == 0) sum = 0;
    if (x == 1) sum = 1;
    if (x > 1) sum += fibonacci(x-1) + fibonacci(x-2);
    return sum;
}
