#include <stdio.h>
#include <string.h>
    int main()
    {
 
        char name[50][50], tname[50][50], temp[50];
        int i, j, n;
 
        printf("Enter size of an array:\n");
        scanf("%d", &n);
        printf("Enter %d names in array\n", n);
 
        for (i = 0; i < n; i++) 
        {
            scanf("%s", name[i]);
            strcpy(tname[i], name[i]);
        }
 
        for (i = 0; i < n - 1 ; i++)
        {
            for (j = i + 1; j < n; j++)
            {
                if (strcmp(name[i], name[j]) > 0) 
                {
                    strcpy(temp, name[i]);
                    strcpy(name[i], name[j]);
                    strcpy(name[j], temp);
                }
            }
        }
        printf("Sorted names are:\n");
        for (i = 0; i < n; i++) 
        {
            printf("%s\n", name[i]);
        }
        return 0;
 
    }
