int main(){
    int t;
    cin >> t;
    long long product, temp;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        product = -1;
        for(int a=1, b, c; a<n/3; a++){
            b = (n*n - 2*a*n)/(2*n - 2*a);
            c = n - b - a;
            if(c*c == (a*a + b*b)){
                temp = a*b*c;
                if(temp > product)
                    product = temp;
            }
        }
        cout<<product<<endl;
    }
    return 0;
}
