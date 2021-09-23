char *mx_strncpy(char *dst, const char *src, int len) {
    int i;
    for (i = 0; i < len; i++) {
        dst[i] = src[i];
        
        if (src[i] == '\0' || dst[i] == '\0') {
            return dst;
        }
            
         
    }
    dst[len] = '\0';
    return dst;
}
