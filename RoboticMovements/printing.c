
#include "definitions.h"

void Display_ARMs(void){
    printf("\nThe Right ARM : \n");
    printf("\nRight ARM Shoulder volt :     %i",RA.S.volt);
    printf("\nRight ARM Shoulder Degree : %i",RA.S.degree);
    printf("\nRight ARM Elbow Volt      : %i",RA.S.e->volt);
    printf("\nRight ARM Elbow Degree    : %i",RA.S.e->degree);
    printf("\nRight ARM Wrist Volt      : %i",RA.S.e->w->volt);
    printf("\nRight ARM Wrist degree    : %i",RA.S.e->w->degree);
    printf("\nRight ARM Finger volt     : %i",RA.S.e->w->f->volt);
    printf("\nRight ARM Finger degree   : %i",RA.S.e->w->f->degree);
    printf("\nThe Left ARM : \n");
printf("\nLeft ARM Shoulder volt :     %i",LA.S.volt);
    printf("\Left ARM Shoulder Degree : %i",LA.S.degree);
    printf("\Left ARM Elbow Volt      : %i",LA.S.e->volt);
    printf("\nLeft ARM Elbow Degree    : %i",LA.S.e->degree);
    printf("\nLeft ARM Wrist Volt      : %i",LA.S.e->w->volt);
    printf("\nLeft ARM Wrist degree    : %i",LA.S.e->w->degree);
    printf("\nLeft ARM Finger volt     : %i",LA.S.e->w->f->volt);
    printf("\nLeft ARM Finger degree   : %i",LA.S.e->w->f->degree);

}
