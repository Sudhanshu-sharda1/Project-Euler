long long int gcd(long long int a, long long int b){
    if(b==0)
        return a;
    return gcd(b, a%b);
}

long long int lcm(long long int a, long long int b){
    return (a*b)/gcd(a,b);
}
int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        long long int result = 1;
        for(int i=2; i<=n; i++){
            result = lcm(result, i);

        }
        cout<<result<<endl;
    }
    return 0;
}
