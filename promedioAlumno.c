/* PROGRAMA PARA CALCULAR PROMEDIO DE ALUMNO SEGUN 5 MATERIAS ESTABLECIDAS */
// librerias
#include <stdio.h>
#include <stdlib.h>
char materia[5][60] = {"calculo","programacion","etica","español","matematicas"}; // guardo las materias asignadas 
char opcion1; // variable a ocupar dentro de estructura do ... while para reiniciar el programa
float califica[5]; // aqui guardare las calificaciones (mediante bucle o ciclo) y tambien para mostrarlas al final
int main()
{
	do{ // haz las siguientes lineas de codigo
	system("cls"); // limpia pantalla - esto es por si el usuario decide reiniciar el programa
    int i, x,z = 0; // "i" y "x" seran para inicializar el coclo for, z sera quien lleve el numero de calificaciones insertadas
    float prom, sumaC = 0; // prom guardara el promedio y sumaC guardara la sumatoria de las calificaciones
	for(i=0;i<5;i++){ // primer ciclo: para asignar calificaciones a cada materia
	printf("::::: PROMEDIOS :::::\n\n",144); // mensaje - solo ilustrativo y estetica
    printf(" ** Programa que calcula calificaciones de 5 materias **\n\n"); // Titulo
    printf(" Cual fue tu calificacion en %s: ", materia[i]); // mensaje indicando la accion a ejecutar por parte del usuario
    scanf("%f", &califica[i]); // escaneo y asigno la primer calificacion a la variable en su primer indice (que es 0), la siguiente vuelta sera el indice 1
    z = z + 1; // sumo 1 a mi variable, es decir, es la primer calificacion asignada, la siguiente vuelta sumara una unidad, seran 2 calificaciones asignadas
    sumaC = sumaC + califica[i]; // empiezo la sumatoria de las calificaciones, 
    system("cls"); // limpio pantalla
	}
	prom = sumaC/z; // saco promedio
	printf("::::: PROMEDIOS :::::\n\n",144); // mensaje - solo ilustrativo
    printf(" ** Programa que calcula calificaciones de 5 materias **\n\n"); // titulo
    printf("Tus calificaciones fueron:\n\n"); // mensaje 
    for(x=0;x<5;x++){ // ciclo donde mostrare todas las materias con sus respectivas calificaciones
    	// materia en su indice x (la primer vuelta vale 0 - y corresponde a calculo, la calificacion sera la asignada
    	printf("* %s -> %.1f\n", materia[x], califica[x]); 
	}
    printf ("\nTu promedio fue de %.1f\n\n", prom); // mensaje mostrando el promedio
	if(prom<6){ // condicional , si el promedio fue menor a 6
		printf (" Reprobado !"); // mensaje de reprobado
	}else{ // si no fue menor a 6
		printf (" Aprobado !"); // aprobado
	}
	// ------------ ANTES DE CERRAR EL DO .. WHILE PRINCIPAL, PREGUNTO SI DESEA SACAR OTRO PROMEDIO ------------
	printf("\n\nDesea reinicar la captura?\nSi (s) / No (cualquier tecla alfanumerica): "); // mensaje informativo a usuario 
    scanf("%s", &opcion1); // capturo lo que el usuario digito
    system("cls"); // limpio pantalla
	}while (opcion1 == 'S' || opcion1 == 's'); // mientras la respuesta sea s o S, el programa sigue, si  no, sale del ciclo
    printf("Gracias, adios !\n\n"); // mensaje de despedida
    system("pause"); // pausa para leer el ultimo mensaje de despedida
}
