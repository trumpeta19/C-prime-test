//
//  main.c
//  prime_test
//
//  Created by Tamara on 12/23/19.
//  Copyright © 2019 Tamara. All rights reserved.
//

/*  This program displays the divisors of a positive whole number.
    At this point in time, there are no restrictions on entering non-integers.
    There are user instructions to enter a whole number.
    The program restricts entries to anything greater than 1. */

#include <stdio.h>

main()

{
    
    int divisor; //user entered number
    int i; // possible divisor
    int j; // used to store number of divisors
    int total=0; //starting for total of divisors
    
    printf("Enter a positive whole number to test: ");
    scanf(" %d", &divisor);
    
    while (divisor < 1)
        
    {
        printf("Invalid entry. Enter a positive whole number: \n\n");
        scanf(" %d", &divisor);
    }
    
    for (i = 1; i <= divisor; i++)
    {
        
        //printf("The number is divided by %d.\n", i);
        if (divisor % i == 0)
        {
           printf("Divisible by %d\n", i);
            
            j = 1; // each successful divisor adds 1
            
            total += j; // total updated with each divisor
        }
        
        
    }
    
    if (total == 2) /* prime numbers will only be divided by 1 and itself = 2 divisors */
        
    {
        printf("The number is a prime number.\n\n");
    }
    
    else // all numbers with more than 2 divisors
    {
        printf("The number is NOT a prime number.\n\n");
    }
        
    return 0;
}
