/*
Name: Tayvian R. Eberle
Date: 9/21/22
Desc: Aproxiamtes pi using two methods
*/

#include <stdio.h>
#include <stdbool.h>
#include <math.h>


double circle_pi(int rectangles){

    /*Radius of circle*/
    double radius = 2.0f;

    /*Current rectangle width*/
    double rWidth = radius / rectangles;

    /*Midpoint for rectangle*/
    double midpoint = rWidth / 2;

    /*Rectangle height*/
    double rHeight;

    /*Rectangle area*/
    double rArea;

    /*Total area of all added rectangles*/
    double totalArea = 0;



    for(int i = 0; i < rectangles; i++){

        double tempMidpoint = midpoint + (i * rWidth);

        rHeight = sqrt((radius * radius)-( tempMidpoint * tempMidpoint));

        rArea = rHeight * rWidth;

        totalArea += rArea;

        /*Debugging
        printf("------\nIteration: %i\nrWidth: %f\nrHeight: %f\nmidpoint: %f\ntempMidpoint: %f\ntotalArea:%f\n-----\n\n", i + 1, rWidth, rHeight, midpoint, tempMidpoint, , totalArea);*/
    }

    /*Print circle area*/
    /*printf("OUTPUT: %f\n\n",totalArea);*/

    return totalArea;
}

double leibniz_pi(int iterations){

    /*Determines whether fraction should be added or subtracted*/
    bool negitive = false;

    /*Placeholder for iterations*/
    int length = 0;

    /*Used for main calculations, and is the actual number that is iterated upon.*/
    double savedNum = 0;

    /*Output of program*/
    double output = 0;

    /*Runs through iterations, with each iteration getting more accurate, and closer to pi*/
    while(length < iterations){

        /*Make denominator for current number*/
        double denominator = 1.0 + 2.0 * length;
        /*Make decimal for later use*/
        double decimal = 1 / denominator;

        /*Adds or subtracts to saved number*/
        if(negitive){
            savedNum = savedNum - decimal;
            negitive = false;
        }
        else{
            savedNum = savedNum + decimal;
            negitive = true;
        }

        /*What to show to user*/
        output = savedNum * 4;


        /*Debug header
        printf("Leibniz pi info: \nIteration: %i\n", length+1);

        Debuging
        printf("Decimal: %f\nDenominator: %f\nIs positive: %i\nOutput: %f\n\n", decimal, denominator, negitive, output);
        */

        /*LOL emulation of a for loop ;)*/
        length++;
    }
    return output;
}

/*For testing functions
    int main(void){
    circle_pi(1000000000);
    //leibniz_pi(10);
    return 0;
}*/