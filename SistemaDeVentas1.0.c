// || LIBRERIAS ||
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <windows.h>

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
			ingresarProducto();
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

    printf("------------------- MENU PRINCIPAL -------------------\n");
    printf("[1] %c Agregar producto al carro de compras\n", 175);
    printf("[2] %c Eliminar primer producto del carro de compras\n", 175);
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
    printf("------------------------------------------------------\n");
    printf("Ingresa la opci%cn que desees: ", 162); }

// || FUNCION PARA AGREGAR PRODUCTO AL CARRITO ||
void ingresarProducto(){

    FILE *fp;
    fp=fopen("inventario.txt", "ab");
	
	fflush(stdin);
    int nroProducto, i; system("cls");
    printf("--- AGREGAR PRODUCTO AL CARRITO ---\n");
    printf("    ---------------------------\n");
    printf("  %cCu%cntos productos desea a%cadir?\n", 168, 160, 164);
    printf("-----------------------------------\n");
    printf("Ingrese aqu%c la cantidad: ", 161);
    scanf("%d",&nroProducto);

    for (i=0; i<nroProducto; i++) {
        fflush(stdin);
        Producto productoNuevo;
        system("cls");
        printf("---------- APARTADO DE INGRESAR PRODUCTO ----------\n");
        printf("                PRODUCTO N%cMERO: [%d]\n", 233, i+1);
        printf("---------------------------------------------------\n");
        printf("Nombre del art%cculo a a%cadir: ", 161, 164);
        gets(productoNuevo.nombre);
        
        printf("C%cdigo del art%cculo a a%cadir: ", 162, 161, 164);
        scanf("%d",&productoNuevo.codigo);
        fflush(stdin);

        printf("Precio del art%cculo a a%cadir: ", 161, 164);
        scanf("%d",&productoNuevo.precio);
        fflush(stdin);
        printf("N%cmero de stock del art%cculo a a%cadir: ", 163, 161, 164);
        scanf("%d",&productoNuevo.existencia);
        fflush(stdin);
        
        printf("---------------------------------------------------\n");
        printf("A%cadiendo producto a su carro, espere un momento...\n", 164);
        printf("---------------------------------------------------\n");
        sleep(3);
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
        printf("      Producto a%cadido al carrito con %cxito\n", 164, 130);
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
        printf("---------------------------------------------------\n");
		
		system("pause");
        // fwrite(&productoNuevo, sizeof(Producto), 1, fp);
    }

    fclose(fp);
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
