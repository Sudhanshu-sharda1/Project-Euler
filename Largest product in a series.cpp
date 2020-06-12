#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        int k;
        cin >> n >> k;
        string num;
        cin >> num;

        long long int product = 1, max_product = INT_MIN;
        int length = num.size();
        for(int i=0; i<k; i++){
            string s(1, num[i]);
            product = product * stoi(s);
            //cout<<product<<" ";
        }
        //cout<<product<<" ";
        max_product = max(product, max_product);

        int i = 0, j = k;
        for(int i=1; i< n-k+1; i++){
            if(!product && num[i - 1] == '0'){
                product = 1;
                for (int j = i; j < k + i; ++j){
                    product = product * (int)(num[j] - '0');
                }
            max_product = max(product, max_product);
            }
            else{
                product = product / (int)(num[i - 1] - '0');
                product = product * (int)(num[i + k - 1] - '0');
                max_product = max(product, max_product);
        }
        }
        cout<<max_product<<endl;
    }
    return 0;
}
