                        #include <stdio.h>
                        #include <fcntl.h>
                        #include <unistd.h>
                        
                        // r = type open for read
                        // function FGETS get array       

                        int main(int argc, char **argv      ){

                           


                            int total_read_bytes =  0;

                            int i;


                            for(i = 1 ; i < argc ; i ++){
                            
                            
                            // open

                            int fd;     

                            fd = open(argv[i] , O_RDONLY );

                            // error open

                            if(fd == -1)
                                printf("error open file ");





                            // read
                            
                            
                            char buffer[100]; 

                            ssize_t bytes_read = read(fd, buffer, sizeof(buffer));

                             // total read bytes
                        
                             total_read_bytes += bytes_read;

                             printf("Total read bytes: %d\n", total_read_bytes);

 
                            // error   read

                            if (bytes_read == -1)
                                printf("error read file ");
                        

                            // close

                            
                            int closefile = close(fd);

                            // error close
                            
                            if (closefile == -1)
                                printf("error close file ");


                            }
                                


                        

                        
                        




                        }