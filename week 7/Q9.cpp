void reverse(char *s) {
    int len = strlen(s);
    for (int i = 0; i < len / 2; i++){
        swap(s[i], s[len - 1 - i]);
    }
}