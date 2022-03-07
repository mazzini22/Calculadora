#include <stdio.h>
#include <conio.h>
#include <math.h>
#include<stdlib.h>


int main()
{
    inicio:
    system("clear");
    float a,b,c,d,soma,sub,mult,divi,raiz,pot;
    printf("Seja bem vindo(a) ao programa calculadora do Breno\n");
    printf("Qual operação você deseja fazer?\n");
    printf("1-soma\n, 2-subtração\n,3-multiplicação\n, 4-divisão\n, 5-raiz\n, 6-potência\n");
    scanf("%f",&c);
    if(c==1)
    {
        printf("Somando\n");
        printf("Digite o primeiro número:\n");
        scanf("%f",&a);
          printf("Digite o segundo número:\n");
        scanf("%f",&b);
        soma=a+b;
        printf ("O resultado da soma é %f\n", soma);

}
   if(c==2)
   {
       printf("subtraindo\n");
        printf("Digite o primeiro número:\n");
        scanf("%f",&a);
          printf("Digite o segundo número:\n");
        scanf("%f",&b);
        sub=a-b;  
        printf("o resultado da subtração é: %f\n", sub);
        
   }
   if(c==3)
   {
      printf("Multiplicando\n");
        printf("Digite o primeiro número:\n");
        scanf("%f",&a);
          printf("Digite o segundo número:\n");
        scanf("%f",&b);
        mult=a*b; 
         printf ("O resultado da multiplicação é %f\n", mult);
   }
   if(c==4)
   {
      printf("Dividindo\n");
        printf("Digite o primeiro número:\n");
        scanf("%f",&a);
          printf("Digite o segundo número:\n");
        scanf("%f",&b);
        divi=a/b;
        printf ("O resultado da divisão é %f\n", divi);  
   }
   if(c==5)
   {
    printf("Radiciando\n");
        printf("Digite o número do radicando:\n");
        scanf("%f",&a);
         printf("Digite o número do indice\n");
        scanf("%f",&b);
        raiz=pow(a,1/b);
        printf ("A raiz de %f é %f\n",a,raiz);     
   }
   if(c==6)
   {
       printf("Elevando um número\n");
        printf("Digite o número da base:\n");
        scanf("%f",&a);
        printf("Digite o número do indice:\n");
        scanf("%f",&b);
        pot=pow(a,b);
        printf ("%f^%f=%f",a,b, pot);     
  
   }
   printf( "deseja utilizar a calculadora novamente?\n");
   printf("8-Sim\n,7-Não\n");
   scanf("%f", &d);
   if(d==8)
   {
       goto inicio;
   }
   if(d==7)
   {
   printf("Ok, obrigado por usar esta calculadora :)");
   }
    }