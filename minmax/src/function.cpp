#include "function.h"

/*! 
 * Finds and returns a pair with the first instance of the smallest element
 * and the last instance of the largest element in an array.
 *
 * @param V This is the array-to-pointer decay representing an array.
 * @param n The array's size.
 *
 * @return A pair of indexes to the first smallest and last largest values.
 */

std::pair<int,int> min_max( int V[], size_t n )
{
    // TODO: Adicione aqui sua solução.
    int menorValor = V[0];
    int maiorValor = V[0];
    int indiceMenor = 0;
    int indiceMaior = 0;
    
    for(int ii = 1; ii < n; ii++){
        if(V[ii] < menorValor){
          indiceMenor = ii;
        }
        if(V[ii] >= maiorValor){
          indiceMaior = ii;
        }
    
    }

    // TODO: Isso é apenas um STUB. Substitua com seu retorno correto.
    return {indiceMenor,indiceMaior};
}
