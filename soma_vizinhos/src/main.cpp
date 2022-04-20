/*!
 * @brief This code implements the "Soma Vizinhos" programming problem
 * @author selan
 * @data June, 6th 2021
 */
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main( void )
{
    // TODO: Adicione seu código aqui. 
    int m = 0;
    int n = 0;
    int SomaVizinhos = 0;
    while (cin>> std::ws >> m >> n){
      SomaVizinhos = 0;
      if(n>0){
          for(int ii = 0; ii < n; ii++){
            SomaVizinhos += m;
            m++;
          }
      }
      else if(n<0){
        for( int ii = 0; ii <-n; ii++){
          SomaVizinhos +=m;
          m--;
        }
      }
      else{
        SomaVizinhos = m;
      }
      cout<<SomaVizinhos<<endl;
    }
    return 0;
}
