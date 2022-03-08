void printArrow(int n, bool left){
    if (left == false){
        for (int i = n; i >= 1; i--){
            for (int k = 1; k <= 2 * (n - i); k++){
                cout << " ";
            }
            for (int j = 1; j <= i; j++){
                cout << "*";
            }
            cout << endl;
        }
        for (int i = 2; i <= n; i++){
            for (int k = 2 * (n - i); k >= 1; k--){
                cout << " ";
            }
            for (int j = 1; j <= i; j++){
                cout << "*";
            }
            cout << endl;
        }
    }
    else {
        for (int i = n; i >= 1; i--){
            for (int k = i - 1; k >= 1; k--){
                cout << " ";
            }
            for (int j = i; j >= 1; j--){
                cout << "*";
            }
            cout << endl;
        }
        for (int i = 2; i <= n; i++){
            for (int k = i - 1; k >= 1; k--){
                cout << " ";
            }
            for (int j = 1; j <= i; j++){
                cout << "*";
            }
            cout << endl;
        }
    }
}