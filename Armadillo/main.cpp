#include <iostream>

#define ARMA_DONT_USE_WRAPPER
#include <armadillo>

using namespace std;
using namespace arma;

int main(int argc, char** argv){
    int ncol = 5, nrow = 4;
    cout << "Please enter a number of columns adn rows for the matrix [5, 4]: ";
    
    /* since I am coding in jupyter, I cant get cin working; use argv instead */
    //cin  >> ncol >> nrow;
    ncol = atoi(argv[1]);
    nrow = atoi(argv[2]);
    
    /* output the number of rows and columns */
    cout << endl;
    cout << "ncol: " << argv[1] << endl;
    cout << "nrow: " << argv[2] << endl;
    
    /* create a matrix*/
    arma::arma_rng::set_seed_random();
    mat A(nrow, ncol, fill::randu);
    //mat A(nrow, ncol, fill::zeros);
    cout << "A.n_rows = " << A.n_rows << endl;
    cout << "A.n_cols = " << A.n_cols << endl;
    A.print("Matrix A is: ");
    
    /* creat another matrix */
    //mat B = randn(nrow + 1, ncol);
    //cout << "Matrix B is: " << endl << B;
    
    /* third matrix */
    mat C(2, 2);
    C.fill(123);
    C.print("Matrix C is: ");
    
    /* forth matrix */
    mat D(2, 2);
    D << 1.1 << 1.2 << endr << 2.1 << 2.2 << endr;
    D.print("Matrix D is ");
    
    /* fifth matrix */
    mat E(3, 3);
    E = "1 2 3; 4 5 6; 7 8 9";
    E.print("Matrix E is ");
    
    
    return 0;
} // end func main
