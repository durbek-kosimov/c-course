/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: mint
 *
 * Created on June 18, 2017, 1:59 PM
 */

#include <stdio.h>
#include <stdlib.h>

int f()
{
    printf("Hi!\n");
    return 1;
}

/*
 * 
 */
int main(int argc, char** argv) {
    int a = 0;
    do {
        a ++;
//        printf("%d\n", a);
        f();
    } while (a < 5);
//    } while (5);
    return (EXIT_SUCCESS);
}

