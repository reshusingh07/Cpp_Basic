#include <iostream>
using namespace std;
int const_ob,dest_ob;
class const_object
{
    public:
    const_object()
    {
        const_ob++;
    }
    const_object()
    {
        dest_obj++;
    }
};
int main()
{
    const_object *a1=new const_object();
    const_object *a2=new const_object();
    const_object *a3=new const_object();
    cout<<"Total object created "<<const_ob<<endl;
    delete a1;
    delete a2;
    delete a3;
    cout<<"Total object deleted "<<dest_ob--<<endl;
    return 0;
}
