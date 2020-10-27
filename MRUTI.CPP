#include <fstream.h>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <dos.h>
#include <process.h>
void erase()
{
	for(int i=43;i<80;i++)
	{
		for(int j=4;j<22;j++)
		{
			gotoxy(i,j);cout<<" ";
		}
	}
}
void erase1()
{       for(int z=58; z<65; z++)
	{
		gotoxy(z,3);cout<<" ";
	}
}
class data
{
	char name[20];
	float price;
	public:
		char* retname()
		{
		 return name;
		}

		float retprice()
		{
		 return price;
		}

		void show()
		{

		 gotoxy(44,5);cout<<"Name  - "<<name<<endl;
		 gotoxy(44,6);cout<<"Price - "<<price<<endl;

		}

		void input()
		{
		gotoxy(44,8);cout<<"Enter Name  : ";
		gotoxy(59,8);gets(name);
		gotoxy(44,9);cout<<"Enter Price : ";
		gotoxy(59,9);cin>>price;
		}
}d;

fstream f;

void main()
{     clrscr();

cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<"		 *                       *            ооо         "<<endl;delay(150);
cout<<"		 * *                   * *         ооо   ооо      "<<endl;delay(150);
cout<<"		 * * *               * * *       ооо      ооо     "<<endl;delay(150);
cout<<"		   * * *           * * *       ооо          ооо   "<<endl;delay(150);
cout<<"		 *   * * *       * * *   *      ооо          ооо  "<<endl;delay(150);
cout<<"		 * *   * * *   * * *   * *        ооо             "<<endl;delay(150);
cout<<"		 * * * * * *   * * * * * *          ооо           "<<endl;delay(150);
cout<<"		   * * * * *   * * * * *              ооо         "<<endl;delay(150);
cout<<"		 *   * * * *   * * * *   *              ооо       "<<endl;delay(150);
cout<<"		 * *   * * *   * * *   * *                ооо     "<<endl;delay(150);
cout<<"                 * * * * * *   * * * * * *     ооо          ооо   "<<endl;delay(150);
cout<<"                   * * * * *   * * * * *        ооо         ооо "<<endl;delay(150);
cout<<"		 *   * * * *   * * * *   *        ооо      ооо  "<<endl;delay(150);
cout<<"		 * *   * * *   * * *   * *         ооо   ооо    "<<endl;delay(150);
cout<<"		   * * * * *   * * * * *              ооо       "<<endl;
getch();
clrscr();

cout<<endl;
cout<<endl;

cout<<"   mm           mm        aa        rrrrrrrrr uu       uu tttttttttt iiiiiiii "<<endl;delay(150);
cout<<"   mmm         mmm       aaaa       rr     rr uu       uu     tt        ii    "<<endl;delay(150);
cout<<"   mm mm     mm mm      aa  aa      rr     rr uu       uu     tt        ii     "<<endl;delay(150);
cout<<"   mm  mm   mm  mm     aa    aa     rr     rr uu       uu     tt        ii     "<<endl;delay(150);
cout<<"   mm   mm mm   mm    aaaaaaaaaa    rrrrrrrrr uu       uu     tt        ii     "<<endl;delay(150);
cout<<"   mm     m     mm   aaaaaaaaaaaa   rrrr      uu       uu     tt        ii     "<<endl;delay(150);
cout<<"   mm           mm  aa          aa  rr  rr    uuuuuuuuuuu     tt        ii     "<<endl;delay(150);
cout<<"   mm           mm aa            aa rr    rr  uuuuuuuuuuu     tt     iiiiiiii  "<<endl;delay(150);
cout<<"  ............................................................................"<<endl;delay(1000);
cout<<"                "<<endl;
cout<<"                "<<endl;
cout<<"            sssssss uu     uu zzzzzzz uu      uu kk     kk iiiiiiii "<<endl; delay(150);
cout<<"            ss      uu     uu     zz  uu      uu kk   kk      ii    "<<endl; delay(150);
cout<<"            ss      uu     uu    zz   uu      uu kk kk        ii    "<<endl; delay(150);
cout<<"            sssssss uu     uu   zz    uu      uu kk           ii    "<<endl; delay(150);
cout<<"                 ss uu     uu  zz     uu      uu kk kk        ii    "<<endl; delay(150);
cout<<"                 ss uuuuuuuuu zz      uuuuuuuuuu kk   kk      ii    "<<endl; delay(150);
cout<<"            sssssss uuuuuuuuu zzzzzzz uuuuuuuuuu kk     kk iiiiiiii" <<endl; delay(150);
cout<<"           ........................................................."<<endl;
cout<<"                                    MADE BY - "<<endl;
cout<<"                                PIYUSH PRAJAPATI" <<endl;
cout<<"                                      AND"<<endl;
cout<<"                                 PRAVEEN KUMAR"<<endl;
getch();
clrscr();

void readfile();
void addrecords();
void searchname();
void searchprice();
void modify();
void delrecord();
void clear();

{
	clrscr();
	int ch;int x,i,y,k,j,l,p;
	char opt,pass[10];
	do
	{
		  for(i=1;i<81;i++)
		 {
			gotoxy(i,1);cout<<"█"<<endl;
		 }
		  for(j=1;j<24;j++)
		 {
			gotoxy(1,j);cout<<"█"<<endl;
		 }
		 for(k=1;k<24;k++)
		 {
			gotoxy(80,k);cout<<"█"<<endl;
		 }
		 for(l=1;l<81;l++)
		 {
			gotoxy(l,23);cout<<"█"<<endl;
		 }
		 for(p=1;p<24;p++)
		 {
			gotoxy(40,p);cout<<"█"<<endl;
		 }
		gotoxy(3,3);    cout<<" *1. View cars \n";
		gotoxy(3,5); 	cout<<" *2. Add a car \n";
		gotoxy(3,7); 	cout<<" *3. Search a car \n";
		gotoxy(3,9); 	cout<<" *4. Modify a car \n";
		gotoxy(3,11);   cout<<" *5. Delete a car \n";
		gotoxy(3,13); 	cout<<" *6. Exit\n";
		gotoxy(43,3); 	cout<<" Enter choice : ";
		gotoxy(59,3); 	cin>>ch;
		gotoxy(58,3);   cout<<" ";
		switch(ch)
		{
			case 1: erase();
				readfile();
				erase1();
					break;
			case 2: erase();
				addrecords();
				erase1();
					break;
			case 3: erase();
				gotoxy(44,8);cout<<"Search through NAME or PRICE"<<endl;
				gotoxy(44,10);cout<<"1/n - For NAME"<<endl;
				gotoxy(44,11);cout<<"2/p - For PRICE"<<endl;
				gotoxy(44,13);cin>>opt;
				switch(opt)
				{ case '1':
				  case 'n': searchname();
					   break;
				  case '2':
				  case 'p': searchprice();
					  break;
				  default:gotoxy(44,15);cout<<"Invalid Choice";
				}
				getch();
				erase1();
					break;
			case 4: erase();
				modify();
				erase1();
					break;
			case 5: erase();
				delrecord();
				erase1();
					break;
			case 6: exit(0);

			default:cout<<"Invalid Input";
		}
	}while(ch!=6);
}
getch();
}
void addrecords()
{
	f.open("info.dat",ios::app|ios::binary);

	if(!f)
	{
		gotoxy(44,5);cout<<"File does not exist";
	}
		d.input();
		d.show();
		f.write((char*)&d,sizeof(d));
		cout<<endl;
		f.close();
}

