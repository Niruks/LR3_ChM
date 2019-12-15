#include "Functions.h"

double u1(double x, double y)
{
	return exp(1 - x*x - y*y);
}

double f1(double x, double y)
{
	return -4 * exp(1 - x*x - y*y)*(x*x + y*y - 1);
}