
#include <stdio.h>
#include <math.h>
#include <locale.h>
#include "function.h"

int main() {
	setlocale(LC_ALL, "Russian");
	double x1, x2, x3, y1, y2, y3, c1, c2, c3 = 0;
	double A, B, C, AngleA, AngleB, AngleC, MedA, MedB, MedC, halfPer, hA, hB, hC,r;
	double S;

	struct inter {
		double x;
		double y;
	};
	struct inter inter1x2;
	struct inter inter2x3;
	struct inter inter3x1;


	printf("Коэффициенты первой прямой Ax+By+C=0: \n");
	scanf_s("%lf %lf %lf", &x1, &y1, &c1);
	printf("Коэффициенты второй прямой A1x+B1y+C1=0: \n");
	scanf_s("%lf %lf %lf", &x2, &y2, &c2);
	printf("Коэффициенты третьей прямой A2x+B2y+C2=0: \n");
	scanf_s("%lf %lf %lf", &x3, &y3, &c3);

	if ((x1 == 0 && y1 == 0) || (x2 == 0 && y2 == 0) || (x3 == 0 && y3 == 0)) {
		printf("Введёные данные неверны. Чтобы построить треугольник, нужно три прямые");
		return 0;
	}
	inter1x2.x = FInterX(x1, y1, c1, x2, y2, c2);
	inter1x2.y = FInterY(x1, y1, c1, x2, y2, c2);

	inter2x3.x = FInterX(x2, y2, c2, x3, y3, c3);
	inter2x3.y = FInterY(x2, y2, c2, x3, y3, c3);

	inter3x1.x = FInterX(x3, y3, c3, x1, y1, c1);
	inter3x1.y = FInterY(x3, y3, c3, x1, y1, c1);

	printf("Координаты пересечения: \n");
	printf("Первой I и II прямой: x=%lf y=%lf\n", inter1x2.x, inter1x2.y);
	printf("Первой I и II прямой: x=%lf y=%lf\n", inter2x3.x, inter2x3.y);
	printf("Первой I и II прямой: x=%lf y=%lf\n", inter3x1.x, inter3x1.y);
	printf("Длина сторон \n");

	A = FDist(inter1x2.x, inter1x2.y, inter2x3.x, inter2x3.y);
	B = FDist(inter2x3.x, inter2x3.y, inter3x1.x, inter3x1.y);
	C = FDist(inter3x1.x, inter3x1.y, inter1x2.x, inter1x2.y);

	printf("A: %lf \n", A);
	printf("B: %lf \n", B);
	printf("C: %lf \n", C);

	printf("Углы \n");

	AngleA = FAngle(A, B, C);
	AngleB = FAngle(A, C, B);
	AngleC = 180 - FAngle(A, C, B) - FAngle(A, B, C);

	printf("A: %lf \n", AngleA);
	printf("B: %lf \n", AngleB);
	printf("C: %lf \n", AngleC);

	printf("Медианы \n");

	MedA = FMed(A, B, C);
	MedB = FMed(B, A, C);
	MedC = FMed(C, A, B);

	printf("A: %lf \n", MedA);
	printf("B: %lf \n", MedB);
	printf("C: %lf \n", MedC);

	halfPer = FHP(A, B, C);
	printf("Полупериметр: %lf \n", halfPer);
	S = FSqar(halfPer, A, B, C);
	printf("Площадь: %lf \n", S);

	printf("Высоты \n");

	hA = FHeig(S, A);
	hB = FHeig(S, B);
	hC = FHeig(S, C);

	printf("A: %lf \n", hA);
	printf("B: %lf \n", hB);
	printf("C: %lf \n", hC);

	r = FRad(S, halfPer);
	printf("Радиус вписанной окружности %lf \n", r);
}
