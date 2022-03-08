long long int factorial(int n){
    long long int fac = 1;
    for (int i = 1; i <= n; i++){
        fac *= i;
    }
    return fac;
}