void readfile()
{
	f.open("info.dat",ios::in|ios::binary);

	if(!f)
	{
		gotoxy(44,5);cout<<"File does not exist";
	}
	while(f.read((char*)&d,sizeof(d)))
	{
		erase();
		d.show();
		gotoxy(44,8);cout<<"Press any key!";
		getch();
	}
	f.close();
}

void searchprice()
{
	f.open("info.dat",ios::in|ios::binary);

	if(!f)
	{
		gotoxy(44,5);cout<<"File doesnot exist";
	}

	int found=0;
	float sprice;
	gotoxy(44,15);cout<<"Enter Price to be searched : ";
	gotoxy(44,16);cin>>sprice;

	while(f.read((char*)&d,sizeof(d)))
	{
		if(f.eof())
			break;
		else if(d.retprice()==sprice)
		{
			d.show();
			found=1;
		}
	}
	f.close();
	if(found==0)
	{
	gotoxy(44,18);cout<<"Sorry not found \n";
	}
}

void searchname()
{
	f.open("info.dat",ios::in|ios::binary);

	if(!f)
	{
		gotoxy(44,5);cout<<"File doesnot exist";
	}
	int found=0;
	char sname[20];
	gotoxy(44,15);cout<<"Enter Name to be searched : ";
	gotoxy(44,16);gets(sname);

	while(f.read((char*)&d,sizeof(d)))
	{
		if(f.eof())
			break;
		else if(strcmpi(d.retname(),sname)==0)
		{
			d.show();
			found=1;
		}
	}
	f.close();
	if(found==0)
	{
		   gotoxy(44,18);cout<<"Sorry not found ";
	}
}

void modify()
{
	fstream f1;
	f.open("info.dat",ios::in|ios::binary);
	f1.open("temp.dat",ios::out|ios::binary);

	if(!f)
	{
		gotoxy(44,5);cout<<"File doesnot exist";
	}
	int found=0;
	char sname[20];
	gotoxy(44,11);cout<<"Enter Name to be modified : ";
	gotoxy(44,12);gets(sname);
	while(f)
	{
		f.read((char*)&d,sizeof(d));
		if(f.eof())
			break;
		if(strcmpi(d.retname(),sname)==0)
		{
			d.show();
			found=1;
			gotoxy(44,5);d.input();
			f1.write((char*)&d,sizeof(d));
			gotoxy(44,14);cout<<"Sucessfully Modified";
		}
		else f1.write((char*)&d,sizeof(d));
	}
	f.close();
	f1.close();
	remove("info.dat");
	rename("temp.dat","info.dat");
	if(found==0)
	{
		gotoxy(44,14);cout<<"Sorry not found ";
	}
}
void delrecord()
{
	fstream f1;
	f.open("info.dat",ios::in|ios::binary);
	f1.open("temp.dat",ios::out|ios::binary);

	if(!f)
	{
		gotoxy(44,5);cout<<"File does not exist";
	}
	data d;
	int found=0;
	char sname[20];
	gotoxy(44,8);cout<<"Enter Name to be deleted ";
	gotoxy(44,9);gets(sname);

	while(f)
	{
		f.read((char*)&d,sizeof(d));
		if(f.eof())
			break;
		else if(strcmpi(d.retname(),sname)==0)
			{found=1;
			 d.show();
			 gotoxy(44,11);cout<<"Sucessfully Deleted"<<endl;
			}
		else
			f1.write((char*)&d,sizeof(d));

	}

	f.close();
	f1.close();
	remove("info.dat");
	rename("temp.dat","info.dat");
	if(found==0)
	{
		gotoxy(44,11);cout<<"Sorry not found ";
	}
}
