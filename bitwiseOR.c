///Perform a bitwise OR operation bewtween two binary strings

#include <stdio.h> 
#include <string.h>
#include <stdlib.h>

void ORfunction(char * strArr[], int arrLength){

  int len;
  char res[32];
  unsigned int eq = 1;
  
  if (arrLength == 2){
     eq = strlen(strArr[0]) != strlen(strArr[1]) ? 0 : 1;
     if (eq & 1){
        for (int i = 0; i < arrLength; i++){
            len = strlen(strArr[i]);
            for (int j = 0; j < len; j++){
              if (strArr[i][j] != '0' && strArr[i][j] != '1'){
                 fprintf(stderr, "non-binary values in array");
                 exit(-1);
              } else res[j] |= (int)strArr[i][j];
            }
        }
       printf("%s", res);
      } else fprintf(stderr, "Elements should be the of smae length!");
  } else fprintf(stderr, "Array must be of lenght 2.");
      
}

int main(void) { 
   
  // keep this function call here
  char * A[] = {"00110", "00110"};
  int arrLength = sizeof(A) / sizeof(*A);
  ORfunction(A, arrLength);
  return 0;
    
}