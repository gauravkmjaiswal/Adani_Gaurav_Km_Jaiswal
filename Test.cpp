#include <bits/stdc++.h>
using namespace std;

void sort(vector<vector<int>> &v,int index)
{
    cout<<"\nsorting using index "<<index<<"\n";
    vector<int> newV;
    sort(v.begin(),v.end(),[&](vector<int>v1,vector<int>v2){
        return v1[index]<v2[index];
    });
  
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<v[0].size();j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    
}
vector<vector<int>>  helper(int row,int col)
{
    vector<vector<int>> v(row,vector<int>(col,0));
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            v[i][j]=rand()%100;
        }
    }

    cout<<"2-D array \n";
    cout<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    return v;

}

void solver(int qa)
{
	int numberOfRows=6,numberOfColumns=4;
    // cin>>numberOfRows>>numberOfColumns;
    vector<vector<int>> v= helper(numberOfRows,numberOfColumns);
    int indexOfCol=2;
    // cin>>indexOfCol;
    sort(v,indexOfCol);
}


int main()
{

	int t = 1;
	int k = 1;
	while (t--)
	{
		solver(k);
		k++;
	}
	return 0;
}
