#include<stdio.h>
#include<math.h>
#include<float.h>


int main(){
double sumax=0;
double sumay=0;

int liczba_elem=10;

double x[10]={1,2,3,4,6,7,8,9,10};
double y[10]={-2.2e-8,1.45e-8,44.5e-8,65e-8,70e-8,87.3e-8,1,2,3};
printf(" wartosci x   ");
        for(int i=0;i<liczba_elem;i++){
            printf("%.10f ",x[i]);
            sumax= sumax + x[i];
}
printf("\n\n");

printf(" wartosci y   ");
for(int i=0;i<liczba_elem;i++){

printf("%.10f ",y[i]);
    sumay= sumay + y[i];

}
printf("\n\n");
for(int i=0;i<liczba_elem;i++){
            double sumax=0;
            sumax =sumax+ x[i];
            i=i+1;
}
double kwadrat_sumyx= sumax*sumax;
printf(" suma wartosci x   %.10f\n",sumax);
printf("kwadrat sumy wartosci x   %.10f\n",kwadrat_sumyx);
printf("\n\n");
double sredni_kwadrat_sumyx= kwadrat_sumyx/(liczba_elem*liczba_elem);
printf("                            sredni kwadrat sumy wartosci x   %.10f\n",sredni_kwadrat_sumyx);

    printf("\n\n");
double kwadrat_sumyy= sumay*sumay;
printf("\n");
printf(" suma wartosci y   %.10f\n", sumay);
printf(" kwadrat sumy wartosci y   %.10f\n",kwadrat_sumyy);
double sredni_kwadrat_sumyy= kwadrat_sumyy/(liczba_elem*liczba_elem);
printf("                            sredni kwadrat sumy wartosci y   %.10f\n",sredni_kwadrat_sumyy);



printf("\n\n");
double suma_iloczynow_tab[liczba_elem];
double suma_iloczynow=0;
for(int i=0;i<liczba_elem;i++){
            suma_iloczynow_tab[i]=x[i]*y[i];
suma_iloczynow=suma_iloczynow +suma_iloczynow_tab[i];

}


printf(" suma iloczynow wynosi %.10f\n",suma_iloczynow);

printf("\n\n");
double srednia_suma_iloczynow;
srednia_suma_iloczynow=suma_iloczynow/liczba_elem;
printf("                              srednia suma iloczynow wynosi   %.10f",srednia_suma_iloczynow);
 printf("\n\n");


printf("\n\n");


   double srednix;
     srednix=sumax/liczba_elem;
    printf("                              wartosc srednia x   %.10f",srednix);
    printf("\n\n");
double sredniy;
     sredniy=sumay/liczba_elem;
    printf("                              wartosc srednia y   %.10f",sredniy);
    printf("\n\n");
double suma_kwadratowx=0;
        for(int i=0;i<liczba_elem;i++){
            x[i]=x[i]*x[i];

            suma_kwadratowx= suma_kwadratowx + x[i];
}
printf(" suma kwadratow x   %.10f", suma_kwadratowx);
printf("\n\n");
double srednia_suma_kwadratowx= suma_kwadratowx/liczba_elem;
printf("                              srednia suma kwadratow x   %.10f", srednia_suma_kwadratowx);
printf("\n\n");
double suma_kwadratowy=0;

        for(int i=0;i<liczba_elem;i++){
            y[i]=y[i]*y[i];

            suma_kwadratowy= suma_kwadratowy + y[i];
}
printf(" suma kwadratow y   %.10f", suma_kwadratowy);
printf("\n\n");
double srednia_suma_kwadratowy= suma_kwadratowy/liczba_elem;
printf(" srednia suma kwadratow y   %.10f", srednia_suma_kwadratowy);
printf("\n\n");
// wspolczynniki :
double wartosc_a=(srednia_suma_iloczynow-srednix*sredniy)/(srednia_suma_kwadratowx-sredni_kwadrat_sumyx);
printf("                                wspolczynnik kierunkowy prostej wynosi :%.10f\n\n",wartosc_a);

double wartosc_b=sredniy-wartosc_a*srednix;
printf("                                wspolczynnik b prostej wynosi :%.10f\n\n",wartosc_b);

double niepewnosc_a_gora =(srednia_suma_kwadratowy-wartosc_a*srednia_suma_iloczynow-wartosc_b*sredniy);

double niepewnosc_a_dol =(((double)liczba_elem-2)*(srednia_suma_kwadratowx-sredni_kwadrat_sumyx));
double niepewnosc_a = sqrt(niepewnosc_a_gora/niepewnosc_a_dol);

printf("                                niepewnosc a wynosi : %.10f ",niepewnosc_a);
printf("\n\n");
printf("*************************************************************************\n");
printf("your parameter a is:  (%e  +/-  %e)  *\n\n",wartosc_a,niepewnosc_a);
printf("*************************************************************************\n");

return 1;

}




