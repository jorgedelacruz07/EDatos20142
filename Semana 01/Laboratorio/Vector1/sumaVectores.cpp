/*
 * Programa: Suma de vectores, no necesariamente del mismo tamaño. Usar librería 'vector'
 *
 *
 * Author: Jorge de la Cruz
 * Fecha: 23/08/14
 *
 *
*/
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include "vector1.h"
#include "vector1.cpp"

void sumarVectores(int x[max], int y[max], int z[max], int *dim1, int *dim2, int *dimSuma);

using namespace std;

int main()
{
   int a[max],b[max],c[max],n1,n2,n3,opt;
   menu:
   system("cls");
   printf("MENU\n");
   printf("[1] Crear vector 1\n");
   printf("[2] Leer vector 1\n");
   printf("[3] Mostrar vector 1\n");
   printf("[4] Crear vector 2\n");
   printf("[5] Leer vector 2\n");
   printf("[6] Mostrar vector 2\n");
   printf("[7] Crear vector Suma\n");
   printf("[8] Mostrar vector Suma\n");
   printf("[9] Salir\n");
   printf("\nElija su opcion: ");
   scanf("%d", &opt);
   switch(opt){
      case 1:
         system("cls");
         crearVector(a, &n1);
         system("pause");
         goto menu;
         break;
      case 2:
         system("cls");
         leerVector(a, &n1);
         system("pause");
         goto menu;
         break;
      case 3:
         system("cls");
         mostrarVector(a, &n1);
         system("pause");
         goto menu;
         break;
      case 4:
         system("cls");
         crearVector(b, &n2);
         system("pause");
         goto menu;
         break;
      case 5:
         system("cls");
         leerVector(b, &n2);
         system("pause");
         goto menu;
         break;
      case 6:
         system("cls");
         mostrarVector(b, &n2);
         system("pause");
         goto menu;
         break;
      case 7:
         system("cls");
         crearVector(c, &n3);
         system("pause");
         goto menu;
         break;
      case 8:
         system("cls");
         sumarVectores(a,b,c,&n1,&n2,&n3);
         system("pause");
         goto menu;
         break;
      case 9:
         break;
      default:
         printf("Ingrese numero correcto (1-9)");
   }
   system("pause");
   return 0;
}

void sumarVectores(int x[max], int y[max], int z[max], int *dim1, int *dim2, int *dimSuma){
   int i, j;
   printf("Vector 1\n");
   for(i=0;i<*dim1;i++){
      printf("%d ",x[i]);
   }
   printf("\n\nVector 2\n");
   for(i=0;i<*dim2;i++){
      printf("%d ",y[i]);
   }
   if(*dim1==*dim2){
         *dimSuma=*dim1;
         if(*dimSuma<max){
            printf("\n\nVector suma\n");
            for(i=0;i<*dimSuma;i++){
               z[i]=x[i]+y[i];
               printf("%d ",z[i]);
            }
            printf("\n\n");
         }
         else{
            printf("Dimension fuera de rango\n");
         }
   }
   else{
      printf("\n\nSolo se pueden sumar vectores con igual dimension\n");
   }
}
