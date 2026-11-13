#include <stdio.h>

int DegreeFunc(int number, int degree){
    if (degree == 0)
    {
        return 1;
    }
    else if (number == 0)
    {
        return 0;
    }
    else if (degree == 1)
    {
        return number;
    }
    else
    {
        return number * DegreeFunc(number, degree - 1);
    }
}
/* VARIANTY BEZ REKURSII
int MultiplicationFunc(int number1, int number2){
    return number1 * number2;
}

int SummFunc(int number1, int number2){
    return number1 + number2;
}
  VARIANTY S REKURSIEY*/
int MultiplicationFunc(int number1, int number2){
    if (number2 == 0){
        return 0;
    }
    else if (number2 > 0){
        return number1 + MultiplicationFunc(number1, number2-1);
    }
    else{
        return -MultiplicationFunc(number1, -number2);
    }

}

int SummFunc(int number1, int number2){
    if (number2 == 0) {
        return number1;
    }
    else if (number2 > 0){
        return SummFunc(number1+1, number2-1);
    }
    else {
        return SummFunc(number1 - 1, number2+1);
    }
}

int main(void)
{
    printf("\nИспользование функции степени (введите сначала целое число, а затем целую степень для него)\n");
    int numDEG;
    int DEG;
    scanf("%d %d", &numDEG, &DEG);
    printf("%d", DegreeFunc(numDEG, DEG));

    printf("\nИспользование функции умножения (введите сначала первый множитель, а затем второй)\n");
    int num1;
    int num2;
    scanf("%d %d", &num1, &num2);
    printf("%d", MultiplicationFunc(num1, num2));

    printf("\nИспользование функции сложения (введите сначала первое слагаемое, а затем второе)\n");
    int num_1;
    int num_2;
    scanf("%d %d", &num_1, &num_2);
    printf("%d", SummFunc(num_1, num_2));

    return 0;
}