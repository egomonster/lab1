#include <stdio.h>

void squeeze(char s1[], char s2[]){
    int i=0, k=0;
    while(s1[i]){
        int j=0;
        int found=0;
        while(s2[j] && !found){
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
    s1[k]='\0';
}

int main()
{
    char s1[]="asdfghjkl";
    char s2[]="sdafe";

    squeeze(s1,s2);
    printf("%s\n",s1);

    return 0;
}
