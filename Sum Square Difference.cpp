long long int square_of_sums(long long int num){

    int sum = (num* (num+1))/2;
    return sum*sum;

}

long long int sum_of_squares(long long int num){

    return num*(num + 1)*(2*num + 1)/6;

}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        cout<<square_of_sums(n)-sum_of_squares(n)<<endl;

    }
    return 0;
}
