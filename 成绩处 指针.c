#include<stdio.h>
#define M 5
#define N 5
int main(void)
{
    char courses[M][30] , students[N][20] ;
    float tables[N][M] ;
    int c , s ;
    char * co = &courses[0][0] ;
    char * st = &students[0][0] ;
    float * gr = &tables[0][0] ;
    for( c = 0 ; c < M ; c++ )
        scanf( "%s" , courses[c] ) ;
    for( s = 0 ; s < N ; s++ )
    {
        scanf( "%s" , students[s] ) ;
        for(c=0;c<M;c++)
            scanf("%f",&tables[s][c]);
    }
    float sum = 0 ;
    for( s = 0 ; s < N ; s++ )
    {
        sum = 0 ;
    	for( c = 0 ; c < M ; c++ ) 
		    sum += * (gr+s*M+c);
		printf("Average score of %s is %.2f\n",students[s],sum/M);
    }
    float sum_ = 0 ;
    for( c = 0 ; c < M ; c++ )
    {
        sum_ = 0 ;
    	for( s = 0 ; s < N ; s++ )
		    sum_ += * (gr+s*M+c) ;
	    printf( "Average score of %s is %.2f\n",courses[c],sum_/N ) ;
    }
    for( c = 0 ; c < M ; c++ )
    {
        sum_ = 0;
        int cou = 0 ;
        for( s = 0 ; s < N ; s++ ) 
            sum_ += * (gr+s*M+c);
        for( s = 0 ; s < N ; s++ )
            if( *(gr+s*M+c) < sum_/N )
			cou++ ;
        printf( "Number of students lower than avg of %s is %d\n",courses[c],cou) ; 
	}
    for( c = 0 ; c < M ; c++ )
    {
        int cou = 0 ;
        for( s = 0 ; s < N ; s++ )
            if( *(gr+s*M+c) < 60 )
			cou++ ; 
        printf( "Number of students %s fail is %d\n" , courses[c],cou) ;
	}
    for( c = 0 ; c < M ; c++ )
	{
        
        int cou = 0 ;
        for( s = 0 ; s < N ; s++ )
            if( *(gr+s*M+c) >= 90 ) cou++ ; 
        printf( "Number of students %s perfect is %d\n" , courses[c],cou ) ; 
	}
    return 0 ;
}

