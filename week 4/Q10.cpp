string toLower (string s){
    int len = s.size();
    for (int i = 0; i < len; i++){
        s[i] = tolower(s[i]);
    }
    return s;
}