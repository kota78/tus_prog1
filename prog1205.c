#include<stdio.h>
#define NMAX 5

typedef union mixeddata
{
    char status;
    double data;
} MIXD;

typedef struct expdata
{
    int flag;
    MIXD result;
} EXPD;


main()
{
    EXPD x[NMAX];
    int i, i_error=0, i_nodata=0, i_data=0;
    double sum_data=0;

    x[0].flag=1;
    x[0].result.data=170.0;
    x[1].flag=1;
    x[1].result.data=175.0;
    x[2].flag=0;
    x[2].result.status='N';
    x[3].flag=0;
    x[3].result.status='E';
    x[4].flag=1;
    x[4].result.data=190.0;

    for(i=0; i<NMAX; i++)
    {
        switch (x[i].flag)
        {
        case 0:
            switch (x[i].result.status)
            {
            case 'E':
                i_error++;
                break;
            case 'N':
                i_nodata++;
                break;
            }
            break;
        case 1:
            i_data++;
            sum_data += x[i].result.data;
            break;
        }
    }
    printf("Error = %d, Data missing = %d, Eddective data = %d\n", i_error, i_nodata, i_data);
    printf(" sum = %f, average = %f\n", sum_data, sum_data/i_data);
}