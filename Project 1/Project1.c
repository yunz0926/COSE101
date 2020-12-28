#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main()
{
	static int plan, voice1, voice2, text1, text2;
	static float data1, data2;

	srand(time(NULL));

	plan = rand() % 2;
	voice1 = rand() % 700 + 1;
	voice2 = rand() % 700 + 1;
	text1 = rand() % 301;
	text2 = rand() % 301;
	data1 = rand() % 15000 * 0.01f;
	while (!(data1 >= 0.50 && data1 <= 150.00))
		data1 = rand() % 15000 * 0.01f;
	data2 = rand() % 15000 * 0.01f;
	while (!(data2 >= 0.50 && data2 <= 150.00))
		data2 = rand() % 15000 * 0.01f;

	
	while (1)
	{
		static int voice, text, total1, total2, total3;
		static float data, extradata1, extradata2, extradata3;
		static int maxvoice1 = 500, maxvoice2 = 300, maxtext1 = 100, maxtext2 = 100;
		static float maxdata1 = 2.00f, maxdata2 = 30.00f;



		system("cls");

		int number;
		printf("���������������������������������������������������������������������������������������������� \n");
		printf("��      KU Mobile Phone Bill Calculator	      �� \n");
		printf("����������������������������������������������������������������������������������������������\n");
		printf("��   1 : Display plans                         �� \n");
		printf("��   2 : Usage information for past two months �� \n");
		printf("��   3 : Input this month usage                �� \n");
		printf("��   4 : Total fee for past 3 months           �� \n");
		printf("��   5 : Best plan recommendation              �� \n");
		printf("��   6 : Exit                                  �� \n");
		printf("���������������������������������������������������������������������������������������������� \n");

		scanf_s("%d%*c", &number);

		switch (number)
		{
		case 1:
			system("cls");

			printf("���������������������������������������������������������������������������������������������� \n");
			printf("��                 Basic Plan	              �� \n");
			printf("����������������������������������������������������������������������������������������������\n");
			printf("��  Included in plan   ��  Additional usages    �� \n");
			printf("����������������������������������������������������������������������������������������������\n");
			printf("�� Voice      ��  500m free   �� \\ 50 / 1m       �� \n");
			printf("�� Text       ��  100t free   �� \\ 10 / 1t       �� \n");
			printf("�� Data       ��  2.00GB free �� \\ 10000 / 0.1GB �� \n");
			printf("����������������������������������������������������������������������������������������������\n");
			printf("�� Basic fee  �� \\ 20000         	              �� \n");
			printf("���������������������������������������������������������������������������������������������� \n");
			printf(" \n");
			printf("���������������������������������������������������������������������������������������������� \n");
			printf("��                More Data Plan	              �� \n");
			printf("����������������������������������������������������������������������������������������������\n");;
			printf("��  Included in plan   ��  Additional usages    �� \n");
			printf("����������������������������������������������������������������������������������������������\n");
			printf("�� Voice      ��  300m free   �� \\ 10 / 1m       �� \n");
			printf("�� Text       ��  100t free   �� \\ 30 / 1t       �� \n");
			printf("�� Data       ��  30.00GB free�� \\ 500 / 0.1GB   �� \n");
			printf("����������������������������������������������������������������������������������������������\n");
			printf("�� Basic fee  �� \\ 45000         	              �� \n");
			printf("���������������������������������������������������������������������������������������������� \n");
			while (1)
			{
				char c;
				printf("Back to main menu Y/N : ");
				scanf_s("%c%*c", &c);

				if (c == 'Y')
					break;
			}
			break;
		case 2:

			system("cls");



			printf("���������������������������������������������������������������������������������������������� \n");
			printf("��          Last two months usage	      �� \n");
			printf("����������������������������������������������������������������������������������������������\n");
			printf("��  My Plan : %s                   �� \n", plan ? "Basic Plan    " : "More Data Plan");
			printf("����������������������������������������������������������������������������������������������\n");
			printf("��            ��   February     ��    March      �� \n");
			printf("����������������������������������������������������������������������������������������������\n");
			printf("�� Voice      ��    %3d min     ��    %3d min    �� \n", voice1, voice2);
			printf("�� Text       ��    %3d text    ��    %3d text   �� \n", text1, text2);
			printf("�� Data       �� %6.2f GB      �� %6.2f GB     �� \n", data1, data2);
			printf("���������������������������������������������������������������������������������������������� \n");

			while (1)
			{
				char c;
				printf("Back to main menu Y/N : ");
				scanf_s("%c%*c", &c);

				if (c == 'Y')
					break;
			}
			break;

		case 3:
			system("cls");
			printf("=====================================\n");
			printf("Input your usages of voice : ");
			scanf_s("%d%*c", &voice);
			printf("Input your usages of text : ");
			scanf_s("%d%*c", &text);
			printf("Input your usages of data : ");
			scanf_s("%f%*c", &data);

			while (1)
			{
				char c;
				printf("Back to main menu Y/N : ");
				scanf_s("%c%*c", &c);

				if (c == 'Y')
					break;
			}
			break;
		case 4:
			system("cls");
			switch (plan)
			{
			case 1:
				
				if ((maxdata1 - data1) > 0.2)
					extradata1 = 0.2;
				else
					extradata1 = (data1 < maxdata1) ? (data1 - maxdata1) : 0;

				if ((maxdata1 - data2) > 0.2)
					extradata2 = 0.2;
				else
					extradata2 = (data2 < maxdata1) ? (data2 - maxdata1) : 0;

				if ((maxdata1 - data) > 0.2)
					extradata3 = 0.2;
				else
					extradata3 = (data < maxdata1) ? (data - maxdata1) : 0;

				total1 = 20000 + ((voice1 > maxvoice1) ? (voice1 - maxvoice1) * 50 : 0) + ((text1 > maxtext1) ? (text1 - maxtext1) * 10 : 0) + ((data1 > maxdata1) ? (data1 - maxdata1) / 0.1 * 1000 : 0);
				total2 = 20000 + ((voice2 > maxvoice1) ? (voice2 - maxvoice1) * 50 : 0) + ((text2 > maxtext1) ? (text2 - maxtext1) * 10 : 0) + ((data2 > (maxdata1 + extradata1)) ? (data2 - (maxdata1 + extradata1)) / 0.1 * 1000 : 0);
				total3 = 20000 + ((voice > maxvoice1) ? (voice - maxvoice1) * 50 : 0) + ((text > maxtext1) ? (text - maxtext1) * 10 : 0) + ((data > (maxdata1 + extradata2)) ? (data - (maxdata1 + extradata2)) / 0.1 * 1000 : 0);

				break;

			case 0:
				
				if ((maxdata2 - data1) > 3)
					extradata1 = 3.00;
				else
					extradata1 = (data1 < maxdata2) ? (data1 - maxdata2) : 0;

				if ((maxdata2 - data2) > 3)
					extradata2 = 3.00;
				else
					extradata2 = (data2 < maxdata2) ? (data2 - maxdata2) : 0;

				if ((maxdata2 - data) > 3)
					extradata3 = 3.00;
				else
					extradata3 = (data < maxdata2) ? (data - maxdata2) : 0;

				total1 = 45000 + ((voice1 > maxvoice2) ? (voice1 - maxvoice2) * 10 : 0) + ((text1 > maxtext2) ? (text1 - maxtext2) * 30 : 0) + ((data1 > maxdata2) ? (data1 - maxdata2) / 0.1 * 500 : 0);
				total2 = 45000 + ((voice2 > maxvoice2) ? (voice2 - maxvoice2) * 10 : 0) + ((text2 > maxtext2) ? (text2 - maxtext2) * 30 : 0) + ((data2 > (maxdata2 + extradata1)) ? (data2 - (maxdata2 + extradata1)) / 0.1 * 500 : 0);
				total3 = 45000 + ((voice > maxvoice2) ? (voice - maxvoice2) * 10 : 0) + ((text > maxtext2) ? (text - maxtext2) * 30 : 0) + ((data > (maxdata2 + extradata2)) ? (data - (maxdata2 + extradata2)) / 0.1 * 500 : 0);

				break;
			}
			
			printf("�������������������������������������������������������������������������������������������������������������� \n");
			printf("��                My three months usage                �� \n");
			printf("��������������������������������������������������������������������������������������������������������������\n");
			printf("�� My Plan : %s                            �� \n", plan ? "Basic Plan    " : "More Data Plan");
			printf("��������������������������������������������������������������������������������������������������������������\n");
			printf("��           ��   February  ��    March    ��    April    �� \n");
			printf("��������������������������������������������������������������������������������������������������������������\n");
			printf("�� Voice     ��    %3d min  ��    %3d min  ��    %3d min  �� \n",voice1, voice2, voice);
			printf("�� Text      ��    %3d text ��    %3d text ��    %3d text �� \n",text1, text2, text);
			printf("�� Data      �� %6.2f GB   �� %6.2f GB   �� %6.2f GB   �� \n",data1, data2,data);
			printf("��������������������������������������������������������������������������������������������������������������\n");
			printf("�� Extra Data�� %6.2f GB   �� %6.2f GB   �� %6.2f GB   �� \n",extradata1, extradata2, extradata3);
			printf("��������������������������������������������������������������������������������������������������������������\n");
			printf("�� Total Fee ��  W\ %7d  �� \\ %7d   �� \\ %7d   �� \n",total1, total2,total3);
			printf("�������������������������������������������������������������������������������������������������������������� \n");

			while (1)
			{
				char c;
				printf("Back to main menu Y/N : ");
				scanf_s("%c%*c", &c);

				if (c == 'Y')
					break;
			}
			break;

		case 5:
			system("cls");
			int averagevoice = (int)((voice1 + voice2 + voice) / 3.0 + 0.5 );
			int averagetext = (int)((text1 + text2 + text) / 3.0 + 0.5);
			float averagedata = roundf((data1 + data2 + data) / 3 * 100) / 100;

			int basic, moredata, recommend;


			basic = 20000 + ((averagevoice > maxvoice1) ? (averagevoice - maxvoice1) * 50 : 0) + ((averagetext > maxtext1) ? (averagetext - maxtext1) * 10 : 0) + ((averagedata > maxdata1) ? (averagedata - maxdata1) / 0.1 * 1000 : 0);
			moredata = 45000 + ((averagevoice > maxvoice2) ? (averagevoice - maxvoice2) * 10 : 0) + ((averagetext > maxtext2) ? (averagetext - maxtext2) * 30 : 0) + ((averagedata > maxdata2) ? (averagedata - maxdata2) / 0.1 * 500 : 0);
	
			if (basic < moredata)
				recommend = 1;
			else
				recommend = 0;

			printf("���������������������������������������������������������������������������������������������� \n");
			printf("��           Average usage of 3-month          �� \n");
			printf("����������������������������������������������������������������������������������������������\n");
			printf("��  My Plan : %s                   �� \n", plan ? "Basic Plan    " : "More Data Plan");
			printf("����������������������������������������������������������������������������������������������\n");
			printf("�� Average usage of voice :    %3d    	      �� \n",averagevoice);
			printf("�� Average usage of text :     %3d    	      �� \n",averagetext);
			printf("�� Average usage of data :  %6.2f    	      �� \n",averagedata);
			printf("����������������������������������������������������������������������������������������������\n");
			printf("�� Basic Plan Fee :        \\ %7d           �� \n",basic);
			printf("�� More Data Plan Fee :    \\ %7d  	      �� \n",moredata);
			printf("����������������������������������������������������������������������������������������������\n");
			printf("�� We recommend to use %s 	      �� \n", recommend ? "Basic Plan    " : "More Data Plan");
			printf("���������������������������������������������������������������������������������������������� \n");

			while (1)
			{
				char c;
				printf("Back to main menu Y/N : ");
				scanf_s("%c%*c", &c);

				if (c == 'Y')
					break;
			}
			break;

		case 6:
			return 0;
		}
		
	

	}
}