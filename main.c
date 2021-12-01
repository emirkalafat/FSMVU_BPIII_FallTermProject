/*
* @file main.c
* @description executes main program functions
* @assignment First Misson
* @date 1.12.2021
* @author Ahmet Emir Kalafat ahmetemir.kalafat@stu.fsm.edu.tr
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "matrisoperations.h"

int main(int argc, char const *argv[])
{
    srand(time(NULL));
    float a = 1+rand()*5;
    printf("%2.f",a);
    
    return 0;
}
