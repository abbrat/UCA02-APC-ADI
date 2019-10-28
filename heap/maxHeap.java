package javfiles;
import java.util.*;
public class maxheap {
     public int n=7;
	int arr[]=new int[n];
     
	public static void main(String args[])
	{ 
		maxheap mh=new maxheap();
	   
		mh.insertvalue();
		int g=mh.checkMaxHeap();
		if(g==0)
		{
			System.out.println("not max heap");
		}
		else
			System.out.println(" max heap");
		for(int i=2;i>=0;i--)
			mh.makeMaxHeap(i);
		int k=mh.checkMaxHeap();
		if(k==0)
		{
			System.out.println("not max heap");
		}
		else
			System.out.println(" max heap");
	   
	    
	}
	
	int checkMaxHeap()
	{
		for(int i=0;i<n/2;i++)
		{
			int l=(2*i)+1,max=0;
			int r=(2*i)+2;
			if(l>r)
			{
				max=l;
			}
			else if(r>l)
			{
				if(r<n)
					max=r;
				else
					max=l;
			}
			if(arr[max]>arr[i])
			{
				return 0;
			}
		}
		return 1;
	}
	
	
	
	void insertvalue()
     {
		Scanner st=new Scanner(System.in);
    	for(int i=0;i<n;i++)
    	{
    		arr[i]=st.nextInt();
    	}
     }
	void makeMaxHeap(int i)
	{
	
			int l=(2*i)+1,max=0;
			int r=(2*i)+2;
			if(l<7 && arr[l]>arr[i])
			{
				max=l;
			}
			else
				max=i;
			if(r<7 && arr[r]>arr[max])
			{
				max=r;
			}
			if(max!=i)
			{
				int temp=arr[max];
				arr[max]=arr[i];
				arr[i]=temp;makeMaxHeap(max);
			}
			
	}	
	
}
