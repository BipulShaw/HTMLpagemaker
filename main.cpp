#include <iostream.h>
#include <fstream.h>
#include <stdio.h>
class HTML
{
	public:
	void about();
	void help();
	void credits();
	void aboutd();
	void close();
    void menu();
    int choice;
    
};
void HTML::about()
{
	cout<<"\n-------------------------ABOUT---------------------------\n";
	cout<<"This software known as HTMLcreator is developed, programmed and produced by\n";
	cout<<"Bipul Kumar Shaw (see ABOUT DEVELOPER). It is a basic console software designed\n";
	cout<<"for easily creating a webpage (basic HTML page) and it demonstrates the capabilities.\n";
	cout<<"For help see HELP option.\n";
	cout<<"HTMLcreator - Free - Open Source - 2017";
	cout<<"\n----------------------------------------------------------\n";
}
void HTML::help()
{
	cout<<"\n-----------------------------------------------------------\n";
	cout<<"Hit Start! and you will be guided at every step.\n";
	cout<<"------------------------------------------------------------\n";
}
void HTML::credits()
{
	cout<<"\n------------------------------------------------------------\n";
	cout<<"The credits for this software goes to Mr.Kamal Kant Gupta (PGT Comp. Sc.),\n";
	cout<<"anyone directly or indirectly involved (otherwise helped), my parents and me ofcourse.\n";
	cout<<"--------------------------------------------------------------\n";
}
void HTML::aboutd()
{
	cout<<"\n----------------------------------------------------------------\n";
	cout<<"Bipul Kumar Shaw Class- XII Science (2017-18) roll no. 08 a hardworking soft. developer";
	cout<<"\n----------------------------------------------------------------\n";
}
void HTML::close()
{
	exit(1);
}
void HTML::menu()
{
	cout<<"\t\t\t***********WELCOME TO WEBPAGE CREATOR***********\n\n";
	cout<<"->PLEASE ENTER YOUR CHOICE: (number)\n";
	cout<<"-----------------------------------------\n";
	cout<<"1.ABOUT\t\t\t\t\t|\n2.SAMPLE\t\t\t\t|\n3.START!\t\t\t\t|\n4.HELP\t\t\t\t\t|\n5.CREDITS\t\t\t\t|\n6.ABOUT DEVELOPER\t\t\t|\n7.EXIT\t\t\t\t\t|\n";
    cout<<"-----------------------------------------\n";
    cout<<"Choice:";
}
class make:public HTML
{
	public:
		void Sample();
	    void create();
};

void make::Sample()
{
	remove("sample.html");
	fstream samp;
	samp.open("sample.txt",ios::out);
	samp<<"<!DOCTYPE html>\n<html>\n<body bgcolor='Yellow'>\n<head>\n<title>This is a Sample page developed by HTMLCreator</title>\n";
	samp<<"</head>\n<body>\n<h1><font color='blue'>This is Heading</font></h1>\n";
	samp<<"<p>This program is created by Bipul Kumar Shaw.This is the body of the page.</p>";
 	samp<<"<p>This sample showcases all the features of this software,for help please choose 'Help' on the software home page.</p>\n";
 	samp<<"<p>If there is any query please refer to'About Developer' section to contact the developer although he might not answer you for years, but its worth trying.</p>";
 	samp<<"<p>The colors shown in the background and fonts are also a feature of THIS SOFTWARE. Please refer to help if you need instructions on all controls.</p>";
 	samp<<"<p><font face='Comic sans MS' color='green'> TABLES</font> </p>";
 	samp<<"<table border='1'> \n<tr><th>OS</th><th>Owner</th></tr>\n<tr><td>Windows</td><td>Microsoft</td></tr>\n";
 	samp<<"<tr><td>MacOS</td><td>Apple</td></tr>\n<tr><td>Android</td><td>Google</td></tr></table>";
 	samp<<"<p>An example of tables created by this software.</p>";
 	samp<<"<p><font face='Comic sans MS' color='red' size=5>Text-Areas<font></p>";
 	samp<<"<textarea rows='5' cols='50' name='description'> Enter your name </textarea>";
 	samp<<"<input type='submit' value='submit'/>";
 	samp<<"<p>The above example shows a text area and a clickable button</p>";
 	samp<<"<p><font face='Comic sans MS' color='pink' size=5> LISTS </font></p>";
 	samp<<"<font face='Times New Roman' size=2 color='black'><ol><li>batman</li> <li>Superman</li><li>Captain America</li></ol></font>";
 	samp<<"<font face='Comic sans MS' size=5 color='purple'><p>Simple Image Insert</p></font>";
 	samp<<"<p><img src='sam.gif' alt='Knight'/></p>";
 	samp<<"<p><img src='supes.gif' alt='hope' /></p>";
 	samp<<"<font color='Brown'><p>LINKS</p></font>";
 	samp<<"<p><font face ='Times New Roman' color='Black' size='4'>This is the example of a link. The best search engine</p></font> ";
 	samp<<"<a href='https://www.google.co.in'>Google</a>";
    samp<<"\n</body>\n</html>";
	samp.close();
 	rename("sample.txt","sample.html");
 	cout<<"\n-----------------------------------------------------------\n"<<"*Sample created in program directory*\n";
 	cout<<"------------------------------------------------------------";
	

}

