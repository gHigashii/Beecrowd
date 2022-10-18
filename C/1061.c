#include <stdio.h>

int main(){
    int d, df, h, hf, m, mf, s, sf;
    
    scanf("Dia %d", &d);
    scanf("%d : %d : %d\n", &h, &m, &s);
    scanf("Dia %d", &df);
    scanf("%d : %d : %d", &hf, &mf, &sf);
    
    s = sf - s;
    m = mf - m;
    h = hf - h;
    d = df - d;

    if (s<0)
    {
        s+=60;
        m--;
    }
    if (m<0)
    {
        m+=60;
        h--;
    }
    if (h<0)
    {
        h+=24;
        d--;
    }

    printf("%d dia(s)\n", d);
    printf("%d hora(s)\n", h);
    printf("%d minuto(s)\n", m);
    printf("%d segundo(s)\n", s);
}