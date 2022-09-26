#include <stdio.h>

int main(){

    int FrangoDisp, BifeDisp, MassaDisp;
    int FrangoPed, BifePed, MassaPed;
    int res = 0;

    scanf("%d %d %d", &FrangoDisp, &BifeDisp, &MassaDisp);
    scanf("%d %d %d", &FrangoPed, &BifePed, &MassaPed);


    if (FrangoPed > FrangoDisp)
        res += FrangoPed - FrangoDisp;
    
    if (BifePed > BifeDisp)
        res += BifePed - BifeDisp;
    
    if (MassaPed > MassaDisp)
        res += MassaPed - MassaDisp;
    
    printf("%d\n", res);
    return 0;
}