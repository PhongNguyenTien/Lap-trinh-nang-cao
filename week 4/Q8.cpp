void readArray(int a[], int n){
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
}

bool compareArray(int array1[], int array2[], int n){
    readArray(array1, n);
    readArray(array2, n);
    for (int i = 0; i < n; i++){
        if (array1[i] != array2[i]) return false;
        break;
    }
    return true;
}