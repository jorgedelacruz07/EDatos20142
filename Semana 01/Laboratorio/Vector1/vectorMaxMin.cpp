/*
 * Programa: Hallar el elemento máximo y el mínimo de un vector
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

void hallarMaxVector(int x[max], int *dim);
void hallarMinVector(int x[max], int *dim);

using namespace std;

int main()
{
   int a[max], na,opt;
   menu:
   system("cls");
   printf("MENU\n");
   printf("[1] Crear vector\n");
   printf("[2] Leer vector\n");
   printf("[3] Mostrar vector\n");
   printf("[3] Editar vector\n");
   printf("[4] Maximo elemento en vector\n");
   printf("[5] Minimo elemento en vector\n");
   printf("[7] Salir\n");
   printf("\nElija su opcion: ");
   scanf("%d", &opt);

   switch(opt){
      case 1:
         system("cls");
         crearVector(a, &na);
         system("pause");
         goto menu;
         break;
      case 2:
         system("cls");
         leerVector(a, &na);
         system("pause");
         goto menu;
         break;
      case 3:
         system("cls");
         mostrarVector(a,&na);
         system("pause");
         goto menu;
         break;
      case 4:
         system("cls");
         editarVector(a,&na);
         system("pause");
         goto menu;
         break;
      case 5:
         system("cls");
         hallarMaxVector(a,&na);
         system("pause");
         goto menu;
         break;
      case 6:
         system("cls");
         hallarMinVector(a,&na);
         system("pause");
         goto menu;
         break;
      case 7:
         break;
      default:
         printf("Ingrese numero correcto (1-7)");
   }

   system("pause");
   return 0;
}

void hallarMaxVector(int x[max], int *dim){
   int aux, i, j;
   if(dim>0){
      for(i=0;i<*dim-1;i++){
         for(j=i+1;j<*dim;j++){
            if(x[i]>x[j]){
               aux=x[j];
               x[j]=x[i];
               x[i]=aux;
            }
         }
      }
      printf("Maximo valor del vector: ");
      printf("%d\n", x[*dim-1]);
   }
   else{
      printf("Vector vacio\n");
   }
}

void hallarMinVector(int x[max], int *dim){
   int aux, i, j;
   if(dim>0){

      for(i=0;i<*dim-1;i++){
         for(j=i+1;j<*dim;j++){
            if(x[i]>x[j]){
               aux=x[j];
               x[j]=x[i];
               x[i]=aux;
            }
         }
      }
      printf("Minimo valor del vector: ");
      printf("%d\n", x[0]);
   }
   else{
      printf("Vector vacio");
   }
}
