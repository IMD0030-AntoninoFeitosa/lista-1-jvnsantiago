/*!
 * @brief Implementação do Ponto em Retângulo V2.
 * @author selan
 * @data June, 6th 2021
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <algorithm>
using std::min;
using std::max;

#include "function.h"

//=== Funções

// Coloque aqui qualquer função auxiliar que desejar.


int main(void)
{
    // TODO: Adicione aqui seu código.
    Ponto x1 = 0, x2 = 0, x3 = 0, x4 = 0;
    while(cin>> std::ws >> x1 >> y1 >> x2 >> y2 >> x3 >> y3){
        if(x1 == x2 && y1 == y2){
            cout>>"invalid";
        }
        else{
            location_t pt_in_rect( const Ponto&, const Ponto&, const Ponto& );
        }
    
    }
    return 0;
}
