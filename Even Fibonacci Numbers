/*
  Solution to Project Euler #2: Even Fibonacci Numbers
  
  Every 3rd number is an even number which satisfies the series.
  E(x) = 4*E(x-1) + E(x-2)
*/

#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        long long int n;
        cin >> n;
        long long int a = 0;
        long long int b = 2;
        long long int c = 4*b+a , sum=2;
        while(c < n){
            sum += c;
            a=b;
            b=c;
            c=4*b+a;
        }
       cout<<sum<<endl;
    }
    return 0;
}
