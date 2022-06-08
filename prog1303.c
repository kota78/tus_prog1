#include <stdio.h>
#define NDATA 1000
#define NMAX 40

main()
{
    double attend [NDATA], report[NDATA], repfree[NDATA];
    double exam[NDATA], score [NDATA];
    double a=0.3, b=0.3, c=0.4;
    int i, n, ID[NDATA];
    FILE *in_file, *out_file;
    char in_filename[NMAX], out_filename[NMAX];
    printf("Input filename: ");
    scanf("%s", in_filename);
    in_file = fopen(in_filename, "r");
    fscanf(in_file, "%d", &n);
    for(i=0; i<n; i++)
        fscanf(in_file, "%d %lf %lf %lf %lf", &(ID[i]), &(attend[i]), &(report[i]), &(exam[i]), &(repfree[i]));
        fclose(in_file);
    for(i=0; i<n; i++)
    score[i] = a*attend[i] + b*report[i] + c*exam[i] + repfree[i];

    printf("Output filename: ");
    scanf("%s", out_filename);
    out_file = fopen(out_filename, "w");
    fprintf(out_file, "%d\n", n);
    for(i=0; i<n; i++)
        fprintf(out_file, "%d %f\n", ID[i], score[i]);
    fclose(out_file);
}