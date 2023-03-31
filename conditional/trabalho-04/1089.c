#include <stdio.h>

int v[3];

int main()
{
    int n;
    int result = 0;
    int p0, p1;
    
    do
      {
        scanf("%d", &n);
        
        if(n == 0)
        {
          return 0;
        } 
  
        result = 0;
        
        scanf("%d", &v[0]);
        scanf("%d", &v[1]);
        
        if(n == 2)
        {
         if(v[0] != v[1]) result = 2;
        }
        else
        {
          p0=v[0];              
          p1=v[1];
                  
          for(int i = 2; i < n; i++)
          {
            scanf("%d", &v[2]);
            
            if(((v[1]>v[0]) && (v[1]>v[2])) || ((v[1]<v[0]) && (v[1]<v[2])))
            ++result;
                v[0]=v[1];
                v[1]=v[2];
          }

          if ((p0>p1 && p0>v[2]) || (p0<p1 && p0<v[2])) 
          ++result;

          if ((v[2]>v[0] && v[2]>p0) || (v[2]<v[0] && v[2]<p0)) 
          ++result;
          
        }
        
             printf("%d\n", result);
        } while(n != 0);
}