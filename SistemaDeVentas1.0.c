// || LIBRERIAS ||
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

// || FUNCIONES Y PARAMETROS ||
void menuPrincipal();
void ingresarProducto();
void eliminarproducto();
void verProductos();
void salidaPrograma();
void crearCliente();
void eliminarCliente();
void pruebaClientes();
void finalizarCompra();
void reservadox();
void reservadoy();
void reservadoz();
void salirPrograma();

// || ESTRUCTURAS USADAS ||
typedef struct{
    char nombre[20], codigo[10];
    int precio, existencia;
} Producto;

// || MAIN PRINCIPAL DEL PROGRAMA ||
int main(){
	int opcion;
	
	do{
		menuPrincipal();
		fflush(stdin);
		scanf("%d", &opcion);
		
		switch(opcion){
			case 1:
			break;
				
			case 0:
			salirPrograma();
			break;
			
			default:
			system("cls");
            printf("-------- ERROR DE SELECCION --------\n");
            printf("\aOpci%cn inv%clida. Intentalo de nuevo.\n", 162, 160);
            printf("------------------------------------\n");
            system("pause");
            system("cls");
        	break;
		}
		
	}while (opcion!=0);
    return 0;
}

// || FUNCION DEL MENU PRINCIPAL ||
void menuPrincipal(){

    printf("---------------- MENU PRINCIPAL ----------------\n");
    printf("[1] %c Agregar producto al carro de compras\n", 175);
    printf("[2] %c Eliminar producto del carro de compras\n", 175);
    printf("[3] %c Mostrar productos en el carro de compras\n", 175);
    printf("[4] %c Crear cliente\n", 175);
    printf("[5] %c Eliminar cliente\n", 175);
    printf("[6] %c Prueba automatica de clientes\n", 175);
    printf("[7] %c Finalizar compra\n", 175);
    printf("[8] %c Espacio adicional para funcion x\n", 175);
    printf("[9] %c Espacio adicional para funcion y\n", 175);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
    printf("[0] %c Salir\n", 175);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
    printf("-----------------------------------------------\n");
    printf("Ingresa la opci%cn que desees: ", 162); }

// || FUNCION PARA AGREGAR PRODUCTO AL CARRITO ||
void ingresarProducto(){
	
}



// || FUNCION PARA SALIR DEL PROGRAMA ||
void salirPrograma(){
    system("cls");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
    printf("--------------------------------------------\n");
    printf("Gracias por usar nuestro sistema de ventas\n");
    printf("    El programa ser%c cerrado en breves.\n", 160);
    printf("--------------------------------------------\n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
    sleep(5); system("cls");
    printf("----------------------------\n");
    printf("El programa ha sido cerrado.\n");
    printf("----------------------------\n");
}
