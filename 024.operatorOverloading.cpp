using namespace std;
class human{
    string name;  
    int age;
    friend ostream& operator<<(ostream&,human&);
    public:
        human(string x,int y){
            name = x;
            age = y;
        }
};

ostream& operator<<(ostream &o,human &obj){
        
        cout<<"Name : "<<obj.name<<endl;
        cout<<"Age : "<<obj.age<<endl;
        
}


int main()
{
    human theja("Naruto",22);
    cout<<theja;
    return 0;
}
