/*
Name: Tayvian R. Eberle
Date: 9/21/22
Desc: Aproxiamtes pi
*/

#include <stdio.h>

double leibniz_pi(int iterations){
    double output;
    for(int i = 0; i < iterations; i++){
        output = 4 * (1 * (1/(1 + 2)));
        printf("%i", output);
        printf("Leibniz pi info: \nIteration %i\n", i+1);
        printf("%f\n\n",output);
    }
    return 0;
}

int main(void){
    
    leibniz_pi(10);
    return 0;
}



