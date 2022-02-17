#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Cadenas
int main()
{
    char cadenaOg[30], cadenaDos[30], cadenaTres[30], cadenaCop[30], cadenaInv[30];
    int longitud;
    printf("Escribe una cadena A de maximo 30 caracteres \n");
    /*Lee la cadena ingresada y la guarda en un arreglo
    gets(arreglo_para_guardar_la_cadena)*/
    gets(cadenaOg);
    /*Indica cuantos caracteres de longitud tiene la cadena
    variable_para_guardar_el_numero_de_caracteres = strlen(arreglo_que_tiene_la_cadena_a_contar)*/
    longitud = strlen(cadenaOg);
    /*Copia el contenido de una cadena
    strcpy(cadena_a_copiar, cadena_original)*/
    strcpy(cadenaCop, cadenaOg);
    /*Concatena algo a una cadena
    strcat(cadena_original, cosa_a_concatenar), puedes concatenar lo que sea*/
    strcat(cadenaCop, "(Es tu cadena nueva)");
    /*Compara 2 cadenas y devuelve un 0 si son iguales
    if (strcmp(cadena_a_comparar_1, cadena_a_comparar_2) == 0)*/
    printf("Escribe una cadena B de maximo 30 caracteres \n");
    gets(cadenaDos);
    if (strcmp(cadenaOg, cadenaDos) == 0)
        printf("\nLas cadenas son iguales\n\n");
    else
        printf("\nLas cadenas son difernetes\n\n");
    /*strcmpi usa los mismos parametros que strcmp, pero no es sensible a las mayusculas, asi que
    trata A y a como si fueran la misma letra. No se recomienda usar ya que no siempre esta disponible
    en todas las librerias de C*/

    //Imprimir todos los resultados
    printf("La cadena A es %s \nLa cadena B es %s \n\n", cadenaOg, cadenaDos);
    printf("La cadena A tiene una longitud de %d caracteres\n\n", longitud);
    printf("Despues de copiar y concatenar '(Es tu nueva cadena)' a la cadena A queda:\n%s\n\n", cadenaCop);
    /*Sirve para invertir los caracteres de una cadena (el 1ro ahora sera el ultimo, etc)
    strrev(cadena_a_invertir)*/
    printf("La cadena A original es: %s\n\n", cadenaOg);
    printf("La cadena A invertida es: %s\n\n", strrev(cadenaOg));
    /*Convierte una cadena a minusculas
    strlwr (cadena_a_convertir)*/
    printf("En minusculas es: %s\n\n", strlwr(cadenaOg));
    /*Convierte una cadena a mayusculas
    strupr (cadena_a_convertir)*/
    printf("En mayusculas es: %s\n\n", strupr(cadenaOg));
    /*Convierte una cadena en un entero usando atoi, atof para convertilo a un float
    atoi(nombre_de_la_cadena)*/
    int memoso;
    char cadenoso[] = {"123"};
    memoso = atoi(cadenoso);
    printf("La cadena memoso en entero es %d\n", memoso+1); //Debe de imprimir 124, porque la cadena orignal es 123
    system("PAUSE");
    return 0;
}