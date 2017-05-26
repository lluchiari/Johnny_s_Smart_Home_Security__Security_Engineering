#include "../include/rsa.hh"

RSA::RSA() {

}

void RSA::generateKey() {
    /* Gerating the High primes */
	this->_p = generatePrime();
	this->_q = generatePrime();

    /* Calculating Paramters based on gerated primes */
    int n, x;
    n = _p*_q;
    x = (_p-1)(_q-1);

    /* Calculate the Gratest Common Divisor */
    gdc();
}
