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
  //realização do cálculo da porcentagem dos elementos dos intervalos
    porcentagemInt1= ((double) contadorInt1/contadorTotal)*100;
    porcentagemInt2= ((double) contadorInt2/contadorTotal)*100;
    porcentagemInt3= ((double) contadorInt3/contadorTotal)*100;
    porcentagemInt4= ((double) contadorInt4/contadorTotal)*100;
    porcentagemFora= ((double) contadorFora/contadorTotal)*100;

    cout<<setprecision(4)<<porcentagemInt1<<endl;
    cout<<setprecision(4)<<porcentagemInt2<<endl;
    cout<<setprecision(4)<<porcentagemInt3<<endl;
    cout<<setprecision(4)<<porcentagemInt4<<endl;
    cout<<setprecision(4)<<porcentagemFora;
    
    return 0;
}
