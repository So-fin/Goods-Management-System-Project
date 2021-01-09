#include<iostream>
#include<cstring>
#include<fstream>
#include<iomanip>
#include<cstdlib>
using namespace std;

	class goods_mgmt
	{
                public : 

	char *good_condition, *good_shipment, *good_shipment_date, *good_category, *good_shipment_status, *good_id, *good_name, *good_company; 
			      	
			
			void set_id(char *a)
			{ 
				good_id = a; 
			}
			char *get_id()
			{ 
				return good_id; 
			}
			void set_name(char *b)
			{ 
				good_name = b; 
			}
			char *get_name()
			{ 
				return good_name; 
			}
			void set_condition(char *c)
			{ 
				good_condition = c; 
			}
			char *get_condition()
			{ 
				return good_condition; 
			}
			void set_category(char *d)
			{ 
				good_category = d; 
			}
			char *get_category()
			{ 
				return good_category; 
			}
			void set_company(char *e)
			{ 
				good_company = e; 
			}
			char *get_company()
			{ 
				return good_company; 
			}
			void set_shipment(char *f)
			{ 
				good_shipment = f; 
			}
			char *get_shipment()
			{ 
				return good_shipment; 
			}
			void set_shipment_status(char *g)
			{ 
				good_shipment_status = g; 
			}
			char *get_shipment_status()
			{ 
				return good_shipment_status; 
			}
			void set_shipment_date(char *h)
			{ 
				good_shipment_date = h; 
			}
			char *get_shipment_date()
			{ 
				return good_shipment_date; 
			}
	};
