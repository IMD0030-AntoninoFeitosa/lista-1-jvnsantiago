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
    cin>>m;
    cin>>n;
    if(n>0){
        for(int ii = m; ii < n; ii++){
           SomaVizinhos += ii;
        }
    }
    if(n<0){
        for( int ii = m; ii > n; ii--){
            SomaVizinhos +=ii;
        }
    }
    cout<<SomaVizinhos;
    return 0;
}
