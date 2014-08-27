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
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include "vector1.h"

using namespace std;

//Implementación de las funciones
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
   int val;
   printf("Numero que desea insertar:\n");
   scanf("%d", &val);
   x[*dim+1]=val;//Se agrega al vector y se guarda en la posicion siguiente a la dimension actual
   *dim=*dim+1;//La dimension aumenta en uno
}

void eliminarVector(int x[max], int *dim)
{
   int i, pos;
   do{
      printf("Posicion del numero que deseas eliminar\n");
      scanf("%d", &pos);
   }while(pos<0 || pos>*dim);
   for(i=pos;i<*dim;i++){
      x[i-1]=x[i];//Al eliminar, disminuye en una posicion los elementos posteriores al eliminado
   }
   *dim=*dim-1;//La dimension disminuye en uno

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
   x[pos-1]=val;//El nuevo valor reemplaza a la posicion que se edita
   printf("\n");
}

void buscarVector(int x[max], int *dim)
{
   int val, i;
   printf("Que valor desea buscar?\n");
   scanf("%d", &val);
   for(i=0;i<*dim;i++){
      if(x[i]==val){
         printf("Valor encontrado\n"
                "Se encuentra en la posicion: ");
         printf("%d", i+1);
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
