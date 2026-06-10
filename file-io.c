// Data transfer with external files
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int append_count = 2;

    FILE* ptr_to_file = fopen("./file.txt", "a");               // fopen() returns a FILE*
    if (!ptr_to_file)
    {
        perror("File failed to open.");
        return EXIT_FAILURE;
    }
    else
    {
        for (int i = 0; i < append_count; ++i)
        {
            fprintf(ptr_to_file, "Printing to file...");
        }

        fclose(ptr_to_file);                                    // fclose() returns exit code (0 for success)
    }

    return 0;
}

/*
    fopen
        - r     read only
        - w     write only (overwrites if file exists)
        - a     write to end of file only
        - r+    
        - w+    
        - a+    
    fwrite
    fread
    fprintf
    fscanf
    fgetc
    fputc
*/