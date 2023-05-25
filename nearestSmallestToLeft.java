import java.util.Stack;

public class nearestSmallestToLeft {
    public static void main(String[] args) {
        int a[]={4,5,2,10,8};//{-1,4,-1,2,2}
        int b[]=new int[a.length];
        Stack<Integer> s = new Stack<>();

        for(int i=0;i<a.length;i++)
        {
            if(s.size()==0)
            {
                b[i]=-1;
            }
            else if(s.size()>0 && s.peek()<a[i])
            {
                b[i]=s.peek();
            }
            else if(s.size()>0 && s.peek()>a[i])
            {
                while(s.size()!=0 && s.peek()>=a[i])
                {
                    s.pop();
                }
            }

            if(s.size()==0)
            {
                b[i]=-1;
            }
            else{
                b[i]=s.peek();
            }
            s.push(a[i]);
        }

        for(int i =0;i<b.length;i++)
        {
            System.out.println(b[i]+" ");
        }
    }
}