int main()
{  
	int i,j;
	char r[10],u[10],w[10],da[10],s[10],v[10],p[10],ch,q[10],t[10];
	char *l,*o,*n;
	goods_mgmt obj[25];
	
	for(i=0;i<1;i++)
	{
		cout<<"Enter good id (5 digits) ";
		cin>>p;
		for(j=0;j<=4;j++)
		{
			if(p[j]>=48 && p[j]<=57)
			{
			}
			else
			{
				cout<<"Enter valid ID"<<endl;
				return 0;
			}
		}
		obj[i].set_id(p);
		cout<<"Enter good name ";
		cin>>q;
		/*for(j=0;j<=sizeof(q);j++)
		{
			if((q[j]>=48 && q[j]<=57) || (q[j]>=65 && q[j]<=90) || (q[j]>=97 && q[j]<=122))
			{
			}
			else
			{
				cout<<endl<<"Enter valid name"<<endl<<endl;
				return 0;
			}
		}*/
		obj[i].set_name(q);
		cout<<"Enter good condition (damaged/perfect) ";
		cin>>r;
		if(strcmp(r,"damaged")==0 || strcmp(r,"perfect")==0)
		{
		}
		else
		{
			cout<<"Enter valid condition"<<endl<<endl;
			return 0;
		}
		obj[i].set_condition(r);
		cout<<"Enter good category (cloth/food/medicine) ";
		cin>>s;
		if(strcmp(s,"cloth")==0 || strcmp(s,"food")==0 || strcmp(s,"medicine")==0)
		{
		}
		else
		{
			cout<<"Enter valid category"<<endl<<endl;
			return 0;
		}
		obj[i].set_category(s);
		cout<<"Enter good company ";
		cin>>t;
		/*for(j=0;j<=(sizeof(q));j++)
		{
			if((t[j]>=48 && q[j]<=57) || (t[j]>=65 && q[j]<=90) || (t[j]>=97 && q[j]<=122))
			{
			}
			else
			{
				cout<<endl<<"Enter valid name"<<endl<<endl;
				return 0;
			}
		}*/
		obj[i].set_company(t);
		cout<<"Enter good shipment (truck/van) ";
		cin>>u;
		if(strcmp(u,"truck")==0 || strcmp(u,"van")==0)
		{
		}
		else
		{
			cout<<"Enter valid shipment"<<endl<<endl;
			return 0;
		}
		obj[i].set_shipment(u);
		cout<<"Enter good shipment status (pending/dispatched/arriving) ";
		cin>>v;
		if(strcmp(v,"pending")==0 || strcmp(v,"arriving")==0 || strcmp(v,"dispatched")==0)
		{
		}
		else
		{
			cout<<"Enter valid shipment status"<<endl<<endl;
			return 0;
		}
		obj[i].set_shipment_status(v);
		cout<<"Enter good shipment date (in format DD/MM/YYYY) ";
		cin>>w;
		for(j=0;j<2;j++)
		{
			if(w[j]>=48 && w[j]<=57)
			{
			}
			else
			{
				cout<<"Enter Valid date"<<endl;
				return 0;
			}
		}
		for(j=2;j<3;j++)
		{
			if(w[j]=='/')
			{
			}
			else
			{
				cout<<"Enter Valid date"<<endl;
				return 0;
			}
		}
		for(j=3;j<5;j++)
		{
			if(w[j]>=48 && w[j]<=57)
			{
			}
			else
			{
				cout<<"Enter Valid date"<<endl;
				return 0;
			}
		}
		for(j=5;j<6;j++)
		{
			if(w[j]=='/')
			{
			}
			else
			{
				cout<<"Enter Valid date"<<endl;
				return 0;
			}
		}
		for(j=6;j<10;j++)
		{
			if(w[j]>=48 && w[j]<=57)
			{
			}
			else
			{
				cout<<endl<<"Enter Valid date"<<endl<<endl;
				return 0;
			}
		}
		obj[i].set_shipment_date(w);
	}
	ofstream ob("Project.txt",ios::out|ios::binary);
	ob<<endl<<"Detail of every Goods"<<endl<<endl;
		for(i=0;i<1;i++)
		{
			ob.width(60); ob.fill('-'); ob<<endl<<endl<<std::left<<"Good ID is "<<std::internal<<obj[i].get_id();
			ob.width(60); ob.fill('-'); ob<<endl<<std::left<<"Good Name is "<<std::internal<<obj[i].get_name();
			ob.width(60); ob.fill('-'); ob<<endl<<std::left<<"Good Condition is "<<std::internal<<obj[i].get_condition();
			ob.width(60); ob.fill('-'); ob<<endl<<std::left<<"Good Category is "<<std::internal<<obj[i].get_category();
			ob.width(60); ob.fill('-'); ob<<endl<<std::left<<"Good Company is "<<std::internal<<obj[i].get_company();
			ob.width(60); ob.fill('-'); ob<<endl<<std::left<<"Good Shipment is through "<<std::internal<<obj[i].get_shipment();
			ob.width(60); ob.fill('-'); ob<<endl<<std::left<<"Good Shipment status is "<<std::internal<<obj[i].get_shipment_status();
			ob.width(60); ob.fill('-'); ob<<endl<<std::left<<"Good Shipment date is "<<std::internal<<obj[i].get_shipment_date();
		}
		cout<<endl<<endl<<"Enter today's date (in format DD/MM/YYYY) to search "; 
		cin>>da;
		ob<<endl<<endl<<endl<<endl<<"Goods of today's shipment date are ";
		for(i=0;i<1;i++)
		{
			n = obj[i].get_shipment_date();
			if(strcmp(da,n)==0)
			{
				ob.width(60); ob.fill('-'); ob<<endl<<endl<<std::left<<"Good ID is "<<std::internal<<obj[i].get_id();
				ob.width(60); ob.fill('-'); ob<<endl<<std::left<<"Good Name is "<<std::internal<<obj[i].get_name();
				ob.width(60); ob.fill('-'); ob<<endl<<std::left<<"Good Condition is "<<std::internal<<obj[i].get_condition();
				ob.width(60); ob.fill('-'); ob<<endl<<std::left<<"Good Category is "<<std::internal<<obj[i].get_category();
				ob.width(60); ob.fill('-'); ob<<endl<<std::left<<"Good Company is "<<std::internal<<obj[i].get_company();
				ob.width(60); ob.fill('-'); ob<<endl<<std::left<<"Good Shipment is through "<<std::internal<<obj[i].get_shipment();
			ob.width(60); ob.fill('-'); ob<<endl<<std::left<<"Good Shipment status is "<<std::internal<<obj[i].get_shipment_status();
				ob.width(60); ob.fill('-'); ob<<endl<<std::left<<"Good Shipment date is "<<std::internal<<obj[i].get_shipment_date();
			}
			else
			{
				ob<<endl<<endl<<"No goods matched for today's date";
			}
		}

		     
		ob<<endl<<endl<<endl<<"Goods in damaged condition are ";		
		for(i=0;i<1;i++)
		{
			o = obj[i].get_condition();
			if(strcmp(o,"damaged")==0)
			{
				ob.width(60); ob.fill('-'); ob<<endl<<endl<<std::left<<"Good ID is "<<std::internal<<obj[i].get_id();
				ob.width(60); ob.fill('-'); ob<<endl<<std::left<<"Good Name is "<<std::internal<<obj[i].get_name();
				ob.width(60); ob.fill('-'); ob<<endl<<std::left<<"Good Condition is "<<std::internal<<obj[i].get_condition();
				ob.width(60); ob.fill('-'); ob<<endl<<std::left<<"Good Category is "<<std::internal<<obj[i].get_category();
				ob.width(60); ob.fill('-'); ob<<endl<<std::left<<"Good Company is "<<std::internal<<obj[i].get_company();
				ob.width(60); ob.fill('-'); ob<<endl<<std::left<<"Good Shipment is through "<<std::internal<<obj[i].get_shipment();
			ob.width(60); ob.fill('-'); ob<<endl<<std::left<<"Good Shipment status is "<<std::internal<<obj[i].get_shipment_status();
				ob.width(60); ob.fill('-'); ob<<endl<<std::left<<"Good Shipment date is "<<std::internal<<obj[i].get_shipment_date();
			}
			else
			{
				ob<<endl<<endl<<"No goods matched for damaged condition";
			}
		}
		   
		ob<<endl<<endl<<endl<<"Goods shipped via van are ";		
		for(i=0;i<1;i++)
		{
			l = obj[i].get_shipment();
			if(strcmp(l,"van")==0)
			{
				ob.width(60); ob.fill('-'); ob<<endl<<endl<<std::left<<"Good ID is "<<std::internal<<obj[i].get_id();
				ob.width(60); ob.fill('-'); ob<<endl<<std::left<<"Good Name is "<<std::internal<<obj[i].get_name();
				ob.width(60); ob.fill('-'); ob<<endl<<std::left<<"Good Condition is "<<std::internal<<obj[i].get_condition();
				ob.width(60); ob.fill('-'); ob<<endl<<std::left<<"Good Category is "<<std::internal<<obj[i].get_category();
				ob.width(60); ob.fill('-'); ob<<endl<<std::left<<"Good Company is "<<std::internal<<obj[i].get_company();
				ob.width(60); ob.fill('-'); ob<<endl<<std::left<<"Good Shipment is through "<<std::internal<<obj[i].get_shipment();
			ob.width(60); ob.fill('-'); ob<<endl<<std::left<<"Good Shipment status is "<<std::internal<<obj[i].get_shipment_status();
			ob.width(60); ob.fill('-'); ob<<endl<<std::left<<"Good Shipment date is "<<std::internal<<obj[i].get_shipment_date()<<endl;
			}
			else
			{
				ob<<endl<<endl<<"No goods shipped via van "<<endl<<endl;
			}
		}
	ob.close();
	ifstream ob2("Project.txt",ios::in|ios::binary);
	ob2.seekg(1,ios::beg);
	while (ob2.get(ch))
	{
		cout<<ch;
	}
	return 0;
}
	

	









