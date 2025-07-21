// TCS NQT Coding Question 2023 – September Day 1 – Slot 1
// Problem Statement – An automobile company manufactures both a two wheeler (TW) and a four wheeler (FW). A company manager wants to make the production of both types of vehicle according to the given data below:

// 1st data, Total number of vehicle (two-wheeler + four-wheeler)=v
// 2nd data, Total number of wheels = W
// The task is to find how many two-wheelers as well as four-wheelers need to manufacture as per the given data.
// Example :

// Input :
// 200  -> Value of V
// 540   -> Value of W

// Output :
// TW =130 FW=70

// Explanation:
// 130+70 = 200 vehicles
// (70*4)+(130*2)= 540 wheels

// Constraints :

// 2<=W
// W%2=0
// V<W
// Print “INVALID INPUT” , if inputs did not meet the constraints.

// The input format for testing 
// The candidate has to write the code to accept two positive numbers separated by a new line.

// First Input line – Accept value of V.
// Second Input line- Accept value for W.
// The output format for testing 

// Written program code should generate two outputs, each separated by a single space character(see the example)
// Additional messages in the output will result in the failure of test case

#include <stdio.h>

int main() {
    int V, W;
    scanf("%d", &V); 
    scanf("%d", &W); 

    
    if (W < 2 || W % 2 != 0 || V >= W) {
        printf("INVALID INPUT\n");
        return 0;
    }

    int TW = (2 * V - W / 2);
    int FW = V - TW;

    
    if (TW < 0 || FW < 0) {
        printf("INVALID INPUT\n");
    } else {
        printf("TW=%d FW=%d\n", TW, FW);
    }

    return 0;
}

