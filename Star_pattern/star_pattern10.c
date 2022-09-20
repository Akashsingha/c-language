/* *
  ***
 *****
*******
 *****
  ***
   *  */
  #include<stdio.h>
  
  int main()
  {
      int rows,k,n;
      printf("Enter number of rows\n");
      scanf("%d",&rows);
      n = (rows + 1)/2;
      for (int i = 1; i <= rows; i++)
      {
          i<=n? k++:k--;
          for (int j = 1; j <= rows; j++)
          {
              if (j>=n+1-k && j <=n-1+k )
              {
                  printf("*");
              }
              else
              {
                  printf(" ");
              }
           }
          printf("\n");
      }
      
      return 0;
  }