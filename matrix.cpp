 #include<iostream>
 using namespace std;

 int main()
 {
    int rows;
    int column;

    cout<<"eneter rows:";
    cin>>rows;

    cout<<"enter column:";
    cin>>column;

    int arr[rows][column];

    for(int i = 0; i < rows; i ++)
    {
        for(int j = 0; j < column; j++)
        {
            cin>>arr[i][j];
        }
    }

     for(int i = 0; i < rows; i ++)
    {
        for(int j = 0; j < column; j++)
        {
            cout<<"\t"<<arr[i][j];
        }

        cout<<endl;

    }
 }  