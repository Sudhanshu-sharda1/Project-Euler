
void SieveOfEratosthenes(int n, int k) 
{ 
    bool prime[n+1]; 
    memset(prime, true, sizeof(prime)); 
  
    for (int p=2; p*p<=n; p++) 
    { 
        if (prime[p] == true) 
        { 
            for (int i=p*p; i<=n; i += p) 
                prime[i] = false; 
        } 
    } 
    int count = 0;
    for (int p=2; p<=n; p++){
        if (prime[p])
            {
                count++;
                if(count == k)
                    cout<<p<<endl;
            }
    }
          
} 
int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        SieveOfEratosthenes(105000, n);

    }
    return 0;
}
