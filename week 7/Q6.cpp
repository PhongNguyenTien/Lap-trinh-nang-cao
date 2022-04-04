#include<algorithm>
using namespace std;
int* merge(int* firstArr, int lenArr1, int* secondArr, int lenArr2){
    int* mergeArr = new int [lenArr1 + lenArr2];
    for (int i = 0; i < lenArr1; i++){
        mergeArr[i] = firstArr[i];
    }
    for (int i = lenArr1; i < lenArr1 + lenArr2; i++){
        mergeArr[i] = secondArr[i - lenArr1];
    }
    int lenMerge = lenArr1 + lenArr2;
    if (firstArr[0] < firstArr[1]){
        for (int i = 0; i < lenMerge; i++){
            for (int j = i + 1; j < lenMerge; j++){
                if (mergeArr[i] > mergeArr[j]){
                    swap(mergeArr[i], mergeArr[j]);
                }
            }
        }
    }
    else {
        for (int i = 0; i < lenMerge; i++){
            for (int j = i + 1; j < lenMerge; j++){
                if (mergeArr[i] < mergeArr[j]){
                    swap(mergeArr[i], mergeArr[j]);
                }
            }
        }
    }
    return mergeArr;
}
