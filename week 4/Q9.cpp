void sortAscending(float array[], int size){
    for (int i = 0; i < size - 1; i++){
        for (int j = 0; j < size - i - 1; j++){
            if (array[j] > array[j + 1]) swap(array[j], array[j + 1]);
        }
    }
}

void sortNotAscending(float array[], int size){
    for (int i = 0; i < size - 1; i++){
        for (int j = 0; j < size - i - 1; j++){
            if (array[j] < array[j + 1]) swap(array[j], array[j + 1]);
        }
    }
}

void sort(float array[], int size, bool isAscending){
    if (isAscending == true) sortAscending(array, size);
    else sortNotAscending(array, size);
}
