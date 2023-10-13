#include <stdio.h>
#include <string.h>

int main()
{

    int Size = 5;
     int maxindex, sTemp;
    int Score[Size];
    char Name[Size][10], nTemp[10];

    printf("Enter Sutudent Data: \n");

    printf("\n----------------------\n");
    for (int i = 0; i < Size; i++)
    {
        printf("Enter Student Name: ");
        scanf("%s", Name[i]);
        printf("Enter Student Score: ");
        scanf("%d", &Score[i]);
        printf("\n----------------------\n");
    }

    // selection sort
    for (int i = 0; i < Size - 1; i++)
    {

        maxindex = i;

        for (int j = i + 1; j < Size; j++)
        {

            if (Score[j] > Score[maxindex])
            {
                maxindex = j;
            }
        }

        if (maxindex != i)
        {

            sTemp = Score[i];
            Score[i] = Score[maxindex];
            Score[maxindex] = sTemp;

            strcpy(nTemp, Name[i]);
            strcpy(Name[i], Name[maxindex]);
            strcpy(Name[maxindex], nTemp);
        }
    }

    printf("\n -------- Student List -------------- \n");

    printf("\n----------------------\n");

    for (int i = 0; i < Size; i++)
    {

        printf("Name: %s \n", Name[i]);
        printf("Score: %d \n", Score[i]);

        if (i == 0)
        {
            printf("Congratulation \n");
        }

        if(Score[i] < 50){
            printf("Fail \n");
        }else{
            printf("Pass \n");
        }

        printf("\n----------------------\n");
    }

    return 0;
}
