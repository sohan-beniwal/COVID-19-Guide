#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

int main()
{
	int ans[10],i,age,oxi=0,okay=0,notokay=0;
	char name[10],reply;
	cout<<"Welcome to Coronavirus Self-Checker"<<endl;
	cout<<"Enter Your Name "<<endl;
	cin>>name;
	cout<<"Hello!! "<<name<<endl;
	cout<<"Enter your Age"<<endl;
	cin>>age;
	cout<<"Please answer the following questions honestly "<<endl;
	cout<<"Enter Y for yes and N for no "<<endl;
breath:	
	cout<<"Do you have Breathing Problem "<<endl;
	cin>>reply;
	if(reply =='y' || reply == 'Y')
	{
		ans[0]=1;
	}
	else
	{
		if(reply == 'n' || reply =='N')
		{
			ans[0]=0;
		}
		else
		{
		cout<<"Pls enter valid input"<<endl;
		goto breath;
	    }
	}
lung:	
	cout<<"Do you have any lung Infection "<<endl;
	cin>>reply;
	if(reply =='y' || reply == 'Y')
	{
		ans[1]=1;
	}
	else
	{
		if(reply == 'n' || reply =='N')
		{
			ans[1]=0;
		}
		else
		{
		cout<<"Pls enter valid input"<<endl;
		goto lung;
	    }
	}
heart:	
	cout<<"Do you have any heart problem "<<endl;
	cin>>reply;
	if(reply =='y' || reply == 'Y')
	{
		ans[2]=1;
	}
	else
	{
		if(reply == 'n' || reply =='N')
		{
			ans[2]=0;
		}
		else
		{
		cout<<"Pls enter valid input"<<endl;
		goto heart;
	    }
	}	

oximeter:	
	cout<<"Do you have oximeter "<<endl;
	cin>>reply;
	if(reply =='y' || reply == 'Y')
	{
		cout<<"Pls check your oxygen Level and Enter here "<<endl;
		oxi=1;
		cin>>ans[3];
	}
	
vaccination:	
	cout<<"Are you fully vaccinated ? "<<endl;
	cin>>reply;
	if(reply =='y' || reply == 'Y')
	{
		ans[4]=1;
	}
	else
	{
		if(reply == 'n' || reply =='N')
		{
			ans[4]=0;
		}
		else
		{
		cout<<"Pls enter valid input"<<endl;
		goto vaccination;
     	}
	}	
	
	for(i=0;i<=2;i++)
	{
		if(ans[i]==0)
		okay++;
		else
		notokay++;
	}
	
if(oxi==1)
{
	if(ans[3]>90)
	okay++;
	if(ans[3]<90)
	notokay++;
    
}

     if(ans[4]==1)
     okay++;
     else
     cout<<"We recommend you to take vaccination dose as soon as possble "<<endl;
     
     if(oxi==1)
     {
     	if(ans[3]<90)
     	cout<<"You should talk to any medical Professional as your Oxygen level is low"<<endl;
     	exit(0);
     }
     else
     {
     	if(okay==0)
     	{
     		cout<<"You should see a doctor as soon as possible and have covid Test ";
     		
     	}
     	if(okay==1)
     	{
     		cout<<"You should see a doctor as soon as possible "<<endl; 
     	}
     	if(okay==2)
     	{
     		cout<<"It may be a viral fever ..... You can take some Medicine prscribed by the medical professional"<<endl;
     	}
     	if(okay==3)
     	{
     		cout<<"All okay"<<endl;
     	}
     }
	
	getch();
	
	
	
}
