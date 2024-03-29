#include "../include/functions.h"

int showMenu(void)
{
    int option = 0;
    int ret_val_sscanf = 0;
    char *ret_val_fgets = NULL;
    char *char_buffer = NULL;

        char_buffer = (char *)malloc(CHAR_BUFFER_SIZE * sizeof(char));

        fprintf(stdout, "\nChoose a function to call (number); any other number exits the program:\n");
        fprintf(stdout, "1 - PrefixTree: reads a prefix tree from a text file and returns a prefix tree representation of that table.\n");
        fprintf(stdout, "2 - PrintTable: receives as input a prefix tree and prints to screen the corresponding table.\n");
        fprintf(stdout, "3 - LookUp: receives as input a prefix tree and an address and returns the next-hop for that address\n");
        fprintf(stdout, "4 - InsertPrefix: that receives as input a prefix tree, a prefix and the associated next-hop, and returns a prefix tree with the prefix included.\n");
        fprintf(stdout, "5 - DeletePrefix: receives as input a prefix tree and a prefix and returns a prefix tree with the prefix withdrawn.\n");
        fprintf(stdout, "6 - BONUS - BinaryToTwoBit: receives as input a prefix tree and returns and equivalent two-bit prefix tree.\n");
        fprintf(stdout, "7 - BONUS - PrintTableEven: receives as input a two-bit prefix table and prints to screen the corresponding prfix table of even length prefixes.\n");

        ret_val_fgets = fgets(char_buffer, sizeof(char_buffer), stdin);
        if(NULL == ret_val_fgets)
        {
            fprintf(stdout, "Error reading option, try again.\n");
        }
        ret_val_sscanf = sscanf(char_buffer, "%d\n", &option);
        if(1 != ret_val_sscanf)
        {
            fprintf(stdout, "Error reading option, try again.\n");
        }

        free(char_buffer);

    return option;
}

bool checkValidPrefix(char prefix[PREFIX_SIZE])
{
    int i = 0;

        for(i = 0; i < PREFIX_SIZE; i += 1)
        {
            if((prefix[i] != '0') && (prefix[i] != '1') && (prefix[i] != '\0'))
            {
                // reset the array before we return
                for(i = 0; i < PREFIX_SIZE; i += 1)
                {
                    prefix[i] = '\0';
                }
                return false;
            }
        }

    return true;
}
