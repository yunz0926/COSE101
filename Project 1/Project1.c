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
		printf("旨收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收旬 \n");
		printf("早      KU Mobile Phone Bill Calculator	      早 \n");
		printf("曳收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收朽\n");
		printf("早   1 : Display plans                         早 \n");
		printf("早   2 : Usage information for past two months 早 \n");
		printf("早   3 : Input this month usage                早 \n");
		printf("早   4 : Total fee for past 3 months           早 \n");
		printf("早   5 : Best plan recommendation              早 \n");
		printf("早   6 : Exit                                  早 \n");
		printf("曲收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收旭 \n");

		scanf_s("%d%*c", &number);

		switch (number)
		{
		case 1:
			system("cls");

			printf("旨收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收旬 \n");
			printf("早                 Basic Plan	              早 \n");
			printf("曳收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收朽\n");
			printf("早  Included in plan   弛  Additional usages    早 \n");
			printf("曳收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收朽\n");
			printf("早 Voice      弛  500m free   弛 \\ 50 / 1m       早 \n");
			printf("早 Text       弛  100t free   弛 \\ 10 / 1t       早 \n");
			printf("早 Data       弛  2.00GB free 弛 \\ 10000 / 0.1GB 早 \n");
			printf("曳收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收朽\n");
			printf("早 Basic fee  弛 \\ 20000         	              早 \n");
			printf("曲收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收旭 \n");
			printf(" \n");
			printf("旨收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收旬 \n");
			printf("早                More Data Plan	              早 \n");
			printf("曳收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收朽\n");;
			printf("早  Included in plan   弛  Additional usages    早 \n");
			printf("曳收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收朽\n");
			printf("早 Voice      弛  300m free   弛 \\ 10 / 1m       早 \n");
			printf("早 Text       弛  100t free   弛 \\ 30 / 1t       早 \n");
			printf("早 Data       弛  30.00GB free弛 \\ 500 / 0.1GB   早 \n");
			printf("曳收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收朽\n");
			printf("早 Basic fee  弛 \\ 45000         	              早 \n");
			printf("曲收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收旭 \n");
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



			printf("旨收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收旬 \n");
			printf("早          Last two months usage	      早 \n");
			printf("曳收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收朽\n");
			printf("早  My Plan : %s                   早 \n", plan ? "Basic Plan    " : "More Data Plan");
			printf("曳收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收朽\n");
			printf("早            弛   February     弛    March      早 \n");
			printf("曳收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收朽\n");
			printf("早 Voice      弛    %3d min     弛    %3d min    早 \n", voice1, voice2);
			printf("早 Text       弛    %3d text    弛    %3d text   早 \n", text1, text2);
			printf("早 Data       弛 %6.2f GB      弛 %6.2f GB     早 \n", data1, data2);
			printf("曲收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收旭 \n");

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
			
			printf("旨收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收旬 \n");
			printf("早                My three months usage                早 \n");
			printf("曳收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收朽\n");
			printf("早 My Plan : %s                            早 \n", plan ? "Basic Plan    " : "More Data Plan");
			printf("曳收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收朽\n");
			printf("早           弛   February  弛    March    弛    April    早 \n");
			printf("曳收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收朽\n");
			printf("早 Voice     弛    %3d min  弛    %3d min  弛    %3d min  早 \n",voice1, voice2, voice);
			printf("早 Text      弛    %3d text 弛    %3d text 弛    %3d text 早 \n",text1, text2, text);
			printf("早 Data      弛 %6.2f GB   弛 %6.2f GB   弛 %6.2f GB   早 \n",data1, data2,data);
			printf("曳收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收朽\n");
			printf("早 Extra Data弛 %6.2f GB   弛 %6.2f GB   弛 %6.2f GB   早 \n",extradata1, extradata2, extradata3);
			printf("曳收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收朽\n");
			printf("早 Total Fee 弛  W\ %7d  弛 \\ %7d   弛 \\ %7d   早 \n",total1, total2,total3);
			printf("曲收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收旭 \n");

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

			printf("旨收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收旬 \n");
			printf("早           Average usage of 3-month          早 \n");
			printf("曳收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收朽\n");
			printf("早  My Plan : %s                   早 \n", plan ? "Basic Plan    " : "More Data Plan");
			printf("曳收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收朽\n");
			printf("早 Average usage of voice :    %3d    	      早 \n",averagevoice);
			printf("早 Average usage of text :     %3d    	      早 \n",averagetext);
			printf("早 Average usage of data :  %6.2f    	      早 \n",averagedata);
			printf("曳收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收朽\n");
			printf("早 Basic Plan Fee :        \\ %7d           早 \n",basic);
			printf("早 More Data Plan Fee :    \\ %7d  	      早 \n",moredata);
			printf("曳收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收朽\n");
			printf("早 We recommend to use %s 	      早 \n", recommend ? "Basic Plan    " : "More Data Plan");
			printf("曲收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收旭 \n");

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