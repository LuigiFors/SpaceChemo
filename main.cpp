#include <iostream>
#include<iostream>
#include<conio.h>
/**
 *Programa para ordenar un arreglo  utilizando los métodos de Burbuja e Inserción.
 * Jose Luis Morales Trejo
 */

using namespace std;
/**
 * @brief Función que implementa el método de ordenamiento Burbuja.
 * @param a[] Arreglo a ordenar.
 * @param x Tamaño del arreglo.
 */

void MetodoBurbuja(int a[],int x){
     int c1=0, c2=0, i,j,y;
     // Elegir el modo de ordenamiento

     cout<<"\n   Elige el numero del modo de ordenamiento \n 1) Ascedente \n 2) Descendente  "; cin>>y;
        switch (y){
            // Ordenamiento ascendente
            case 1:
                for(i=0; i<=x-1; i++){
                   for( j=0; j<=x-1; j++){
                       if (a[i]<a[j]){
                        swap(a[i],a[j]);
                        c1=c1+1;
                      }else{
                       c2=c2+1;
               }
           }
       }

            // Mostrar el arreglo ordenado
             cout<<"\n  El arreglo ordenado es\n";
              for( j=0; j<=x-1; j++){
                 cout<<a[j]<<"  ";
                }
           cout<<"\n  Comparaciones: "<<c1+c2<<"\n  Intercambios: "<<c1;
            break;

            // Ordenamiento descendente
            case 2:
                for(i=0; i<=x-1; i++){
                    for( j=0; j<=x-1; j++){
                    if (a[i]>a[j]){
                    swap(a[i],a[j]);
                    c1=c1+1;
                  }else{
                 c2=c2+1;
              }
          }
      }
      // Mostrar el arreglo ordenado
        cout<<"\n  El arreglo ordenado es\n";
           for( j=0; j<=x-1; j++){
             cout<<a[j]<<"  ";
            }

    cout<<"\n  Comparaciones: "<<c1+c2<<"\n  Intercambios: "<<c1;
                break;
            default:
                 cout<<"\n   Solo puedes elegir 1 o 2 ";
                break;
                }}

/**
 * @brief Función que implementa el método de ordenamiento Inserción.
 * @param a[] Arreglo a ordenar.
 * @param x Tamaño del arreglo.
 */
void MetodoInsercion(int a[], int x){
    int y,c1=0, c2=0, p, b, i;
    // Elegir el modo de ordenamiento

    cout<<"\n   Elige el numero del modo de ordenamiento \n 1) Ascedente \n 2) Descendente  "; cin>>y;
        switch (y){
            // Ordenamiento ascendente
            case 1:
	            for(i=0;i<x;i++){
		         p=i;
		         b=a[i];
                 c2=c2+1;

		while((p>0) && (a[p-1]>b)){
			a[p]=a[p-1];
			p--;
		}
		a[p]=b;
	}
	// Mostrar el arreglo ordenado
	cout<<"\n  El arreglo ordenado es\n";
              for( i=0; i<=x-1; i++){
                 cout<<a[i]<<"  ";
                }
           cout<<"\n  Comparaciones: "<<c1+c2<<"\n  Intercambios: "<<c1;

                break;
                // Ordenamiento descendente
            case 2:
                for(i=0;i<x;i++){
		            p=i;
		            b=a[i];
		            c2=c2+1;

		            while((p>0) && (a[p-1]>b)){
                            a[p]=a[p-1];
                            p--;
                    }
                    a[p]=b;
            }
            // Mostrar el arreglo ordenado
            cout<<"\n  El arreglo ordenado es\n";
              for( i=0; i<=x-1; i++){
                 cout<<a[i]<<"  ";
                }
           cout<<"\n  Comparaciones: "<<c1+c2<<"\n  Intercambios: "<<c1;
                break;
            default:
                 cout<<"\n   Solo puedes elegir 1 o 2 ";
                break;
                }

}

/**
 * @brief Función principal que solicita el tamaño del arreglo, sus elementos
 * y permite elegir entre los métodos de ordenamiento Burbuja e Inserción.
 * @return 0 si el programa se ejecuta con éxito.
 */

int main(){
    int x,y,a[100],i, j;
    int c1=0,c2=0;

      // Ingreso del tamaño y elementos del arreglo
    cout<<"   Ingresa el tamaño del arreglo "; cin>>x;
    for( i=0; i<x; i++){
        cout<<"   Ingresa el elemento "<<i+1<<" del arreglo"<<endl; cin>>a[i];
        }

         // Mostrar el arreglo original
        cout<<"   El arreglo es\n";
        for( j=0; j<x; j++){
    cout<<a[j]<<"  ";
        }

         // Elegir el método de ordenamiento
        cout<<"\n   Elige el numero del metodo de ordenamiento \n 1) Burbuja \n 2) Insercion  "; cin>>y;
        switch (y){
    case 1:
        MetodoBurbuja(a,x);

        break;
    case 2:
        MetodoInsercion(a,x);
        break;
    default:
         cout<<"\n   Solo puedes elegir 1 o 2 ";
         break;
        }


    return 0;
}
