#define ARMA_DONT_USE_WRAPPER
#include<armadillo>


int main(){
    arma::mat(3,3, arma::fill::randu).print();
    return 0;
}
