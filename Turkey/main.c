//
//  main.c
//  Turkey
//
//  Created by Fredrick Ohen on 10/11/17.
//  Copyright © 2017 geeoku. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
  
  // Declare the variable called 'weight' of type float
  float weight;
  
  // Store a number in that variable
  weight = 14.2;
  
  // Log it to the user
  printf("The turkey weighs %f. \n", weight);
  
  // Declare another variable of type float
  float cookingTime;
  
  // Calculate the cookign time and store it in the variable
  cookingTime = (15 + 15) * weight;
  
  //Log that to the user
  printf("Cook it for %f minutes. \n", cookingTime);
  
  // End this function and indicate success
  return 0;
  
  
  
}
