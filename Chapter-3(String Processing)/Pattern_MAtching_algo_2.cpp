#include<stdio.h>
#include<string.h>
#define NO_OF_CHARS 256

/*This function builds the TF table which represent Finite Automata for a given Pattern. */
void buildTransitionTable(char *pat,int M,int TF[][NO_OF_CHARS])
{
    int i,lps=0,x;
    //Fill entries in first row.
    for(x=0;x<NO_OF_CHARS;x++)
    TF[0][x]=0;
    TF[0][pat[0]]=1;

    //Fill entries in other row.
    for(i=1;i<=M;i++)
    {
        //Copy value from row at index lps.
        for(x=0;x<NO_OF_CHARS;x++)

        {
            TF[i][x]=TF[lps][x];
        //Update the entry corresponding to this character.
        TF[i][pat[i]]=i+1;

        //Update lps for nest row to be filled
        }
        if(i<M)
            lps=TF[lps][pat[i]];


    }
}
//Prints all occurences of pat in txt
void searchUsingPatternMatching2(char *pat,char *txt)
{
    int M=strlen(pat);
    int N=strlen(txt);

    int TF[M+1][NO_OF_CHARS];

    buildTransitionTable(pat,M,TF);

    //Process text over FA,
    int i,j=0;
    for(i=0;i<N;i++)
    {
        j=TF[j][txt[i]];
        if(j==M)
        {
            printf("Index of pattern %d\n",i-M+1);
        }
    }
}
//Main Function
int main()
 {
     char *txt="worHello world";
     char *pat="wor";
     searchUsingPatternMatching2(pat,txt);
    return 0;
}
