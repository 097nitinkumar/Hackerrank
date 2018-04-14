#include<bits/stdc++.h>

using namespace std;
////solution begins
class Box
{
    private:
    int l,b,h;
    public:
     Box()
    {
        l=b=h=0;
    }
     Box(int p,int q,int r)
    {
        l=p;b=q;h=r;   
    }
     Box(const Box &x)
    {
        l=x.l;b=x.b;h=x.h;   
    }
    int getLength()
    {
        return l;
    }
    int getBreadth()
    {
        return b;
    }
    int getHeight()
    {
        return h;
    }
    long long CalculateVolume()
    {
        return (long long)l*b*h;
    }
    
    bool operator < (Box const &obj) {
        if(this->h<obj.h&&this->l==obj.l&&this->b==obj.b) return true;
        if(this->b<obj.b&&this->l==obj.l) return true;
        if(this->l<obj.l) return true;
         
         return false;
    }
    
    friend ostream &operator<<( ostream &output, const Box &D ) { 
         output << D.l << " " << D.b<<" "<<D.h;
         return output;            
      }
};
////solution ends

void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}
