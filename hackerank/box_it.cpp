#include<bits/stdc++.h>

using namespace std;
//Implement the class Box  
//l,b,h are integers representing the dimensions of the box
class Box{
    private:
        int l, b, h;
    public:
        Box() {
            l = 0, b = 0, h = 0;
        }
        int getLength(){
            return l;
        } // Return box's length
        int getBreadth (){
            return b;
        } // Return box's breadth
        int getHeight (){
            return h;
        }  //Return box's height
        long long CalculateVolume(){
            return (long long)l*b*h;
        } // Return the volume of the box
        Box(int length, int breadth, int height){   
            l = length;
            b = breadth;
            h = height;
        }
        Box(Box &B){
            l = B.l; b = B.b; h = B.h;
        }
        bool operator<(const Box& B) {
            if (l < B.l)
                return true;
            
            if (b < B.b && l == B.l)
                return true;
            
            if (h < B.h && l == B.l && b == B.b)
                return true;
        
            return false;
         }
        friend ostream& operator<< (ostream& output, const Box& B){
            output << B.l << " " << B.b << " " << B.h;
            return output;
        }
    
};



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
