                            #include <stdio.h>
                            #include <fcntl.h>
                            #include <unistd.h>
                            
                            // r = type open for read
                            // function FGETS get array       

                            int main(int argc, char **argv      ){

                                


                                
                                
                                int k = 0;
                                int j = 0;
                                int i;


                                for(i = 2 ; i < argc ; i ++){

                                
                                
                                // open

                                int fd;     

                                fd = open(argv[i] , O_RDONLY );     

                                // error open

                                if(fd == -1)
                                    printf("error open file ");


                                





                                // read

                                char buffer[100]; 

                                ssize_t bytes_read = read(fd, buffer, sizeof(buffer));


                                // loop e condicional para comparar a entrada com o buffer

                                while (k < bytes_read) {

                                    j = 0;
                                    if (buffer[k] == argv[1][j]) {

                                     while (argv[1][j] != '\0' && k + j < bytes_read && buffer[k + j] == argv[1][j]) {
                                     j++;
                                     }

                                      if (argv[1][j] == '\0') {
                                        printf("Match found: %s\n", argv[1]);
                                        break;
                                      }
                                    
                                    }
                                 k++;
                                }



                                
                                




                                // error   read

                                if (bytes_read == -1)
                                    printf("error read file ");


                                







                                

                                // write    (STDOUT_FILENO = retorna no terminal)   


                                // ssize_t bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

                                // error write
                                
                                //if (bytes_written == -1)
                                      //printf("error write file ");


                        






                                // close

                                
                                int closefile = close(fd);

                                // error close
                                
                                if (closefile == -1)
                                    printf("error close file ");


                                }
                                    


                            

                            
                            




                            }    