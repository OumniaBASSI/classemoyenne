#include <stdio.h>
#include <stdlib.h>

int main()
{
int i,j,a,b,k;
float max,min,tt,tc1[5],tc2[5],T[10],TT;
//saisi des note du classe 1
printf("veuiller saisir les note du classe 1\n");
printf("***************************************\n");
for(i=0;i<5;i++){
    printf("note %d :\n",i+1);
    scanf("%f",&tc1[i]);
    }
for(i=0;i<5;i++){
        printf("les note du classe 1 :\n");
        printf("note %d : %f\n",i+1,tc1[i]);
}
//saisi des note du classe 2
printf("***************************************\n");
printf("veuiller saisir les note du classe 2\n");
printf("***************************************\n");

for(i=0;i<5;i++){
    printf("note %d :\n",i+1);
    scanf("%f",&tc2[i]);
    }
for(i=0;i<5;i++){
        printf("les note du classe 2 :\n");
        printf("note %d : %f\n",i+1,tc2[i]);
}
//plus grande moyenne class 1
max=0;
max=tc1[0];
for(i=0;i<5;i++){
if(max<tc1[i])
    max=tc1[i];
}
printf("***************************************\n");
printf("la plus grande moyenne du classe 1 est %f :\n",max);

//plus grande moyenne class 2
max=0;
max=tc2[0];
for(i=0;i<5;i++){

if(max<tc2[i])
    max=tc2[i];
}
printf("***************************************\n");
printf("la plus grande moyenne du classe 2 est %f :\n",max);
//la plus petite moyenne du classe 1
min=0;
 min=tc1[0];
for(i=0;i<5;i++){
if(min>tc1[i])
    min=tc1[i];
}
printf("***************************************\n");
printf("la plus petite moyenne du classe 1 est %f :\n",min);

//la plus petite moyenne du classe 2
min=0;
  min=tc1[0];
for(i=0;i<5;i++){

if(min>tc2[i])
    min=tc2[i];
}
printf("***************************************\n");
printf("la plus petite moyenne du classe 2 est %f :\n",min);

a=0;
for(i=0;i<5;i++){
  if(tc1[i]>=10)
  a++;
}
printf("***************************************\n");
printf("le nombre d eleve de la classe 1 ayant une moyenne superieur a 10 est: %d\n",a);

b=0;
for(i=0;i<5;i++){
  if(tc2[i]>=10)
  b++;
}
printf("***************************************\n");
printf("le nombre d eleve de la classe 2 ayant une moyenne superieur a 10 est: %d\n",b);

 //les 2 tab
 for(i=0;i<5;i++){
    T[i]=tc1[i];

 }
 for(i=0,j=5;j<10 && i<5;i++,j++){
    T[j]=tc2[i];
 }
 printf("***************************************\n");
 printf("tableau contenant les note des 2 classes\n");
 printf("*******************************************\n");
 for(i=0;i<10;i++){
    printf("note %d :\n %f\n",i+1,T[i]);

 }
 // tri du tableau
 for(i=0;i<10;i++){
         for(k=i+1;k<10;k++){
             if(T[i]>T[k]){
             TT=T[i];
             T[i]=T[k];
             T[k]=TT;
             }
         }
 }
 printf("*********************************************\n");
printf("les note par ordre decroissant :\n");
printf("********************************************\n");
 for(i=0;i<10;i++){
        printf("note %d : %f\n",i+1,T[i]);
 }
    return 0;
}
