// Hilal EKİNCİ - Oğuzhan BÖLÜKBAŞ

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 	
    
int checkNumInArray(int A[], int num, int index);
int size_array= 100; //Size of array
int upTo = 32767; // The maximum number can be in array
 
//Generate distinct random numbers by checking 
//previous numbers
 
int main(){
    int i;
    int n =size_array;
    int A[n];
    
    srand(time(NULL)); // Use current time as seed for random generator
    
    for(i=0; i< n; i++){
		A[i] = (rand()) % (upTo); // maximum value for integer
		while(1){
			if(!checkNumInArray(A, A[i],i)){break;}
			A[i] = (rand()) % (upTo);
		}
		printf("%d ", A[i]);
	}
    return 0;
}
int checkNumInArray(int A[], int num,  int index){
	int i;
	for(i=index-1 ; i >= 0; i--){
		if(A[i] == num)
		return 1;
	}
	return 0;	
}
