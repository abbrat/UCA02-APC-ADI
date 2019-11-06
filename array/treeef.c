  void printarray( int **array, int n,int i,int j)
  {

     if(j<0||j>=n||i>=n)
    {
        printf("tree ends here\n");
    }
    else
    {
        printf("%d\n",array[i][j]);
        printarray(array,n,i+1,j-1);
         printarray(array,n,i+1,j+1);
    }

  }

  int main()
  {
      int n = 4;
      int i, j;

      int **array = (int **) malloc(n * sizeof(int*));

      for (i=0; i<n; i++)
      {
        array[i] = (int *) malloc(n* sizeof(int));
      }

     for (i=0; i<n; i++)
     {
       for (j=0; j<n; j++)
       {
           scanf("%d ", &array[i][j]);
       }
     }

     printarray(array, n,0,1);

     return 0;
  }
