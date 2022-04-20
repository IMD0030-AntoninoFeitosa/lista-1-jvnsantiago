/*!
 * @brief This code implements the Intervalos programming problem
 * @author selan
 * @data June, 6th 2021
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <iomanip>
using std::setprecision;

// Se desejar, crie funções aqui, antes do main().

int main(void)
{
    // TODO: Adicione aqui a sua solução.
    int x;
    int contadorInt1 = 0;
    int contadorInt2 = 0;
    int contadorInt3 = 0;
    int contadorInt4 = 0;
    int contadorFora = 0;
    int contadorTotal = 0;
    float porcentagemInt1 = 0;
    float porcentagemInt2 = 0; 
    float porcentagemInt3 = 0; 
    float porcentagemInt4 = 0;
    float porcentagemFora = 0;
    while( cin >> std::ws >> x) {
    // realização da contagem em relação aos intervalos
        if(x>=0 && x<25){
          contadorInt1+=1;
        }
        else if(x>=25 && x<50){
          contadorInt2+=1;
        }
        else if(x>=50 && x<75){
          contadorInt3+=1;
        }
        else if(x>=75 && x<100){
          contadorInt4+=1;
        }
        else{
          contadorFora+=1;
        }
      contadorTotal++;
    }

    cout<<setprecision(4)<<(contadorInt1*100.0)/static_cast<double>(contadorTotal)<<endl;
    cout<<setprecision(4)<<(contadorInt2*100.0)/static_cast<double>(contadorTotal)<<endl;
    cout<<setprecision(4)<<(contadorInt3*100.0)/static_cast<double>(contadorTotal)<<endl;
    cout<<setprecision(4)<<(contadorInt4*100.0)/static_cast<double>(contadorTotal)<<endl;
    cout<<setprecision(4)<<(contadorFora*100.0)/static_cast<double>(contadorTotal)<<endl;
    
    return 0;
}
