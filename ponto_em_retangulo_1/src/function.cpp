#include "function.h"

/*! 
 * Verifica se um ponto está dentro de um retângulo.
 */

location_t pt_in_rect( const Ponto &IE, const Ponto &SD, const Ponto &P )
{
    location_t loc = location_t::BORDER;
    // TODO: Coloque aqui seu código.
    if(P.x>IE.x && P.y>IE.y && P.x<SD.x && P.y<SD.y){
        loc = location_t::INSIDE;
    }
    else if(P.x<IE.x || P.y<IE.y || P.x>SD.x || P.y>SD.y){
        loc = location_t::OUTSIDE;
    }
    // TODO: Substitua o retorno conforme desejar. Isso é apenas um STUB, usado apenas para compilar.
  return loc;
}
