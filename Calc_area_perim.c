#include <stdio.h>

int main()
{

  int Radio = 0;
  int Seleccion = 0;
  int Altura = 0;
  int Base = 0;
  int Lado1 = 0;
  int Lado2 = 0;
  int Lado3 = 0;
  int Lado4 = 0;
  int Diagonal_menor = 0;
  int Diagonal_mayor = 0;
  int Base_menor = 0;
  int Base_mayor = 0;
  
	printf("-----------CALCULADORA DE AREA Y PERIMETRO-----------\n");
	printf("Seleccione el numero de la figura geometrica con la que desea interactuar \n\n\n");
	printf("1) Triangulo\n");
	printf("2) Cuadrado\n");
	printf("3) Rectangulo\n");
	printf("4) Rombo\n");
	printf("5) Romboide\n");
	printf("6) Trapecio\n");
	printf("7) Circulo\n");

    scanf("%s", &Seleccion);

    switch (Seleccion)
    {
          case '1':
          printf("\n ha seleccionado Triangulo\n");
          printf(" inserte Base: ");
          scanf("%d",&Base);
          printf("\n inserte Altura: ");
          scanf("%d",&Altura);
          printf("\n inserte Lado1: ");
          scanf("%d" ,&Lado1);
          printf("\n inserte Lado2: ");
          scanf("%d", &Lado2);
          printf("\n inserte Lado3: ");
          scanf("%d" ,&Lado3); 
          printf("\n Area = %d \n", (Base * Altura)/2 );
          printf("\n Perimetro = %d \n", Lado1 + Lado2 + Lado3 );
                 break;


          case '2':
          printf("\n ha seleccionado Cuadrado\n");
          printf(" inserte Lado1: ");
          scanf("%d" ,&Lado1);
          printf("\n");
          printf("\n Area = %d\n", Lado1*2 );
          printf("Perimetro = %d\n", Lado1 * 4 );
                 break;  
				 
				   
          case '3':
          printf("\n ha seleccionado Rectangulo\n");
          printf(" inserte Base: ");
          scanf("%d", &Base);
          printf("\n inserte Altura: ");
          scanf("%d", &Altura);         

          printf("\n Area = %d\n", Base * Altura );
          printf("Perimetro = %d\n", (Base * 2) + (Altura * 2) );
                 break;



          case '4':
          printf("ha seleccionado Rombo\n");
          printf(" ingrese Lado: \n");
          scanf("%d", &Lado1);
          printf("\n ingrese Diagonal menor: \n");
          scanf("%d", &Lado1);
          printf("\n ingrese diagonal mayor: \n");
          scanf("%d", &Lado1);

          printf("\n Area = %d\n", (Diagonal_mayor * Diagonal_menor) /2 );
          printf("Perimetro = %d\n", Lado1 * 4 );
                 break;
                 
                 
                 
          case '5':
          printf("ha seleccionado Romboide\n");
          printf(" inserte Base: ");
          scanf("%d", &Base);
          printf("\n inserte Altura: ");
          scanf("%d", &Altura); 
          printf("\n Area = %d\n", Base * Altura );
          printf("Perimetro = %d\n", (Base * 2) + (Altura * 2) );
                 break;
                 
                 
                 
          case '6':
          printf("ha seleccionado Trapecio\n");
          printf("\n inserte Lado1: ");
          scanf("%d", &Lado1);
          printf("\n inserte Lado2: ");
          scanf("%d", &Lado2);
          printf("\n inserte Lado3: ");
          scanf("%d", &Lado3);
          printf("\n inserte Lado4: ");
          scanf("%d", &Lado4);
          printf("\n inserte Base_menor: ");
          scanf("%d", &Base_menor);
          printf("\n inserte Base_mayor: ");
          scanf("%d", &Base_mayor);
          printf("\n inserte Altura: ");
          scanf("%d", &Altura);

          printf("\n Area = %d\n", (Altura * (Base_mayor * Base_menor)) / 2 );
          printf("Perimetro = %d\n", Lado1 + Lado2 + Lado3 + Lado4 );
                 break;
                 
                 
                 
          case '7':
          printf("ha seleccionado Circulo\n");
          printf(" inserte Radio: ");
          scanf("%d", &Radio);

          printf("\n Area = %d\n", 3.1416 * (Radio * Radio) );
          printf("Perimetro = %d\n", 2 * 3.1416 * Radio );
                 break;
                 
          default:
               printf("error");  
                 
    }

	return 0;
}
