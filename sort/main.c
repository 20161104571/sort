//
//  main.c
//  sort
//
//  Created by w20161104571 on 17/6/15.
//  Copyright © 2017年 w20161104571. All rights reserved.
//
#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    //printf("Hello, World!\n");
    //return 0;
    FILE *fp1,*fp2;
    int a[10],k;
    int i,j,t,n;
    fp1=fopen("//Users//w20161104571//Desktop//sort//sortout.txt","w+");
    fp2=fopen("//Users//w20161104571//Desktop//sort//sort.txt","r+");
       if (fp2==NULL)
        {
            printf("打开文件错误，要打开的文件可能不存在");
        }
        else
        {
            while(fscanf(fp2,"%d",&n)!=EOF)
            {
                for(i=0;i<n;i++)
                {
                    fscanf(fp2,"%d",&a[i]);
                }
                for(j=0;j<n-1;j++)
                {
                    for(k=0;k<n-1-j;k++)
                    {
                        if(a[k]>a[k+1])
                        {
                            t=a[k];
                            a[k]=a[k+1];
                            a[k+1]=t;
                        }
                    }
                }
                for(k=0;k<i;k++)
                {
                    printf("%d ",a[k]);
                    fprintf(fp1,"%d ",a[k]);
                }
                fprintf(fp1,"\n");
                printf("\n");
            }
            fclose(fp1);
            fclose(fp2);
        }
    
        return 0;
    }

