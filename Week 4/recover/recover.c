#include <cs50.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

// Define a byte type for one block
typedef uint8_t BYTE;

// JPEG header starts with: 0xff 0xd8 0xff 0xe? (where ? can be any value between 0 and 15)
bool is_jpeg_header(BYTE buffer[])
{
    return buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff &&
           (buffer[3] & 0xf0) == 0xe0;
}

int main(int argc, char *argv[])
{
    // Ensure proper usage
    if (argc != 2)
    {
        printf("Usage: ./recover IMAGE_FILE\n");
        return 1;
    }

    // Open forensic image
    FILE *file = fopen(argv[1], "r");
    if (!file)
    {
        printf("Could not open file %s\n", argv[1]);
        return 1;
    }

    BYTE buffer[512];
    FILE *img = NULL;
    char filename[8];
    int file_count = 0;

    // Read 512-byte blocks
    while (fread(buffer, sizeof(BYTE), 512, file))
    {
        // If new JPEG signature is found
        if (is_jpeg_header(buffer))
        {
            // Close previous image if already open
            if (img)
            {
                fclose(img);
            }

            // Create a new file for the new JPEG
            sprintf(filename, "%03d.jpg", file_count++);
            img = fopen(filename, "w");
        }

        // Write to the currently open JPEG file if there is one
        if (img)
        {
            fwrite(buffer, sizeof(BYTE), 512, img);
        }
    }

    // Close any remaining files
    if (img)
    {
        fclose(img);
    }
    fclose(file);

    return 0;
}
