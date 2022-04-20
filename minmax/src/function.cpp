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

std::pair<int,int> min_max( int V[], std::size_t n )
{
    // TODO: Adicione aqui sua solução.
    int menorValor = -1;
    int maiorValor = -1;
    
    for(int ii = 0; ii < n; ii++){
        if(menorValor == -1 || V[ii] < V[menorValor]){
          menorValor = ii;
        }
        if(maiorValor == -1 || V[ii] >= V[maiorValor]){
          maiorValor = ii;
        }
    
    }

    // TODO: Isso é apenas um STUB. Substitua com seu retorno correto.
    return std::make_pair(menorValor,maiorValor);
}
