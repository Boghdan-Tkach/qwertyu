#include <stdio.h>

int main() {

    int a[5]={10,-10,20,-20,0};
    int osnova=0;
    int perehod=0;
    int counter=0;
    int leftcounter=0;
    int rightcounter=0;

    osnova=a[0];

    // for (int i=0;i<4;i++){
    //     if a[i] == osnova {
    //         break;
    //     }
    //     else {
    //         counter++;
    //     }
    // };

    for (int i=0;i<5;i++){
        printf("a[%d]=%d\n",i,a[i]);
    }

    for (int i=0;i<5;i++){
        if (a[i]>osnova){
            rightcounter++;
        }
        if (a[i]<osnova){
            leftcounter++;
        }
    }
    for (int i=0;i<leftcounter;i++){
        
        

    // for (int i=0;i<5;i++){
    //     if (a[i]>osnova){
    //         perehod=a[i];
    //         a[i]=osnova;
    //         osnova=perehod;
    //         counter=i;
    //         osnova=a[counter];
    //     }
    //     if (a[i]<osnova){
    //         continue;
    //     }
    // }
    for (int i=0;i<5;i++){
        printf("a[%d]=%d\n",i,a[i]);
    }
}