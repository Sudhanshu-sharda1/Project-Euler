/*
Solution to Project Euler #1: Multiples of 3 and 5

*Note:
      Sum of N natural numbers = N(N+1)/2
      Sum of numbers less than N that are divisible by 3 = 3 + 6 + 9 + .....
                                                         = 3 (1 + 2 + 3 + ..... + x)
                                                         = 3 ( x(x+1)/2 )
      Similarly for  multiples of 5

*/
#include<iostream>
using namespace std;

unsigned long long int sum_n(unsigned long long int num){
    return num*(num+1)/2;
}

int main(){
    int t;
    cin >> t;
    unsigned long long int n;
    while(t--){
        cin>>n;
        n--;
        auto sum3 = 3*sum_n(n/3);
        auto sum5 = 5*sum_n(n/5);
        auto sum15 = 15*sum_n(n/15);
        cout<<sum3+sum5-sum15<<endl;
    }

    return 0;
}
