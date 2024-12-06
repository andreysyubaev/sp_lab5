#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
// вариант 11
int main()
{
	double a1 = 1.0, a2 = 2.0, b1 = 3.0, b2 = 4.0;
	double res1 = (a1 / b1) * (a2 / b2);
	double res2 = (a1 / b1) / (a2 / b2);
    FILE* fl;
    if ((fl = fopen("1.txt", "w")) == NULL)
        printf("Файл невозможно открыть или создать\n");
    else {
        fprintf(fl, "Результат 1: %f\n", res1);
        fprintf(fl, "Результат 2: %f\n", res2);
        fclose(fl);
        printf("Данные успешно записаны в файл\n");
    }
	return 0;
}

