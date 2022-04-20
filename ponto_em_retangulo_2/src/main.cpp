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
    int x1 = 0, y1 = 0, x2 = 0, y2 = 0, x = 0, y = 0;
    while(cin >> x1 >> y1 >> x2 >> y2 >> x >> y){
        if (x1 != x2 || y1 != y2){
          Ponto p (x,y);
          Ponto ie (x1, y1);
          Ponto sd (x2, y2);
          location_t loc;
          if(x1 <= x2 && y1 <= y2){
            loc = pt_in_rect(ie, sd, p);
          }else{
            loc = pt_in_rect(ie, sd, p);
          }
          switch (loc){
            case location_t::OUTSIDE: cout<< "outside" <<endl; break;
            case location_t::INSIDE: cout << "inside" <<endl; break;
            case location_t::BORDER: cout<< "border"<<endl; break;
          }
        }
      else{
        cout<<"invalid"<<endl;
      }
    }
  
    return 0;
}
