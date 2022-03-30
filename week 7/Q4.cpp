int* getPointerToArray(int n){
    int* pArray;
    pArray = new int[n];
    for (int i = 0; i < n; i++){
        cin >> pArray[i];
    }
    return pArray;
}