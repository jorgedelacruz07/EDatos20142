#ifndef VECTOR1_H_INCLUDED
#define VECTOR1_H_INCLUDED
#define max 10
using namespace std;

//Prototipo de funciones
void crearVector(int x[max], int *dim);
//Construye y devuelve un vector de dimensión [-1]
//PRE: DimX < 0
//POS: Vector de dimensión menor a 0, es decir, sin elementos
void leerVector(int x[max], int *dim);
//Construye y retorna un vector de dimensión [num] elementos enteros
//PRE: DimX > 0
//POS: Vector de dimensión mayor a 0
void mostrarVector(int x[max], int *dim);
//Muestra los elementos del vector de dimensión [] elementos enteros
//PRE: DimX > 0
//POS: Muestra los elementos del vector de dim [n]
void insertarVector(int x[max], int *dim);
//Insertar un elemento al vector
//PRE: DimX > 0
//POS: El vector tiene un elemento más: DimX <- DimX+1
void eliminarVector(int x[max], int *dim);
//Eliminar un elemento al vector
//PRE: DimX > 0
//POS: El vector tiene un elemento menos: DimX <- DimX-1
void editarVector(int x[max], int *dim);
//Edita el valor de un elemento del vector
//PRE: DimX > 0
//POS:
void buscarVector(int x[max], int *dim);
//Buscar un elemento del vector e indica su posición
//PRE: DimX > 0
//POS:
void ordenarVector(int x[max], int *dim);
//Ordena ascendentemente un vector de enteros
//PRE: x = <e1, e2, ...,edim>
//POS: x = <e1, e2, ...,edim> / e1<e2, e2<e3, ..., edim-1<edim

#endif // VECTOR1_H_INCLUDED
