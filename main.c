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

void isDecMult(char text){

}

void printDifWords(char *sq, char *W){
    int i=0;
    int wlen=0;
    char tmp[100];
    while(W[wlen]){
        wlen++;
    }
    while(sq[i]){
        while(sq[i]&&(sq[i]==','||sq[i]==' '||sq[i]=='.')){
            i++;
        }
        if(!sq[i]){
            break;
        }
        int j=0;
        while(sq[i]&&sq[i]!=','&&sq[i]!=' '&&sq[i]!='.'){
            tmp[j++]=sq[i++];
        }
        tmp[j]='\0';
        int sqlen=j;
        int eq=(sqlen==wlen);
        if(eq){
            int k=0;
            while(k<sqlen){
                if(tmp[k]!=W[k]){
                    eq=0;
                    break;
                }
                k++;
            }
        }
        if(!eq){
            printf("%s ",tmp);
        }
    }
}

int main()
{
    char s1[]="asdfghjkl";
    char s2[]="sdafe";

    squeeze(s1,s2);
    printf("%s\n",s1);

    char text[]="1234";

    char sq[]="aaa, bbb, bbbc, bbbb, bb.";
    char W[]="bbb";
    printDifWords(sq,W);

    return 0;
}
