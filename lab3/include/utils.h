#include <ctime>
#include <random>


const double EPS = 1e-14;

struct Args {
    double r;
    int total, success, limit;
};

double GetRandomNumber(double max);