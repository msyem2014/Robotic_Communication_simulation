#include "definitions.h"

 //NULL (void*)0
void Connect_ARMs (void){
    RA.S.e = & RA.E;
    RA.E.w = & RA.W;
    RA.W.f = & RA.f;
    LA.S.e = & LA.E;
    LA.E.w = & LA.W;
    LA.W.f = & LA.f;
}

void Connect_Legs(void){
    LL.WE.k = &LL.K;
    LL.K.a  = &LL.A;
    RL.WE.k = &RL.WE;
    RL.K.a  = &RL.A;
}
