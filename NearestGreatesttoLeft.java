import java.util.*;
public class NearestGreatesttoLeft {
    public static void main(String[] args) 
    {
        int a[]={1,3,2,4,1};//={-1,-1,3,-1,4}
        Stack<Integer>s = new Stack<>();
        int b[]=new int[a.length];

        for(int i =0;i<a.length;i++)
        {
            if(s.size()==0)
            {
                b[i]=-1;
            }
            else if(s.peek()>a[i])
            {
                b[i]=s.peek();
            }
            else if(s.peek()<a[i])
            {
                while(s.size()>0 && s.peek()<=a[i])
                {
                    s.pop();
                }
                if(s.size()==0)
                {
                    b[i]=-1;
                }
                else{
                    b[i]=s.peek();
                }
            }
            s.push(a[i]);
        }
        for(int i =0;i<b.length;i++)
        {
          System.out.println(b[i]+" ");
        }
    }
}
