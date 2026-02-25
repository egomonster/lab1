#include <stdio.h>

int main()
{
    char s1[]="asdfghjkl";
    char s2[]="asdfe";

    int i=0, k=0;
    while(s1[i]!="\0"){
        int j=0;
        int found=0;
        while(s2[j]!="\0"){
            if(s1[i]==s2[j]){
                found=1;
            }
            j++;
        }
        if(!found){
            s1[k++]=s1[i];
        }
        i++;
    }
    s1[k]="\0";


    printf("%s\n",s1);
    return 0;
}
