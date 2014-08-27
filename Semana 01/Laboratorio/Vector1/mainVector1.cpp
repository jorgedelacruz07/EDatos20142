/*
 * Programa:
 *
 *
 * Author:
 * Fecha:
 *
 *
*/
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include "vector1.h"
#include "vector1.cpp"

using namespace std;

int main()
{
   int a[max], na, opt;
   menu:
   system("cls");
   printf("MENU\n");
   printf("[1] Crear vector\n");
   printf("[2] Leer vector\n");
   printf("[3] Mostrar vector\n");
   printf("[4] Insertar vector\n");
   printf("[5] Eliminar vector\n");
   printf("[6] Editar vector\n");
   printf("[7] Buscar vector\n");
   printf("[8] Ordenar vector\n");
   printf("[9] Salir\n");
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
         mostrarVector(a, &na);
         system("pause");
         goto menu;
         break;
      case 4:
         system("cls");
         insertarVector(a, &na);
         system("pause");
         goto menu;
         break;
      case 5:
         system("cls");
         eliminarVector(a, &na);
         system("pause");
         goto menu;
         break;
      case 6:
         system("cls");
         editarVector(a, &na);
         system("pause");
         goto menu;
         break;
      case 7:
         system("cls");
         buscarVector(a, &na);
         system("pause");
         goto menu;
         break;
      case 8:
         system("cls");
         ordenarVector(a, &na);
         system("pause");
         goto menu;
         break;
      case 9:
         break;
      default:
         printf("Ingrese numero correcto (1-9)");
   }
   system("pause");
   return(0);
}
