#include "definitions.h"

void OS (void){

printf("Please Enter the Part you want to move : ");
printf("\n1.ARM\n2.Leg\n");
int choice;
scanf("%i",&choice);
switch (choice){
case 1:
    printf("Please Enter the Direction : \n");
    printf("\n1.Right Arm\n2.Left ARM\n");
    scanf("%i",&choice);
    switch(choice){
case 1:
    printf("You Chose Right ARM : \n");
    printf("Please choose the joint : ");
    printf("\n1.Shoulder\n2.Elbow\n3.Wrist\n4.finger\n");
    scanf("%i",&choice);
    switch(choice){
case 1:
    printf("\n You Chose the Shoulder : \n");
    printf("\n Want to change Volt or Degree ? ");
    printf("\n1.Volt\n2.Degree");
    scanf("%i",&choice);
    switch(choice){
case 1:
    printf("Please enter the value : ");
    scanf("%i",&choice);
    RA.S.volt=choice;
    break;
case 2:
    printf("Please enter the value : ");
    scanf("%i",&choice);
    RA.S.degree=choice;
    break;}
    break;
case 2:
    printf("\n You Chose the Elbow: \n");
    printf("\nWant to change volt or Degree ? ");
    printf("\n1.Volt\n2.Degree\n");
    scanf("%i",&choice);
    switch(choice){
case 1:
     printf("Please enter the value : ");
    scanf("%i",&choice);
    RA.S.e->volt=choice;
    break;
case 2:
     printf("Please enter the value : ");
    scanf("%i",&choice);
    RA.S.e->degree=choice;
    break;
    }

    break;
case 3 :
    printf("\n You Chose the Wrist : \n");
    printf("\nWant to change volt or Degree ? ");
    printf("\n1.Volt\n2.Degree\n");
    scanf("%i",&choice);
    switch(choice){
case 1:
     printf("Please enter the value : ");
    scanf("%i",&choice);
    RA.S.e->w->volt=choice;
    break;
case 2:
     printf("Please enter the value : ");
    scanf("%i",&choice);
    RA.S.e->w->degree=choice;
    break;
    }

    break;
case 4:
    printf("\n You Chose the finger : \n");
    printf("\nWant to change volt or Degree ? ");
    printf("\n1.Volt\n2.Degree\n");
    scanf("%i",&choice);
    switch(choice){
case 1:
     printf("Please enter the value : ");
    scanf("%i",&choice);
    RA.S.e->w->f->volt=choice;
    break;
case 2:
     printf("Please enter the value : ");
    scanf("%i",&choice);
    RA.S.e->w->f->degree=choice;
    break;
    }

    break;
    }
    break;
case 2 :
    printf("You Chose Left ARM : \n");
    printf("Please choose the joint : ");
    printf("\n1.Shoulder\n2.Elbow\n3.Wrist\n4.finger\n");
    scanf("%i",&choice);
    switch(choice){
case 1:
    printf("\n You Chose the Shoulder : \n");
    printf("\n Want to change Volt or Degree ? ");
    printf("\n1.Volt\n2.Degree");
    scanf("%i",&choice);
    switch(choice){
case 1:
    printf("Please enter the value : ");
    scanf("%i",&choice);
    LA.S.volt=choice;
    break;
case 2:
    printf("Please enter the value : ");
    scanf("%i",&choice);
    LA.S.degree=choice;
    break;}
    break;
case 2:
    printf("\n You Chose the Elbow: \n");
    printf("\nWant to change volt or degree ? ");
    scanf("%i",&choice);
    switch(choice){
case 1 :
    printf("Please enter the value : ");
    scanf("%i",&choice);
    LA.S.e->volt=choice;
    break;
case 2 :
     printf("Please enter the value : ");
    scanf("%i",&choice);
    LA.S.e->degree=choice;
    break;
    }
    break;
case 3 :
    printf("\n You Chose the Wrist : \n");
    printf("\nWant to change volt or degree ? ");
    scanf("%i",&choice);
    switch(choice){
case 1 :
    printf("Please enter the value : ");
    scanf("%i",&choice);
    LA.S.e->w->volt=choice;
    break;
case 2 :
     printf("Please enter the value : ");
    scanf("%i",&choice);
    LA.S.e->w->degree=choice;
    break;
    }
    break;
case 4:
    printf("\n You Chose the finger : \n");
    printf("\nWant to change volt or degree ? ");
    scanf("%i",&choice);
    switch(choice){
case 1 :
    printf("Please enter the value : ");
    scanf("%i",&choice);
    LA.S.e->w->f->volt=choice;
    break;
case 2 :
     printf("Please enter the value : ");
    scanf("%i",&choice);
    LA.S.e->w->f->degree=choice;
    break;
    }
    break;
    }
    break;
    }
    break;
case 2 :
    printf("\nPlease enter the direction : \n");
    printf("\n1.Right Leg\n2.LeftLeg\n");
    scanf("%i",&choice);
    switch(choice){
case 1:
    printf("You Chose Right Leg : \n");
    printf("Please Enter the Joint \n");
    scanf("%i",&choice);
    switch(choice){
case 1 :
    printf("You choice the Waist end\n");
    break;
case 2:
     printf("You choice the knee\n");
    break;
case 3 :
     printf("You choice the Ankle\n");
    break;
    }
    break;
case 2 :
    printf("You Chose Left Leg : \n");
    printf("Please Enter the Joint \n");
    printf("\n1.WaistEnd\n2.Knee\n3.Ankle");
    scanf("%i",&choice);
    switch(choice){
case 1 :
    printf("You choice the Waist end\n");
    break;
case 2:
     printf("You choice the knee\n");
    break;
case 3 :
     printf("You choice the Ankle\n");
    break;
    }
    break;
}
    break;
    default : printf("Wrong Choice , Try Again !");
}

}
