#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

int main()
{
	int ans[10],i,age,oxi=0,okay=0,notokay=0;
	char name[10],reply;
	char lastname[10];
	cout<<"Welcome to Coronavirus Self-Checker"<<endl;
	cout<<"Enter Your First Name "<<endl;
	cin>>name;
	cout<<"Enter Your Last Name "<<endl;
	cin>>lastname;
	cout<<"Hello!! "<<name<<" "<<lastname<<endl;
	cout<<"Enter your Age"<<endl;
	cin>>age;
	cout<<"Please answer the following questions honestly "<<endl;
	cout<<"Enter Y for yes and N for no "<<endl;
	
fiver:
    cout<<"Are you suffering from fiver "<<endl;
    cin>>reply;
        
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
	else
        cout<<"Please get an oximeter ";

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

     if(oxi==1 && ans[3]<90)
     {

     	cout<<"You should talk to any medical Professional as your Oxygen level is low"<<endl;
     	exit(0);

     }

   else
     {

     	if(okay==0)
     	{
     		cout<<"You should see a doctor as soon as possible and have covid Test ";

     	}

     	else if(okay==1)
     	{
     		cout<<"You should see a doctor as soon as possible "<<endl;
     	}

     	else if(okay==2)
     	{
     		cout<<"It may be a viral fever ..... You can take some Medicine prscribed by the medical professional"<<endl;
     	}

     	else if(okay==3)
     	{
     		if(ans[0]==1)
     		{
     			cout<<"As you described you have some breathing problem , Please contact you family dcotor if it gets worse"<<endl;
     		}
     		else if(ans[2]==1)
     		{
     			cout<<"As you decribed you have lung disease , Pls take your prescribed medicines regularly"<<endl;
     		}
     		else if(ans[1]==1)
     		{
     			cout<<"As you decribed you have  chest infection , You should see a doctor for general test"<<endl;
     		}
     		else if(ans[3]>=90)
     		{
     			cout<<"Nothing to worry "<<endl;
     		}



     	}
     	else
     	{
     	    cout<<"No problem at all"<<endl;
     	}
 }

	getch();



}
