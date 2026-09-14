#include <stdio.h>
#include <stdlib.h>

// implementation ECHO without specific requirement
// funcition IF for add spaces between arguments

    int main(int argc, char **argv){    

        argv[0] = "psps";       
   
        int i;
        for(i = 1 ; i < argc ; i ++){
          printf("%s", argv[i]);
          if(i < argc - 1)
            printf(" ");
          
        }   
        
    return 0;
    }
