#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    // Check how many filenames user supplied.
    // If not enough, error message and exit.
    if (argc == 1)
    {
        printf("You need to supply a filename\n");
        exit(1);
    }
    
    // Check if output file is the same as input file
   // if (strcmp(argv[1], argv[2]) == 0)
    //{
    //    printf("Output file is same as input file\n");
    //    exit(1);
    //}
    
    // open first file for reading
    FILE *in = fopen(argv[1], "r");
    if (!in)
    {
        printf("Can't open %s for reading\n", argv[1]);
        exit(1);
    }
    
    // Open second file for writing
   /* FILE *out = fopen(argv[2], "w");
    if (!out)
    {
        printf("Can't open %s for writing\n", argv[2]);
        exit(1);
    }*/
    
    // Loop through first file, one line at a time
    char line[1000];
    int linecount = 0;
    int letter = 0;
    while(fgets(line, 100, in) != NULL)
    {
        for (int i = 0; i < strlen(line); i++)
        {
            // Convert lower case to upper case
            //if (line[i] >= 'a' && line[i] <= 'z')
            //{
            //    line[i] = line[i] - 32;
            //}
            letter++;
        }
        linecount++;
        // Write line to second file
       // fprintf(out, "%s", line);
        
    }
        
    // Close both files
    fclose(in);
    //fclose(out);
    printf("Letter count: %d \n", letter);
    printf("Line count: %d \n", linecount);
}