#include <iostream>
using namespace std;
#include<string>
#include<Ctime>
struct Student
{
    string sName;
    int score;
};

//��ʦ�Ľṹ�嶨��
struct Teacher
{
    string tName;
    //ѧ������
    struct Student sArray[5];
};
//����ʦ��ѧ����ֵ�ĺ���
void allocateSpace(struct Teacher tArray[], int len)
{
    string nameSeed = "ABCDE";
    //����ʦ��ʼ��ֵ
    for (int i = 0; i < len; i++)
    {
        tArray[i].tName = "Teacher_";
        tArray[i].tName += nameSeed[i];
        //ͨ��ѭ����ÿ����ʦ������ѧ����ֵ
        for (int j = 0; j < 5; j++)
        {
            tArray[i].sArray[j].sName = "Student_";
            tArray[i].sArray[j].sName += nameSeed[j];

            //int random = rand() % 60 ;0`59
            int random = rand() % 61 + 40;//40`100
            tArray[i].sArray[j].score = random;
        };
    }
}
//��ӡ������Ϣ
void printInfo(struct Teacher tArray[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << "��ʦ������ " << tArray[i].tName << endl;

        for (int j = 0; j < 5; j++)
        {
            cout << "\tѧ�������� " << tArray[i].sArray[j].sName <<
                "���Է����� " << tArray[i].sArray[j].score << endl;
        }
    }
}
int main2()
{
    //���������
    srand((unsigned int)time(NULL));

    //����3����ʦ������
    struct Teacher tArray[3];

    //ͨ��������3����ʦ����Ϣ��ֵ��������ʦ����ѧ����Ϣ��ֵ
    int len = sizeof(tArray) / sizeof(tArray[0]);//ͨ��������㳤��
    allocateSpace(tArray, len);
    //��ӡ������ʦ��������ѧ����Ϣ
    printInfo(tArray,len);

    system("pause");

    return 0;
}