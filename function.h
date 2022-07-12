#include <math.h>
#include <locale.h>

double FRad(double S, double halfPer) {
	return S / halfPer;
}

double FHeig(double S, double a) {
	double h;
	h = 2 * S / a;
	return h;
}

double FSqar(double hP, double a, double b, double c)
{
	return sqrt(hP * (hP - a) * (hP - b) * (hP - c));
}

double FHP(double a, double b, double c)
{
	return (a + b + c) / 2;
}

double FMed(double a, double b, double c) {
	double Mediana;
	Mediana = 0.5 * sqrt(2 * pow(b, 2) + 2 * pow(c, 2) - pow(a, 2));
	return Mediana;
}

double FAngle(double a, double b, double c) {
	double Angle;
	double PI = atan(1) * 4;
	Angle = acos((pow(a, 2) + pow(b, 2) - pow(c, 2)) / (2 * a * b)) * 180.0 / PI;
	return Angle;
}

double FDist(double x1, double  y1, double x2, double  y2)
{
	return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

double FInterX(double x1, double y1, double c1, double x2, double y2, double c2)
{
	double det = y1 * x2 - x1 * y2;
	double resultX = (c1 * y2 - y1 * c2) / det;
	return resultX;
}

double FInterY(double x1, double y1, double c1, double x2, double y2, double c2)
{
	double det = y1 * x2 - x1 * y2;
	double resultY = (x1 * c2 - c1 * x2) / det;
	return resultY;
}
