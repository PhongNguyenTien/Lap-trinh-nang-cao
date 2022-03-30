bool isAlpha(char x){
    if ((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z')) return true;
    return false;
}

void rFilter(char *s) {
    int len = strlen(s);
    for (int i = len - 1; i >= 0; i--){
        if (isAlpha(s[i]) == false){
            s[i] = '_';
        }
    }   
}