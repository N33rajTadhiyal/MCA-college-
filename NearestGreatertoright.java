import java.util.*;

public class NearestGreatertoright {
    public static void main(String[] args) {
        int a[]={1,3,2,4};
        int b[]=new int[4];
        Stack<Integer>s=new Stack<>();

        for(int i=a.length-1;i>=0;i--)
        {
            if(s.size()==0)
            {
                b[i]=-1;
            }
            else if(s.size()>0 && s.peek()>a[i])
            {
                b[i]=s.peek();
            }
            else if(s.size()>0 && s.peek()<a[i])
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
           
            // System.out.println(s.peek()+"  ");
        }


          for(int i =0;i<b.length;i++)
          {
            System.out.println(b[i]+"  ");
          }

    }
}
