#include<iostream>
using namespace std;


 int factorial(int n){

    int fact = 1;

    for(int i = 0; i <= n; i++){
        fact = fact * i;
    }

    return fact;
}

int nCr(int n, int r){
    int num = factorial(n);

    int den = factorial(r) * factorial(n-r);

    int ans = num/den;

    return ans;
    }
int main(){

    int n,r;
    
    cout<< "Enter n: ";
    cin>> n;

    cout<< "Enter r: ";
    cin>> r;

    cout<< "Answer is: "<<nCr(n,r);

}