#include <iostream>
using namespace std;
int main()
{
  cout <<"<--- MATRICES SOLVER --->" << endl;
  int r,c;
  cout << "Enter the number of rows:- ";
  cin >> r;
  cout << "Enter the number of columns:- ";
  cin >> c;
  int a[r][c],b[r][c],i,j;
  cout << "Enter the elements of the first matrix:- " << endl;
  for(i=0;i<r;i++)
  {
     for(j=0;j<c;j++)
       {
         cin >> a[i][j];
       }
   }
  cout << "FIRST MATRIX\n"; 
  for(i=0;i<r;i++)
  {
  	for(j=0;j<c;j++)
  	{
 		cout << a[i][j] << "\t";
  	}
  	cout << endl;
  }
  cout <<"Enter the elements for second matrix:- " << endl;
  for(i=0;i<r;i++)
  {
  	for(j=0;j<c;j++)
  		{
			cin >> b[i][j];  	
		}
  }
  cout << "SECOND MATRIX\n";
  for(i=0;i<r;i++)
  {
  	for(j=0;j<c;j++)
  		{
	    	cout << b[i][j] << "\t";	
		}
		cout << endl;
  }
  return 0;
}  