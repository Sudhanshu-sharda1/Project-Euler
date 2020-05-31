#include<iostream>
using namespace std;

int isPalindrome(long long int n){
    string num = to_string(n);
    for(int i = 0; i < num.size() / 2; ++i)
        if(num[i] != num[num.size()-1-i])
            return false;
    return true;
}


int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin>>n;
        long long int max_p = 0, p;

        for(int i= 999; i>100; i--){
            for(int j=990; j>100;){
                p = i*j;
                if((p < n) && (isPalindrome(p))){
                    max_p = max(p, max_p);
                }

                if(i%11){
                    j = j -11;
                }
                else
                    j--;
                
            }

        }
        cout<<max_p<<endl;;
    }
    return 0;
}
