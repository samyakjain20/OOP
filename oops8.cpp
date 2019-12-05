#include<iostream>
#include<fstream>
using namespace std;
int main()
{
char ch;
fstream f;
f.open("first.txt",ios::out);
if(!f)
{
cout<<"Enter the opening file"<<endl;
return 0;
}
cout<<"file name first.txt created !!!"<<endl;
f<<"SY B.TECH Computer Div A, Batch_A2, VIIT, Pune "<<endl;
f.close();
f.open("first.txt",ios::in);
if(!f)
{
cout<<"Error opening file"<<endl;
return 0;
}
while(!f.eof())
{
f>>ch;
cout<<ch;
}
f.close();;
return 0;
}

