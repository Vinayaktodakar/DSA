#include<stdio.h>

#include<stdlib.h>



int main()

{

    int i;

    FILE *fp;

    fp = fopen("number.txt", "w");

    for(i=0;i<10;i++)

        fprintf(fp, "%d ", rand() % 100 + 10);



    fclose(fp);



    return 0;

}

