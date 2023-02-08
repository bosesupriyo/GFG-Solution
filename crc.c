#include<stdio.h>
#include<string.h>
int main(){
    int n,m;
    char str[100],ans[100];
        printf("ENTER THE CODE WORD ::\n");
        gets(str);
        n=strlen(str);
        for(int i=0;i<n;i++){
            ans[i]=str[i];
            
        }
        char div[100];
            printf("ENTER THE DIVISOR ::\n");
            gets(div);
            m=strlen(div);
            for(int i=n;i<=(m+n-1);i++){
                str[i]='0';
            }
            for(int i=0;i<n;i++){
                if(str[i]=='0')
                    continue;
                else{
                        int k=0;
                        for(int j=i;j<(m+i);j++){
                            if(str[i]==div[k])
                                str[i]='0';
                            else
                                str[i]='1';
                                k++;
                        }
                    }
            }
            for(int i=n;i<(m+n);i++){
                ans[i]=str[i];
            }
            int a=strlen(ans);
            for(int i=0;i<(m+n);i++){
                printf("%c",ans[i]);
            }
return 0;
            
        
        
    
    
}