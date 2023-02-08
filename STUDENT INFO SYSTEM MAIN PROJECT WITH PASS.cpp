#include<iostream>
using namespace std;
string arr1[20],arr2[20],arr3[20],arr4[20],arr5[20];
int total=0;

void enter()
{
	int choice;
	cout<<"          How many student's data to be entered = ";
	cin>>choice;
	if(total==0)
	{
	total=total+choice;
	for(int i=0;i<choice;i++)
    {
    	cout<<"      Enter data of student:"<<i+1<<endl<<endl;
		cout<<"      Enter name = ";
		cin>>arr1[i];
		cout<<"      Enter roll no = ";
	    cin>>arr2[i];
	    cout<<"      Enter course = ";
	    cin>>arr3[i];
	    cout<<"      Enter Section = ";
	    cin>>arr4[i];
	    cout<<"      Enter contact = ";
	    cin>>arr5[i];
		cout<<endl;
		cout<<endl;		
	}
		
   }
   cout<<"                                                                      ***THANK YOU *** "<<endl;
   cout<<"                                                               *** A PROJECT BY BCA STUDENTS*** "<<endl;
   cout<<endl;
   cout<<endl;
}
void show()
{
	if(total==0)
	{
		cout<<"       No data is enterd"<<endl;
	}
	else
	{
		string rollno;
	cout<<"           Enter roll no of student which you want to search = ";
	cin>>rollno;
	for(int i=0;i<total;i++)
	{
			if(rollno==arr2[i])
			{
		cout<<"       Data of student "<<i+1<<endl;
		cout<<"       Name = "<<arr1[i]<<endl;
		cout<<"       Rollno = "<<arr2[i]<<endl;
		cout<<"       Course = "<<arr3[i]<<endl;
		cout<<"       Section = "<<arr4[i]<<endl;
		cout<<"       Contact = "<<arr5[i]<<endl;
		cout<<endl;
		cout<<endl;	
	}
}}
    cout<<"                                                                      ***THANK YOU *** "<<endl;
    cout<<"                                                                ***A PROJECT BY BCA STUDENTS*** "<<endl;
    cout<<endl;
    cout<<endl;
}
void search()
{
		if(total==0)
	{
		cout<<"       Enter no data is enterd"<<endl;
		
	}
	else
	{
	string rollno;
	cout<<"           Enter roll no of student which you want to search = ";
	cin>>rollno;
	for(int i=0;i<total;i++)
	{
		if(rollno==arr2[i])
	    {
		cout<<"          data of student;"<<i+1<<endl<<endl;
		cout<<"          Name = "<<arr1[i]<<endl;
		cout<<"          rollno = "<<arr2[i]<<endl;
		cout<<"          course = "<<arr3[i]<<endl;
		cout<<"          Section = "<<arr4[i]<<endl;
		cout<<"          contact = "<<arr5[i]<<endl;
		cout<<endl;
		cout<<endl;	
        }
	}}	
    cout<<"                                                                        ***THANK YOU*** "<<endl;
	cout<<"                                                                    ***A PROJECT BY BCA STUDENTS*** "<<endl;
    cout<<endl;
    cout<<endl;
}
void update()
{
		if(total==0)
	{
		cout<<"           No data is enterd"<<endl;
		
	}
	else
	{
	string rollno;
	cout<<"               Enter Roll No of student which you want to update = ";
	cin>>rollno;
	for(int i=0;i<total;i++)
	{
		if(rollno==arr2[i])
	    {
	    cout<<"           Previous data"<<endl<<endl;
		cout<<"           Data of student;"<<i+1<<endl<<endl;
		cout<<"           Name = "<<arr1[i]<<endl;
		cout<<"           Rollno = "<<arr2[i]<<endl;
		cout<<"           Course = "<<arr3[i]<<endl;
		cout<<"           Section = "<<arr4[i]<<endl;
		cout<<"           Contact = "<<arr5[i]<<endl;
		cout<<endl;
		cout<<endl;
		cout<<"           Enter new data"<<endl;
        cout<<endl;
		cout<<"           Enter name;";
		cin>>arr1[i];
		cout<<"           Enter rollno = ";
		cin>>arr2[i];
		cout<<"           Enter course = ";
		cin>>arr3[i];
		cout<<"           Enter section = ";
		cin>>arr4[i];
		cout<<"           Enter contact = ";
		cin>>arr5[i];
		cout<<endl;
		cout<<endl;	
        }
    }  
    cout<<"                                                                      ***THANK YOU*** "<<endl;
    cout<<"                                                                  ***A PROJECT BY BCA STUDENTS*** "<<endl;
    cout<<endl;
    cout<<endl;
}
}
void deleterecord()
{
		if(total==0)
	{
		cout<<"             No data is enterd"<<endl;
		
	}
	else
	{
	int a;
	cout<<"                 press 9 to delete full record"<<endl;
	cout<<"                 press 8 to delete a specific record"<<endl;
	cin>>a;
	if(a==1)
	{
		total=0;
		cout<<"              all record is deleted"<<endl;
	}
	else(a==2);
	{
		  
	    string rollno;
		cout<<"               Enter the roll no which you want to delete = ";
		cin>>rollno;
		for(int i=0;i<total;i++)
		{
			if(rollno==arr2[i])
			{
				for(int j=i;j<total;j++)
				{
					arr1[j]=arr1[j+1];
					arr2[j]=arr2[j+1];
					arr3[j]=arr3[j+1];
					arr4[j]=arr4[j+1];
					arr5[j]=arr5[j+1];
				}
				total--;
				cout<<"        the total record was deleted..!!"<<endl;
			}
		}
	}
    }
}
main ()
{
		string name="GROUP12";
int pass=2816;
cout<<"                       Enter username:";
string name2;
cin>>name2;
cout<<"                       Enter password:";
int pass2;
cin>>pass2;
if ( name2==name && pass2==pass)
{
	 
	cout<<"                                                         *** WELCOME  GROUP 12 HERE TO HELP YOU ***     "<<endl;
	cout<<"                                                            *** STUDENT  INFORMATION  SYSTEM ***        "<<endl;
	cout<<"                                                               *** CENTURION  UNIVERSITY ***    "<<endl;
	
	
	int value;
	while (true)
    {
	cout<<"                    press 1 to enter a data"<<endl;
	cout<<"                    press 2 to enter show data"<<endl;
	cout<<"                    press 3 to enter search data"<<endl;
	cout<<"                    press 4 to enter update data"<<endl;
	cout<<"                    press 5 to enter delete data"<<endl;
	cout<<"                    press 6 to enter exit"<<endl;
	cout<<"                    Enter your choice   = ";
	cin>>value;
	cout<<endl;
	switch(value)
	{
		case 1:
			enter();
			break;
		case 2:
			show();
			break;
		case 3:
			search();
			break;
		case 4:
			update();
			break;
		case 5:
		    deleterecord();
			break;
		case 6:
			exit(0);
			break;
		defult:
		    cout<<"              Invalid input"<<endl;
			break;
    }									     
    }  }
    else
	{
		cout<<"                   Invalid ";
	}
}
