#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int GetRandom(int min,int max);

int main(){

    int i,result[2],total,num = 0;

    unsigned int now = (unsigned int)time( 0 );

    srand( now );

    printf("Rolling the dice....\n");

    for(i = 0;i < 2;i++){

        

        num = i + 1;

        result[i] = GetRandom(1,6);

        printf("Die %d:%d\n",num,result[i]);


        num = 0;

    }

    total = result[0] + result[1];

    printf("total value %d\n",total);

    return 0;

}

int GetRandom(int min,int max)
{
    int num;
    num = min + (int)(rand()*(max-min+1.0)/(1.0+RAND_MAX));

	return num;
}
