#include <stdio.h>
#define TRUE  1
int main()
{
    int dia = 0;
    printf("Digite el numero del dia de la semana, donde:\nLunes     =    1\nMartes    =    2\nMiercoles =    3\nJueves    =    4\nViernes   =    5\n");
    scanf("%d", &dia);
    while(TRUE)
    {
        int edad = 0;
        int cedula = 0;
        int productos = 0;
        int seguir;
        int numeroProductos = 0;
        int totalProductos = 0;
        int seguirComprando = 0;
        float sumaCosto = 0;
        while ( dia < 0 || dia > 6 )
        {
            printf("Por favor dijite un valor de dia valido");
            printf("\nLunes     =    1\nMartes    =    2\nMiercoles =    3\nJueves    =    4\nViernes   =    5\n");
            scanf("%d", &dia);
        }
        do
        {
            printf("Bienvenido a la tiendita, por favor digite su edad \n");
            scanf("%d", &edad);
            while (edad < 18 )
            {
                printf("No puede ingresar a la tienda \n");
                printf("\nPor favor digite su edad ");
                scanf("%d", &edad);
            }
            printf("Por favor digite su ultimo numero de cedula:\n");
            scanf("%d", &cedula);
            if ((cedula == 1 || cedula == 2) && dia == 1)
            {
                printf("Bienvenido\n");
                seguir = 1;
            }
            else if ((cedula == 3 || cedula == 4) && dia == 2)
            {
                printf("Bienvenido\n");
                seguir = 1;
            }
            else if ((cedula == 5 || cedula == 6) && dia == 3)
            {
                printf("Bienvenido\n");
                seguir = 1;
            }
            else if ((cedula == 7 || cedula == 8) && dia == 4)
            {
                printf("Bienvenido\n");
                seguir = 1;
            }
            else if ((cedula == 9 || cedula == 0) && dia == 5)
            {
                printf("Bienvenido\n");
                seguir = 1;
            }
            else
            {
                printf("No puede ingresar a la tiendita, vuelva pronto!\n \n \n");
                seguir = 0;
            }
        }
        while(seguir == 0);
        do
        {
            printf("Actualmente tenemos los siguientes productos:\n\n");
            printf("-------------Men%c de compras--------------\n",163);
            printf("------------------------------------------\n");
            printf("| ID  |     PRODUCTO     |     PRECIO    |\n");
            printf("------------------------------------------\n");
            printf("|  1  |   ARROZ (1KG)    |    $2000.67   |\n");
            printf("|  2  |   CARNE (1Kg)    |    $5000.23   |\n");
            printf("|  3  |   PEPITORIA      |    $10000.99  |\n");
            printf("|  4  |   FRIJOLES (1Kg) |    $500.24    |\n");
            printf("|  5  |   COCA-COLA (1L) |    $1500.01   |\n",233);
            printf("------------------------------------------\n");
            printf("Por favor digite el ID del producto a comprar\n");
            scanf("%d", &productos);
            printf("Cuantas unidades del producto desea llevar?\n");
            scanf("%d", &numeroProductos);
            if(productos == 1)
            {
                sumaCosto += (2000.67*numeroProductos);
                totalProductos += 1*numeroProductos;
            }
            else if(productos == 2)
            {
                sumaCosto += (5000.23*numeroProductos);
                totalProductos += 1*numeroProductos;
            }
            else if(productos == 3)
            {
                sumaCosto += (10000.99*numeroProductos);
                totalProductos += 1*numeroProductos;
            }
            else if(productos == 4)
            {
                sumaCosto += (500.24*numeroProductos);
                totalProductos += 1*numeroProductos;
            }
            else if(productos == 5)
            {
                sumaCosto += (1500.01*numeroProductos);
                totalProductos += 1*numeroProductos;
            }
            else
            {
                printf("numero digitado invalido, por favor seleccione un valor valido de nuestro catalogo de productos\n");
            }
            printf("\nDesea realizar otra compra?\n Si -----> 0\n No -----> 1\n");
            scanf("%d", &seguirComprando);
        }
        while(seguirComprando == 0);
        printf("Has comprado un total de %d articulos, con un costo total de: $%.3f",totalProductos,sumaCosto);
        printf("\nGracias por comprar, vuelva pronto!\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    }
}
