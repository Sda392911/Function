//
//  main.c
//  Function
//
//  Created by Yvan Gauthier on 13/02/2025.
//

#include <stdio.h>


// This is program in a simple fonction which is part of my training to
// Well understand the C language and eductate myself.

int FirstFunction(void) {
    // This is where the first function will be written.
    // The functon output in a integer.
    int age;
    
    printf("How old are you ? ");
    scanf("%d", &age);
    printf("You are %d\n", age);
    return 0;
}

int main(int argc, const char * argv[]) {
    
    // Simple condisonal statement.
    if ( FirstFunction() <= 18) {
        printf("You can do that\n");
    } else {
        printf("You cannot do that just yet\n");
    }
    return 0;
}
