#include <stdio.h>

// nn - n, fi - операнд і, ii - і, xx - x, f1 - перший оп, summ - сума //
float summm(float nn, float fi, float ii, float xx, float f1, float summ) {
    float currentsumm;
    float currentop;

    if (ii==1){
        currentop = f1;
        currentsumm = summ + currentop;
    } else{
        currentop = fi*f1*(4-3*(ii-1))/((3*(ii-1)));
        currentsumm = summ + currentop;
    };

    printf("результат операції %f\n", currentsumm);
    
    if (ii == nn){
        return currentsumm;
    } ;
    ii ++ ;
        
    return summm(nn,currentop,ii,xx,f1,currentsumm);

}


int main(void) {

    printf("Введіть число x: ");
    float x;
    scanf("%f", &x);

    printf("введіть число n: ");
    int n;
    scanf("%i", &n);

    float firstop;
    firstop = x/((0.418 + 0.5*x)*(0.418 + 0.5*x)*(0.418 + 0.5*x)) - 1;
    printf("Перший операнд: %f\n", firstop);

    printf("Сума: %f\n", summm(n,0,1,x,firstop,0));
};

