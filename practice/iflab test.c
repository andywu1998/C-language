#include<stdio.h>
#include<math.h>
//
int main()
{
    int a[10],k[10];//����a�Ƕ�����ͷ������k�ǽ��Ǿ�ͷ
    int x,y;//x��y�ֱ�������Ķ�����ͷ�ͽ��Ǿ�ͷ
    int p,q;//��ʱ��ƽ���͵�
    int sum1=0,sum2=0;
    //1,2��������Ƭ��34��������Ƭ
    //a��ʾ������ͷ��k��ʾ���Ǿ�ͷ
    a[1]=5;a[2]=1;a[3]=102;a[4]=98;
    k[1]=104;k[2]=81;k[3]=10;k[4]=2;

    printf("�����붯����ͷ���ͽ��Ǿ�ͷ��:\n");
    scanf("%d%d",&x,&y);
    for(int i=1;i<=2;i++)
    {
        //ƽ�������Ǹոհٶȵ�����
        p=pow(x-a[i],2)+pow(y-k[i],2);//��Ϊa>b,a��ƽ��>b��ƽ�������Բ���Ҫ������
        sum1+=p;//sum1��ʾ�㵽����Ƭ�ľ����ƽ���ĺ�

        //ƽ�������Ǹոհٶȵ�����
        q=pow(x-a[i+2],2)+pow(y-k[i+2],2);
        sum2+=q;//sum1��ʾ�㵽����Ƭ�ľ����ƽ���ĺ�
    }
    if(sum1>sum2)
    {
        printf("���Ƕ���Ƭ");
    }
    else
    {
        printf("���ǰ���Ƭ");
    }

    return 0;
}