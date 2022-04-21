 #include <conio.h>

int main()
{
    int i,j,size;
    int count=0 ;

    printf("Enter the number of digits in your id: ");
    scanf("%d", &size);
    int arr[size],arr2[size];

    printf("Enter the digits of the student id: ");
    for(i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }
  for(i=0; i<size; i++)
    {
        count=1;
        if(arr[i]!=-1)
		{
		    for(j=i+1; j<size; j++)
            {
        	   if(arr[i]==arr[j])
        	    {
			       count++;
			       arr[j]=-1;
		       }
	       }
	       arr2[i]=count;
		}
    }
    int numcount=0;
    printf("Unique numbers in the  student id is :\n");
    for(i=0; i<size; i++)
    {
        if(arr[i]!=-1)
        {
            if(arr2[i]==1)
        	printf("%d\n",arr[i]);
        	numcount++;
		}
    }
    printf("\nTotal number of unique elements: %d", numcount-1);
    return 0;
}
