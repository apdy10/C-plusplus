#include<iostream>
using namespace std;
/* Usage of pointer to an array */
main( ) 
{  
      int  s[5][2] = {
           {1, 2},
           {1, 2},
           {1, 2},
           {1, 2}
           } ;
            
      int (*p)[2] ;
      int  i, j;
      for (i = 0 ; i <= 3 ; i++)
      {
            p=&s[i];
            cout<<"Row"<<i<<":";
            for (j = 0; j <= 1; j++)
                cout<<"\t"<<*(*p+j);
            cout<<endl;
      } 
       
}