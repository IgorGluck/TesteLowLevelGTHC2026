                #include <stdio.h>
                #include <fcntl.h>
                #include <unistd.h>
                
                // r = type open for read
                // function FGETS get array       

                int main(){

                    
                    // open

                    int fd; 

                    fd = open("testecat.txt" , O_RDONLY );

                    // error 

                    if(fd == -1)
                        printf("error open file ");
                        


                

                
                




                }