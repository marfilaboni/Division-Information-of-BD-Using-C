#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    int n,x;
    char div[20];
    printf("There are seven division in Bangladesh.\nThey are Dhaka,Chittagong,Sylhet,Barisal,Rajshahi,Khulna & Rangpur.\n\n");
    for(;;)
    {
    printf("Choose any Division to know about the division or End to terminate :");
    scanf("%s",div);
    if(strcmp(div,"Dhaka")==0||strcmp(div,"dhaka")==0||strcmp(div,"DHAKA")==0)
    {
        printf("           THE BASIC INFORMATION OF THE DIVISION\n       ___________________________________________");
        printf("\nDhaka is the capital city of Bangladesh.\nIt is situated in the bank of Buriganga.\nThe previous name of this city is Jahangirnagar.\n\nRank (Establishment):1st\n\nArea:31,119 square-meters\n\nPopulation:4,05,92,431\n\nTotal district:17\n\nBiggest district:Mymenshing\n\nSmallest district:Narayangonge\n\nNumber of city co-orporation:2\n\nRate of proverty:31 percent\n\n");
    }
    else if(strcmp(div,"Chittagong")==0||strcmp(div,"chittagong")==0||strcmp(div,"CHITTAGONG")==0)
    {
         printf("           THE BASIC INFORMATION OF THE DIVISION\n       ___________________________________________");
        printf("\nChittagong is one of the most popular city of Bangladesh.\nIt is Known as port city.\n\nRank (Establishment):2nd\n\nArea:33,771 square-meters\n\nPopulation:2,51,87,313\n\nTotal district:11\n\nBiggest district:Rangamati\n\nSmallest district:Feni\n\nNumber of city co-orporation:1\n\nRate of proverty:34 percent\n\n");
    }
    else if(strcmp(div,"Khulna")==0||strcmp(div,"khulna")==0||strcmp(div,"KHULNA")==0)
    {
         printf("           THE BASIC INFORMATION OF THE DIVISION\n       ___________________________________________");
        printf("\nKhulna is one of the biggest city of Bangladesh.\nShundarban and Shatgombuj mosque is situated here.\nMongla port one of the biggest port of Bangladesh is also situated here.\n\n\nRank (Establishment):4th\n\nArea:18,177 square-meters\n\nPopulation:1,51,85,026\n\nTotal district:10\n\nBiggest district:Khulna\n\nSmallest district:Meherpur\n\nNumber of city co-orporation:1\n\nRate of proverty:33.45percent\n\n");
    }
    else if(strcmp(div,"Barisal")==0||strcmp(div,"barisal")==0||strcmp(div,"BARISAL")==0)
    {
         printf("           THE BASIC INFORMATION OF THE DIVISION\n       ___________________________________________");
        printf("\nBarisal is known for rivers.\n\n\nRank (Establishment):5th\n\nArea:13,297 square-meters\n\nPopulation:85,14,000\n\nTotal district:06\n\nBiggest district:vola\n\nSmallest district:Jhalkathi\n\nNumber of city co-orporation:1\n\nRate of proverty:45-52percent\n\n");
    }
    else if(strcmp(div,"Rangpur")==0||strcmp(div,"rangpur")==0||strcmp(div,"RANGPUR")==0)
    {
         printf("           THE BASIC INFORMATION OF THE DIVISION\n       ___________________________________________");
        printf("\nRangpur is a newly made division\n\n\nRank (Establishment):7th\n\nArea:16,317 square-meters\n\nPopulation:1,38,47,000\n\nTotal district:08\n\nBiggest district:Dinajpur\n\nSmallest district:Lalmonirhat\n\nThere has no city co-orporation this divission\n\nRate of proverty:40 percent\n\n");
    }
    else if(strcmp(div,"Rajshahi")==0||strcmp(div,"rajshahi")==0||strcmp(div,"RAJSHAHI")==0)
    {
         printf("           THE BASIC INFORMATION OF THE DIVISION\n       ___________________________________________");
        printf("\nRajshahi is famous for mangoes.It is also famous for its historical places\n\n\n\nRank (Establishment):3rd\n\nArea:18,177 square-meters\n\nPopulation:1,76,30,606\n\nTotal district:08\n\nBiggest district:Nouga\n\nSmallest district:Rajshahi\n\nNumber of city co-orporation:1\n\nRate of proverty:31 percent\n\n");
    }
    else if(strcmp(div,"Sylhet")==0||strcmp(div,"sylhet")==0||strcmp(div,"SYLHET")==0)
    {
         printf("           THE BASIC INFORMATION OF THE DIVISION\n       ___________________________________________");
        printf("\nSylhet is famous for tea garden.\nThere are number of hills and water fall.\n\n\n\nRank (Establishment):6th\n\nArea:12,596 square-meters\n\nPopulation:82,90,857\n\nTotal district:17\n\nBiggest district:Shunamgounge\n\nSmallest district:Hobigonge\n\nNumber of city co-orporation:1\n\nRate of proverty:45-52 percent\n\n");
    }
    else if(strcmp(div,"End")==0||strcmp(div,"end")==0||strcmp(div,"END")==0)
    {
    printf("Thank you for knowing about us.\n");
    break;
    }

   }
    getch();
    return 0;
}
