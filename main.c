/*
 * This program allow the user to input
 * "n" numbers in an array and then show them
 * in the input order and backwards
 *
 * Author: Hugo Aguirre Doria
 *Date: 14/12/2018
 *
 */
#include <stdio.h>

int main(void) {

    int p; //Variable for the array


    printf ("Tell me the total of numbers you want to enter: \n"); //we ask the user for the long of the array
    scanf ("%i", &p);


    int array [p]; //save the value in the array

    //here we ask the user for the values in the array
    for (int i=0; i < p; i++) {
        printf ("Input a number %i:", i+1);
        scanf ("%i", &array[i]);
    }


    printf ("The characters in the array are: \n");
    for (int l = 0; l < p; l++) {
        printf ("%i ", array[l]);
    }
    printf ("\n");

    //here we print the values of the array but backwards
    printf ("The backward order of the characters in the array are: \n");
    for (int o = p-1; o >= 0; o--) {
        printf ("%i ", array[o]);
    }


    return 0;
}