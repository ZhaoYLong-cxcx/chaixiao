#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>//����ͷ�ļ�
#include<string.h>
#include<limits.h>
#define SIZE 10  //SIZE��ʶ������      ���в���

int main()
{
	int a = 10;
	int b = 20;
	int sum = 0;
	//scanf("%d%d\n",&a,&b);
	//printf("%d,%d\n",a,b);
	sum = a+b;
	printf("%d\n",sum);
	return 0;
}

#if 0
int a = 99;//ȫ�ֱ���--����������  û�г�ʼ����Ĭ��ֵΪ0
//������
int main()
{
	int i = 88;//�ֲ�������ʹ��֮ǰ��һ��Ҫ���г�ʼ����û�г�ʼ��,Ϊ���ֵ��
	printf("i = %d\n",i);
	{
		int a = 10;//�ֲ�����
		//printf("{} = %d\n",a);
	}
	printf("%d\n",a);
	return 0;
}


int main()
{
	//���� ��ĸ �»��ߵ������ʽ
	const int i = 10;  //���ܱ��ı�    ������  
	//i = 100;
	int i2 = 20;
	//���������ֿ�ͷ
	int i3 = 99;
	//"hello bit";
	/*int _________ = 999;
	int __________________ = 999;
	printf("%d\n",_________);*/

	//char ch = 10;
	////sizeof          ���ֽڴ�С  �������⣺sizeof() �ǲ��ǿ⺯��    �ǹؼ���/�����
	//printf("%d\n",sizeof ch );
	//printf("%d\n",sizeof (short) );
	//printf("%d\n",sizeof(int));
	//printf("%d\n",sizeof(long));
	//printf("%d\n",sizeof(long long));
	//printf("%d\n",sizeof(float));
	//printf("%d\n",sizeof(double));
	//-128-127
	//char i = 0;
	//for(i = 0;i < 130;i++)//127+1
	//{
	//	printf("%d ",i);
	//}

	//char ch1 = -1;
	//char ch2 = 3;
	//unsigned char ch3 = 9;
	/*char ch = 'A';
	printf("%c\n",ch);
	printf("%d\n",ch);*/
	//char ch = 'A';
	//short sh = 10;
	//int i = 20;
	//long l = 30;
	//long long ll = 40;
	//float ff = 12.5f;//��ȷ��ʾС�����6λ
	//double d = 12.25;
	//printf("%c\n",ch);
	//printf("%d\n",sh);//ʮ������ʽ���
	//printf("%d\n",i);
	//printf("%d\n",l);
	//printf("%ld\n",ll);
	//printf("%f\n",ff);
	//printf("%lf\n",d);
	return 0;
}

 
int main()
{
	printf("hello word\n");
	//"�ַ���"    \n   ת���ַ�  ����
	return 0;//0   ����main���� ��������
}


��������
//Ԥ����    ��ע��
//�����˿��ȼ�����
/*
��ע��
��ע��
��ע��
��ע��
��ע��
��ע��
*/
int main()//��������
{
	printf("hello word\n");
	/*int a = 0;
	scanf("%d",&a);
	printf("%d\n",a);*/
	//printf�⺯��
	return 0;
}
//ctr+k+c   ctr+k+u
//int main()//��������
//{
//	printf("hello\n");
//	return 0;
//}
#endif