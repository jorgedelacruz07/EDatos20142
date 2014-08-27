/*
 * Programa:
 *
 *
 * Author: Jorge de la Cruz
 * Fecha: 21/08/14
 *
 *
*/
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define max 10

using namespace std;

void crearVector(int x[max], int *dim);
void leerVector(int x[max], int *dim);
void mostrarVector(int x[max], int *dim);
void insertarVector(int x[max], int *dim);
void eliminarVector(int x[max], int *dim);
void editarVector(int x[max], int *dim);
void buscarVector(int x[max], int *dim);
void ordenarVector(int x[max], int *dim);

int main()
{
   int a[max], na, opt;
   menu:
   system("cls");
   printf("MENU\n");
   printf("1: Crear vector\n");
   printf("2: Leer vector\n");
   printf("3: Mostrar vector\n");
   printf("4: Insertar vector\n");
   printf("5: Eliminar vector\n");
   printf("6: Editar vector\n");
   printf("7: Buscar vector\n");
   printf("8: Ordenar vector\n");
   printf("Elija su opcion: ");
   scanf("%d", &opt);
   switch(opt){
      case 1:  system("cls");
               crearVector(a, &na);
               system("pause");
               goto menu;
               break;
      case 2:  system("cls");
               leerVector(a, &na);
               system("pause");
               goto menu;
               break;
      case 3:  system("cls");
               mostrarVector(a, &na);
               system("pause");
               goto menu;
               break;
      case 4:  system("cls");
               insertarVector(a, &na);
               system("pause");
               goto menu;
               break;
      case 5:  system("cls");
               eliminarVector(a, &na);
               system("pause");
               goto menu;
               break;
      case 6:  system("cls");
               editarVector(a, &na);
               system("pause");
               goto menu;
               break;
      case 7:  system("cls");
               buscarVector(a, &na);
               system("pause");
               goto menu;
               break;
      case 8:  system("cls");
               ordenarVector(a, &na);
               system("pause");
               goto menu;
               break;
   }
   system("pause");
   return(0);
}

void crearVector(int x[max], int *dim)
{
   *dim = -1;
}

void leerVector(int x[max], int *dim)
{
   int n,val,i;
   printf("Cuantos valores desea ingresar?\n");
   scanf("%d", &n);
   if(n<max){
      printf("Ingrese los valores\n");
      for(i=0;i<n;){
         scanf("%d", &val);
         x[i]=val;
         i=i+1;
      }
      *dim=i;
   }
   else{
      printf("Dimesion fuera rango\n");
   }
}

void mostrarVector(int x[max], int *dim)
{
   int i;
   printf("Mostrar vector:\n");
   for(i=0;i<*dim;i++){
      printf("%d", x[i]);
   }
   printf("\n");
}

void insertarVector(int x[max], int *dim)
{
   /*int i, n, val;
   printf("Cuantos numeros desea anadir?\n");
   scanf("%d", &n);
   printf("Numeros que deseo agregar:\n");
   for(i=0;i<n;){
      scanf("%d", &val);
      x[*dim+i]=val;
      i++;
   }
   *dim=*dim+i;*/

   int val;
   printf("Numero que desea insertar:\n");
   scanf("%d", &val);
   x[*dim+1]=val;
   *dim=*dim+1;
}

void eliminarVector(int x[max], int *dim)
{
   int i, pos;
   do{
      printf("Posicion del numero que deseas eliminar\n");
      scanf("%d", &pos);
   }while(pos<0 || pos>*dim);
   for(i=pos;i<*dim;i++){
      x[i-1]=x[i];
   }
   *dim=*dim-1;

}

void editarVector(int x[max], int *dim)
{
   int pos, val;
   do{
      printf("Que posicion desea editar?\n");
      scanf("%d", &pos);
   }while(pos<0 || pos>*dim);
   printf("Que valor desea agregar en esta posicion?\n");
   scanf("%d", &val);
   x[pos-1]=val;
   printf("\n");
}

void buscarVector(int x[max], int *dim)
{
   int val, i;
   printf("Que valor desea buscar?\n");
   scanf("%d", &val);
   for(i=0;i<*dim;i++){
      if(x[i]==val){
         printf("Valor encontrado\n");
         printf("Se encuentra en la posicion: ");
         printf("%d", i+1);
         printf("\n");
      }
   }
}

void ordenarVector(int x[max], int *dim)
{
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
   }
   else{
      printf("Vector vacio");
   }
}
