#define POLYNOMIAL_MAX_COEFICIENTS 20

// The line below can be modified to give a better polynomial approx.
#define DEGREE_WANTED 6

// Max iterations for newthon-raphson method for root finding
#define MAX_ITERATIONS 10

#define MAX_LEGENDRE_POLYNOMIALS 20

void poly_add(double*, double*, double*);
void poly_mult(double*, double*, double*);
double newton_raphson(double , double , double *);
double eval_P(double *, double );
void d_poly(double *, double*);
void generate_legendre_poly(double P[MAX_LEGENDRE_POLYNOMIALS][POLYNOMIAL_MAX_COEFICIENTS], int);

