// Name: Sarthak Marwah
// Reg. No.: RA2111003010410
// Section: F1

#include <stdio.h>
#include <string.h>
int main(){
    FILE *fr;

    int id,litres;
    float rate,amt,tamt,surcharge;
    char name[50];

    fr = fopen("Water bill", "w");

    // Taking input from user
    printf("Customer name: ");
    scanf("%s",&name[50]);
    printf("Customer id: ");
    scanf("%d",&id);
    printf("litres Consumed: ");
    scanf("%d",&litres);

    // Conditions
    if(litres<=1000){
        rate=0.35;
    }
    else if(litres>1000&&litres<=2500){
        rate=1.59;
    }
    else if(litres>2500&&litres<=3500){
        rate=2.3;
    }
    else if(litres>3500&&litres<=4500){
        rate=2.99;
    }
    else if(litres>4500&&litres<=5500){
        rate=3.5;
    }
    else{
        rate=4;
    }
    tamt=litres*rate;
    if(tamt>2500){
        surcharge=tamt*0.15;
    }
    amt=tamt+surcharge;

    // Saving data in file
    fprintf(fr,"\n****Water Bill****\n");
    fprintf(fr,"Customer name:\t%s\n",name);
    fprintf(fr,"Customer id:\t %d\n",id);
    fprintf(fr,"Litres Consumed:\t %d\n",litres);
    fprintf(fr,"Amount charge %.2f per litres:\t %.2f\n",rate,tamt);
    fprintf(fr,"Surcharge:\t %.2f\n",surcharge);
    fprintf(fr,"Total amount:\t %.2f\n",amt);
    fclose(fr);
    return 0;
}