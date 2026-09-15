                    #include <stdio.h>
                    #include <fcntl.h>
                    #include <unistd.h>
                    
                    // r = type open for read
                    // function FGETS get array       

                    int main(){


                        // open

                        int fd; 

                        fd = open("testecat.txt" , O_RDONLY );

                        // error open

                        if(fd == -1)
                            printf("error open file ");





                        // read

                        char buffer[100]; 

                        ssize_t bytes_read = read(fd, buffer, sizeof(buffer));




                        // error   read

                        if (bytes_read == -1)
                            printf("error read file ");


                        

                        // write    (STDOUT_FILENO = retorna no terminal)   


                        ssize_t bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

                        // error write
                        
                        if (bytes_written == -1)
                            printf("error write file ");


                

                        // close

                        
                        int closefile = close(fd);

                        // error close
                        
                        if (closefile == -1)
                            printf("error close file ");


                        
                            


                    

                    
                    




                    }