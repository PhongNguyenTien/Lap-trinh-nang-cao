bool isPrime(int n){
    if (n < 2) return false;
    if (n == 2) return true;
    if (n == 3) return true;
    if (n == 4) return false;
    if (n > 3){
        for (int i = 2; i <= n; i++){
            if (n % i == 0) return false;
            break;
        }
    }
    return true;
}