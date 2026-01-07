//gcc -o printf printf.c
#include <stdio.h>
#include <stdlib.h>
int main(int argc , char *argv[]){
    int n=0;
    int i=2;
    char *a=argv[1];
    if (argc>1){
        while(1){
            if(a[n]!='%'){
                if(a[n]==0)return 0;
                    
                if(a[n]=='\\'){
                        n++;
                        if(a[n]==0)return 0;
                    
                        if(a[n]=='n')printf("\n");
                        if(a[n]=='r')printf("\r");
                        if(a[n]=='t')printf("\t");
                        if(a[n]=='s')printf(" ");
                        if(a[n]=='0')printf("%c",0);
                        n++;
                        if(a[n]==0)return 0;
                 
                }else{
                    printf("%c",a[n]);
                    n++;
                    if(a[n]==0)return 0;
                }    
            }        
            if (a[n]=='%'){
                n++;
                if(i>argc+2)return 0;
                    
                if(a[n]==0)return 0;

                printf("%s",argv[i]);
                    
                i++;
                if(a[n+1]==0)return 0;
                n++;
                if(a[n]==0)return 0;
            }
            
           
            if(a[n]==0)return 0;
        }
    }
    
    return 0;
}
