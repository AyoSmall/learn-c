// Value temporarily acts a different type
#include <stdio.h>

int main()
{
    for (int i = 0; i < 128; ++i)
    {
        printf("ASCII %d = %c\n", i, (char)i);                                  // typecast int to char
    }

    int total_score = 2100;
    int total_students = 30;
    printf
    (
        "Total score = %d; Total students = %d; Average score = %f", 
        total_score, total_students, (float)total_score / total_students
    );                                                                          // cast to float for remainder value

    return 0;
}