#include "function.h"

std::vector<unsigned int> fib_below_n( unsigned int n )
{
    // TODO: adicione o seu código aqui.
    std::vector<unsigned int> myvector;
    int i = 1;
    if(n>1){
      myvector.push_back (1);
      myvector.push_back (1);  
      while(myvector[i]+myvector[i-1]<n){
        i++;
        myvector.push_back (myvector[i-2]+myvector[i-1]);
        int size = myvector.size();
      }
    }
    // TODO: Isto é apenas um STUB. Troque o retorno pelo que você julgar correto.
    return myvector;
}
