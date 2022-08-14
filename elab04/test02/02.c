#include<stdio.h>
#include<stdlib.h>

int main(){
  int i,j,mat[3][3]={{},{}};
  //loop for show matrix
  printf("Please Input 3x3 dimension matrix\n");
  for(i=0;i<3;i++){
      for(j=0;j<3;j++){
        printf("Input Number for(%d,%d): ",i+1,j+1);
        scanf("%d",&mat[i][j]);
        
      }
    
  }
  printf("\n=== Input Matrix ===\n\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%5d", mat[i][j]);
        }
        printf("\n");
    }
    /*int p1,p2,p3,n1,n2,n3;
    p1=1;
    p2=1;
    p3=1;
    n1=1;
    n2=1;
    n3=1;
    //find positive det
    for(i=0;i<3;i++){
        for(j=0;j==3;j++){
            if(i==0 && j==0){
                p1=1;
                p1=p1*mat[i][j];
            }
            else if(i==1 && j==1){
                p1=1;
                p1=p1*mat[i][j];
            }
            else if(i==2 && j==2){
                p1=1;
                p1=p1*mat[i][j];
            }
            else if(i==0 && j==1){
                p2=1;
                p2=p2*mat[i][j];

            }
            else if(i==2 && j==0){
                p2=1;
                p2=p2*mat[i][j];
            }
            else if(i==1 && j==2){
                p2=1;
                p2=p2*mat[i][j];
            }
            else if(i==0 && j==2){
                p3=1;
                p3=p3*mat[i][j];
            }
            else if(i==1 && j==0){
                p3=1;
                p3=p3*mat[i][j];
            }
            else if(i==2 && j==1){
                p3=1;
                p3=p3*mat[i][j];
            }
    

        }   
    }
    //find negetive det
    for (i=0;i<3;i++){
        for(j=0;j==3;j++){
            if(i==0 && j==0){
                n1=1;
                n1=n1*mat[i][j];
            }
            else if(i==2 && j==1){
                n1=1;
                n1=n1*mat[i][j];
            }
            else if(i==1 && j==2){
                n1=1;
                n1=n1*mat[i][j];
            }
            else if(i==0 && j==1){
                n1=1;
                n2=n2*mat[i][j];
            }
            else if(i==1 && j==0){
                n1=1;
                n2=n2*mat[i][j];
            }
            else if(i==2 && j==2){
                n1=1;
                n2=n2*mat[i][j];
            }
            else if(i==0 && j==2){
                n1=1;
                n3=n3*mat[i][j];
            }
            else if(i==2 && j==0){
                n1=1;
                n3=n3*mat[i][j];
            }
            else if(i==1 && j==1){
                n1=1;
                n3=n3*mat[i][j];
            }

    
        }
    
    }
    int sum;
    sum=(p1+p2+p3)+(n1+n2+n3);*/
    int result=0;
    for (i=0;i<1;i++)
    {
        result=result+(mat[0][i]*(mat[1][(i+1)%3] *
            mat[2][(i+2)%3]-mat[1][(i+2)%3] *
            mat[2][(i+1)%3]));
    }

    for (i=1;i<=2;i++)
    {
        result=result+(mat[0][i]*(mat[1][(i+1)%3]*mat[2][(i+2)%3]-mat[1][(i+2)%3]*
                mat[2][(i+1)%3]));
    }
    
    printf("\nDeterminant of matrix is %d.",result);
    return 0;
}