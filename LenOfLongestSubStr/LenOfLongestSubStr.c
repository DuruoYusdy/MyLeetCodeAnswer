int lengthOfLongestSubstring(char* s) {
    if (*s == '\0') return 0;
    char* back=s;
    char* front=back+1;
    int Tegn[128];
    for(int i=0;i<128;++i){
        Tegn[i]=-1;
    }
    Tegn[*back]=back-s;
    int max=1;
    while((*front)!='\0'){
        char *last = s + Tegn[*front];
        if(last>=back) {
            back=last+1;
        }
        max=(max>=(front-back+1))?max:(front-back+1);
        Tegn[*front]=front-s;
        front++;
    }
    return max;
}
