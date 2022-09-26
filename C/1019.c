#include <stdio.h>
 
int main() {
 
    int t, h, m, s, hs;
    hs = 3600;

    scanf("%d", &t);

    h = (t/hs);
    m = (t - (hs*h))/60;
    s = (t-(hs*h)-(m*60));

    printf("%d:%d:%d\n", h,m,s);
    return 0;
}