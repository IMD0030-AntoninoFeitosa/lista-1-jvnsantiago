#include "function.h"

/*! 
 * Verifica se um ponto está dentro de um retângulo.
 */

location_t pt_in_rect( const Ponto &IE, const Ponto &SD, const Ponto &P )
{
    // TODO: Coloque aqui seu código.
    if(P.x>IE.x && P.y>IE.y && P.x<SD.x && P.y<SD.y){
        return location_t::INSIDE;
    }
    else if(P.x<IE.x || P.y<IE.y || P.x>SD.x || P.y>SD.y){
        return location_t::OUTSIDE;
    }
    else if((P.x==IE.x && P.y>=IE.y && P.y>=SD.y) || (P.y==IE.y && P.x>=IE.x && P.x<=SD.x) || (P.x==SD.x && P.y>=IE.y && P.y>=SD.y) || (P.y==SD.y && P.y>=IE.y && P.y<=SD.y)) {
        return location_t::BORDER;
    }
    

    // TODO: Substitua o retorno conforme desejar. Isso é apenas um STUB, usado apenas para compilar.
    return location_t::OUTSIDE;
}
