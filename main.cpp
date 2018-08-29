#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    string word;
    int op=6;
    printf("\t\t Lives %i",op);
    do{
    printf("\n\nIs the process of select the best path [_._._._._._._]\n\n");
         fflush(stdin);
        cin>>word;

        if(word=="routing"){
            printf("\nCORRECT!!!! \t [r.o.u.t.i.n.g]  ");
            op=0;
        }else{
            printf("\nINCORRECT!!!");
            op--;
            printf("\t\t Lives %i",op);
        }

    }while(op!=0);

    printf("GAME OVER");
        return 0;
}
