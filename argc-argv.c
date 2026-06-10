// Accepting arguments to main from the command line
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])                                        // argument count, argument values
{
    if (argc != 2)                                                      // program name + arguments
    {
        printf("usage: %s filename\n", argv[0]);                        // assume argv[0] is the program name
    }
    else
    {
        FILE* file_ptr = fopen(argv[1], "wb");                          // assume argv[1] is filename 

        if (!file_ptr)
        {
            perror("Could not open file.");
            exit(EXIT_FAILURE);
        }
        else
        {
            printf("WRITING ALL ASCII TEXT TO stdout AND FILE > %s\n\n", argv[1]);
            for (int i = 33; i < 127; ++i)
            {
                printf("%c <---char %d\n", i, i);                       // tracking the position of control characters
                fputc(i, file_ptr);
            }

            if (ferror(file_ptr))
            {
                perror("An error occured while writing to file");
            }

            fclose(file_ptr);
        }
    }

    return 0;
}