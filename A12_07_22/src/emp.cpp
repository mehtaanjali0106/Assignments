#include <iostream>
#include<fstream>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
using namespace std;
int main()
{
        int N;
        fstream f;
        cout<<enter How many Employee: ";
        cin>>N;
        Employee *E=new Employee[N];
        int pid;
        pid =fork();
        if (pid==0)
        {
                cout<<"child starts"<<endl;
                f.open("employee.txt",ios::out);
                if(!f)
                {
                        cout<<"unable to oen the file"<<endl;
                        exit(0);
                }
                for(int i=0;i<N;i++)
                {
                    E[i].getEmployeeDetails();
                    f.write(reinterpret_cast<char *>($E[i],sizeof(Employee));
                                   }
                                    f.close();
                                   }
                                    cout<<"child terminates"<<endl;
                                    }
                                     else
                                    {
                                    wait(0);
                                    cout<<""parent starts"<<endl;
                                    f.open("Employee.txt,ios::in);
                                    if(!f)
                                        {
                                        {
                cout<<"child starts"<<endl;
                f.open("employee.txt",ios::out);
                if(!f)
                {
                        cout<<"unable to oen the file"<<endl;
                        exit(0);
                }
                for(int i=0;i<N;i++)
                {
                   E[i].getEmployeeDetails();
                   f.write(reinterpret_cast<char *>($E[i],sizeof(Employee));
                                        }
                                        f.close();
                                        }
                                        cout<<"child terminates"<<endl;
                                        }
                                        else
                                        {
                                        wait(0);
                                        cout<<""parent starts"<<endl;
                                        f.open("Employee.txt,ios::in);
                                        if(!f)
                                        {
                                      cout<<"Unable to open then file"<<endl;
                                        exit(0);
                                        }
                                       cout<<"parint Employee Details"<<endl;
                                        for(int i=0;i<n;i++)
                                        {
                                        E[i].display();

                                        f.read(reinterpret_cast<char *>(&E[i]),sizeof(Employee));
                                        }
                                        f.close();
                                        cout<<"parent terminate"<<endl;
                                        }
return 0;
}
