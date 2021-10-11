/*
4.	Receive an array of n integers, n is even. 
Sort the first half in increasing order and second half decreasing order
Ex:
 ____________________________________
| Input:  8 7 9 2 1 5 2 0            |
| Output: 2 7 8 9 5 2 1 0            |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	argc--;
	int n = argc;
	int test_array[n],a;
	for(a=0; a<n;a++){
		test_array[a] = atoi(argv[a+1]);
	}
	//Your codes here
	if (argc%2!=0) {
		printf("Invalid. Please input an even number of values");
	}else {for (int i = 0; i < argc/2; i++) {
        for (int j = i + 1; j < argc/2; j++) {
            if (test_array[i] > test_array[j]) {
               
                int temp1 = test_array[i];
                test_array[i] = test_array[j];
                test_array[j] = temp1;
            }
        }
    }
	for (int i = 0; i < argc/2; i++) {
        printf("%d ", test_array[i]);
    }

	for (int i = argc/2 ; i < argc; i++) {
        for (int j = i + 1; j < argc; j++) {
            if (test_array[i] < test_array[j]) {
               
                int temp2 = test_array[i];
                test_array[i] = test_array[j];
                test_array[j] = temp2;
            }
        }
    }
	for (int i = argc/2; i < argc; i++) {
        printf("%d ", test_array[i]);
    }
	}
	
	return 0;
}
