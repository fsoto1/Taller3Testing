#include <stdio.h>

int main()
{

  int  Area;
  int Perimetro;
  int Radio;
  int Seleccion;
  int Altura;
  int Base;
  int Lado1;
  int Lado2;
  int Lado3;
  int Lado4;
  int Diagonal_menor;
  int Diagonal_mayor;
  int Base_menor;
  int Base_mayor;
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
          
          Area= (Base * Altura)/2;
          Perimetro = Lado1 + Lado2 + Lado3;
          printf("\n Area = %d \n", Area );
          printf("\n Perimetro = %d \n", Perimetro );
                 break;


          case '2':
          printf("\n ha seleccionado Cuadrado\n");
          printf(" inserte Lado1: ");
          scanf("%d" ,&Lado1);
          printf("\n");
          Area = Lado1*2;
          Perimetro = Lado1 * 4;
          printf("\n Area = %d\n", Area );
          printf("Perimetro = %d\n", Perimetro );
                 break;  
				 
				   
          case '3':
          printf("\n ha seleccionado Rectangulo\n");
          printf(" inserte Base: ");
          scanf("%d", &Base);
          printf("\n inserte Altura: ");
          scanf("%d", &Altura);         
          Area = Base * Altura;
          Perimetro =(Base * 2) + (Altura * 2);
          printf("\n Area = %d\n", Area );
          printf("Perimetro = %d\n", Perimetro );
                 break;



          case '4':
          printf("ha seleccionado Rombo\n");
          printf(" ingrese Lado: \n");
          scanf("%d", &Lado1);
          printf("\n ingrese Diagonal menor: \n");
          scanf("%d", &Lado1);
          printf("\n ingrese diagonal mayor: \n");
          scanf("%d", &Lado1);
          
          Area = (Diagonal_mayor * Diagonal_menor) /2;
          Perimetro = Lado1 * 4;
          printf("\n Area = %d\n", Area );
          printf("Perimetro = %d\n", Perimetro );
                 break;
                 
                 
                 
          case '5':
          printf("ha seleccionado Romboide\n");
          printf(" inserte Base: ");
          scanf("%d", &Base);
          printf("\n inserte Altura: ");
          scanf("%d", &Altura); 
		          
          Area = Base * Altura;
          Perimetro =(Base * 2) + (Altura * 2);
          printf("\n Area = %d\n", Area );
          printf("Perimetro = %d\n", Perimetro );
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
          
          Area = (Altura * (Base_mayor * Base_menor)) / 2;
          Perimetro = Lado1 + Lado2 + Lado3 + Lado4;
          printf("\n Area = %d\n", Area );
          printf("Perimetro = %d\n", Perimetro );
                 break;
                 
                 
                 
          case '7':
          printf("ha seleccionado Circulo\n");
          printf(" inserte Radio: ");
          scanf("%d", &Radio);
          
          Area = 3.1416 * (Radio * Radio);
          Perimetro = 2 * 3.1416 * Radio;
          printf("\n Area = %d\n", Area );
          printf("Perimetro = %d\n", Perimetro );
                 break;
                 
          default:
               printf("error");  
                 
    }

	return 0;
}