void make::create()
{
	remove("YourPage.html");
	cout<<"******************START!******************\n";
	char title[30];
	fstream page;
	page.open("YourPage.txt",ios::out);
	ifstream haha;
	haha.open("tools.dat",ios::binary|ios::in);
	page<<"<!DOCTYPE HTML><html>";
	cout<<"Want to add background color?(y/n):";
	char ch,col[10];
	cin>>ch;
	if(ch=='y'||ch=='Y')
	{
		cout<<"Enter color:";
		gets(col);
		page<<"<body bgcolor='"<<col<<"'>\n<body>";
		
	}
    page<<"<head><title>";
	cout<<"Enter title for your page:";
	gets(title);
	page<<title;
	page<<"</title></head>";
	cout<<"\n-------------------------------------------------------------\n";
	cout<<"Here is your toolbox, enter your preferred option. Lets go!";
	cout<<"\n--------------------------tools------------------------------\n";
    int i=0;
	char c;
    while(i<92)
    {
        haha.get(c);
        cout<<c;
        i++;
    }
    haha.close();
    cout<<"\n-------------------------------------------------------------\n";
    int choose;
 lb:   cout<<"\nEnter tool choice:\n";
    cin>>choose;
	switch(choose)
	{
   	case 0:
    {
    	char head[50];
    	cout<<"Enter Heading:";
    	gets(head);
    	page<<"<h1>";
    	page<<head<<"</h1>";

    }
    break;
    case 1:
    {
    	char img[40];
    	cout<<"Please specify the image name followed by extension:";
    	gets(img);
    	page<<"<img src='"<<img<<"' alt='image' />";
    	cout<<"Loading...\n";
    	cout<<"*Image added successfully*\n";
    }
    break;
    case 2:
    {
    	int ro,co;
    	char name[20];
    	cout<<"Enter brief description of text area:";
    	gets(name);
    	cout<<"Enter rows and columns:";
    	cin>>ro>>col;
    	page<<"<textarea rows='"<<ro<<"' cols='"<<co<<"' name='"<<name<<"'></textarea>";
    	cout<<"Loading...";
    	cout<<"Text-Area added";
    }
    break;
    case 4:
    {
    	char sty[50], colr[10];
    	int size;
    	cout<<"Enter font style, Here's a list of few of them:\n";
    	cout<<"-------------------------------------------------\n";
    	cout<<"Verdana\n"<<"Times New Roman"<<"\nComic sans MS\n"<<"Italic\n";
    	cout<<"-------------------------------------------------\n";
    	cout<<"->Enter\n";
   	    gets(sty);
   	    cout<<"->Color?\n";
   	    gets(colr);
   	    cout<<"->Size?\n";
   	    cin>>size;
   	    page<<"<font face='"<<sty<<"' color='"<<colr<<"' size="<<size<<">";
   	    cout<<"Loading...\n";
   	    cout<<"*Font applied*\n";
    }
    break;
    case 5:
    {
    	char des[50],stor[20];
    	int mat[20][20],m,n;
    	cout<<"\nDescribe your table first:\n";
    	gets(des);
    	cout<<"\nEnter rows and columns:\n";
    	cout<<"Rows:"; cin>>m;
    	cout<<"  Columns:"; cin>>n;
    	cout<<"\nEnter elements:";
    	page<<"<table border='1'>";
    	for(int i=0;i<m;i++)
    	{
    		page<<"<tr>";
	    	for(int j=0;j<n;j++)
	    	{
	    		if(i==0)
	    		   cout<<"\nEnter attribute name:\n";
 		        page<<"<td>";
 		        gets(stor);
 		        page<<stor<<"</td>";
 		        
	    	}
	    	page<<"</tr>";
	    }
	    page<<"</table>";
    	
    }
    break;
    case 6:
    {
        char list[30],desc[50];
        char inn;
        int num;
		cout<<"\nWant to describe list?(y/n)\n";	
		cin>>inn;
		if(inn=='y'||ch=='Y')
		{
			cout<<"description:\n";
			gets(desc);
			page<<"<p>"<<desc<<"</p>";	
		}
		cout<<"Enter number of list items:";
		cin>>num;
		cout<<"\nEnter list items one by one:\n";
        page<<"<ol>";	
		for(int i=0;i<num;i++)
		{
			gets(list);
			page<<"<li>"<<list<<"</li>";
		}
		page<<"</ol>";
       cout<<"Loading...\n";
	   cout<<"*List added*\n"; 
    }
    break;
    case 7:
    { 
       char d[60];
       char link[100],lname[40];
       cout<<"\nDescribe your link.\n";
       gets(d);
       page<<"<p>"<<d<<"</p>";
	   cout<<"\nEnter link and then its name:";
	   gets(link);
	   gets(lname);
	   page<<"<a href='"<<link<<"'>"<<lname<<"</a>";	
	   cout<<"\n*Link added*\n";
    }
    break;
    case 8:
    {
    	char para[300];
    	cout<<"\nEnter paragraph:\n";
    	gets(para);
    	page<<"<p>"<<para<<"</p>";
    	cout<<"\n Paragraph added.\n";
    }
	}
    cout<<"Want to use more tools?(y=yes/n=done):";
    char haa;
   fu: cin>>haa;
    if(haa=='y'||haa=='Y')
    {
    	cout<<"\n--------------------------tools------------------------------\n";
   	    cout<<"|0-Heading |1-Images |2-Inputs |3-Colors |4-Fonts |5-Tables |6-Lists |7-Links |8-Paragraph |";
        cout<<"\n-------------------------------------------------------------\n";
    goto lb;
    }
    else if(haa=='n')
    {
        page<<"</body></html>";
        page.close();
       	rename("YourPage.txt","YourPage.html");
        haha.close();
    	cout<<"*HTML file created successfully*";
    	cout<<"\n*Will be found in the program directory*\n";
    	cout<<"___________Thank You!___________";	
    }
    else
    {
    	cout<<"Invalid Choice! please enter valid choice:";
    	goto fu;
    }
 }

void main()
{
	make obj;
	obj.menu();
    ch:
	cin>>obj.choice;
	if(obj.choice==3)
	{
		obj.create();
	}
	if(obj.choice==2)
	{
	    obj.Sample();
	}
	if(obj.choice==1)
	{
		obj.about();
	}
	if(obj.choice==4)
	{
		obj.help();
	}
	if(obj.choice==5)
	{
		obj.credits();
	}
	if(obj.choice==6)
	{
		obj.aboutd();
	}
	if(obj.choice==7)
	{
		
		cout<<"\n*Exiting...*\n";
		obj.close();
	}
	goto ch;
}
