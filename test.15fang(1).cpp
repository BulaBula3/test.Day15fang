#include <iostream>
using namespace std;
#include<string>



    //const��ʹ�ó���

    struct student
    {
        string name;
        int age;
        int score;
    };

    //�������е��βθ�Ϊָ�룬���Լ����ڴ�ռ䣬���Ҳ��ḳֵ�µĸ�������
    void printStudents(const student *s)
    {
        //s->age = 150;//����const֮��һ�����޸ĵĲ����ͻᱨ�������Է�ֹ���ǵ������
        cout << "������ " << s->name << " ���䣺 " << s->age << " �÷֣� " << s->score << endl;
    };

    int main1() {
    
    //�����ṹ�����
        struct student s = { "����"  , 15 , 70 };

        //ͨ��������ӡ�ṹ�������Ϣ
        printStudents(&s);
    
        cout << "main���������䣺 " << s.age << endl;
    
    

    system("pause");

    return 0;
}