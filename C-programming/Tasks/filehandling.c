#include <stdio.h>

int main()
{
    /* Declare file pointers, byte reads and buffer */
    FILE *sourceFile;
    FILE *destinationFile;
    char buffer[1024];
    size_t bytesRead;

    /* Open source file for reading */
    sourceFile = fopen("source.txt", "r");

    /*Handling error if file is not found*/
    if (sourceFile == NULL)
    {
        printf("Error opening source file.\n");
        return 1;
    }

    /* Open destination file for writing, create if it does not exists */
    destinationFile = fopen("destination.txt", "w");

    /*Handling error if the file fails to open*/
    if (destinationFile == NULL)
    {
        printf("Error opening destination file.\n");
        fclose(sourceFile);
        return 1;
    }

    /* Copy content from source to destination in a loop till everythin is complitely copied */
    while ((bytesRead = fread(buffer, 1, sizeof(buffer), sourceFile)) > 0)
    {
        fwrite(buffer, 1, bytesRead, destinationFile);
    }

    /* Close both files */
    fclose(sourceFile);
    fclose(destinationFile);

    /* Print success message to show content has been copied with no errors */
    printf("File read successfully\nContent from 'source.txt'\nwritten to 'destination.txt\n");

    return 0;
}
