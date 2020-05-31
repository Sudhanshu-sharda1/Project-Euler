int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        long long int n;
        cin >> n;
        long long int factor = 2;
        while(factor*factor <= n){
            if(n%factor == 0){
                n = n/factor;
            }
            else{
                if(factor == 2){
                    factor++;
                }
                else
                    factor = factor + 2;
            }
        } 
        cout<<n<<endl;

    }
    return 0;
}
