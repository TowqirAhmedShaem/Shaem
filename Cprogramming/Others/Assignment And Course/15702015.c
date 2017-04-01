#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main()
{
    char command[300];
    for( ; ;)
    {
        printf("Type any nick name or ID\a\n");
        gets(command);
        if(!strcmp(command,"close"))
            break;
        if(!strcmp(command,"shaem")||!strcmp(command,"15702015"))
        {
            printf("\nName : Towqir Ahmed Shaem\nID : 15702015\nPhone No : 01521401124\nGuardians Name: Sayed Ahmed.\n");
            printf("Guardians Phone No : 01818263178\nAddress : 115,North Nalapara,4000,Chittagong.\n\n");
        }
        if(!strcmp(command,"protima")||!strcmp(command,"15702002"))
        {
            printf("\nStudent's name: Protima Khan\nStudent's ID:15702002\nGuardian's name: M.A. Latif Khan\n");
            printf("District: Manikgang\nGuardian's contact number: 01726340563\n\n");
        }
        if(!strcmp(command,"razu")||!strcmp(command,"15702030"))
        {
            printf("\nName : Md.Abdul Kaium Khan(razu)\nID : 15702030\nGuardian's name : Md.Abdur Rob Khan\n");
            printf("District : Chandpur\nGuardian's Number : 01719649740\n\n");
        }
        if(!strcmp(command,"sajib")||!strcmp(command,"15702063"))
        {
            printf("\nName : Sheikh Shoaib Ahmed Sajib\nID: 15702063\nGuardian's Name : MD.Sheikh Saadi\n");
            printf("District : Tangail\nGuardian' s Contact Number : 01716480322\n\n");
        }
        if(!strcmp(command,"sanchita")||!strcmp(command,"15702066"))
        {
            printf("\nName: sanchita chakraborty\nID :15702066\nGuardian's Name : Niranjan Chakraborty\n");
            printf(" District : Manikganj\nGuardian's num-01818604487\n\n");
        }
        if(!strcmp(command,"sazzad")||!strcmp(command,"15702024"))
        {
            printf("\nFull name- Muhammad Sajjad Hossain\nStudents ID- 15702024\nFather's name- Ali Hossain\nMother's name- Rashida Begum\n");
            printf("District- Chittagong\nGuardian's Number- 01840411451\n\n");
        }
        if(!strcmp(command,"paira")||!strcmp(command,"15702010"))
        {
            printf("\nName :Sheuly Akter\nID-15702010\nguardian's name: Sheli Akter\n");
            printf("district:Chittagong\nguardian's number: 01863225314\n\n");
        }
        if(!strcmp(command,"saif")||!strcmp(command,"15702026"))
        {
            printf("\nName : Saif Ahmed\nID : 15702026\nParents Name : nasir ahmed\n");
            printf("Address : chittagong\nNumber : 01521487029\n\n");
        }
        if(!strcmp(command,"shoaib")||!strcmp(command,"15702014"))
        {
            printf("\nName: S.M.Ruhul Islam\nId: 15702014\nGaurdian's Name: S.M.Ruhul Amin\nDistrict: Chittagong\nContact Number: 01868947277\n\n");
        }
        if(!strcmp(command,"munna")||!strcmp(command,"15702069"))
        {
            printf("\nStudent's name:Md. Ali Munna\nID:15702069\nGuardian's name:Md. Yeasin\nDistrict : Chittagong\nGuardian's contact number:01840136573\n\n");
        }
        if(!strcmp(command,"shibika")||!strcmp(command,"15702065"))
        {
            printf("\nStudent's name:Shibika Paul\nID:15702065\nGuardian's name:Shamar paul\nDistrict:Chittagong\nGuardian's contact number:01815600372\n\n");
        }
        if(!strcmp(command,"arnob")||!strcmp(command,"15702054"))
        {
            printf("\nId : 15702054\nname : Arnob Chakraborty\nguardians :swapan chakraborty\naddress : enayet bazar, Chittagong\n01684294445\n\n");
        }
        if(!strcmp(command,"junaed")||!strcmp(command,"15702023"))
        {
            printf("\nName: Abdullah Zowad Khan\nID: 15702023\nGuardians Name: AMM Zowadul Karim Khan\nDistrict: Satkhira\nNumber(guardian): 01712010029\n\n");
        }
        if(!strcmp(command,"sohel")||!strcmp(command,"15702062"))
        {
            printf("\nID:15702062\nName:Md.Shohel Mia\nGuardians name:Md.Jaher Mia\nAddress :Brahmanbaria\nGuardians number:017954144952\n\n");
        }
        if(!strcmp(command,"areefin")||!strcmp(command,"15702050"))
        {
            printf("\nID:15702050\nStudent's name:Areefin Hassan\nGuardian's name:Nayeem chowdhury\nDistrict: Chittagong\nGuardian's contact number:01828125399\n\n");
        }
        if(!strcmp(command,"tanvir")||!strcmp(command,"15702047"))
        {
            printf("\nID:15702047\nStudent's name: Kazi Tanvir Zaman\nGuardian's name: kazi saifuzzaman\nDistrict: Chittagong\nGuardian's contact number: 01758-974433\n\n");
        }
        if(!strcmp(command,"orune")||!strcmp(command,"15702034"))
        {
            printf("\nID :15702034\nName : Orune aminul\nGuardian :Mohammad Aminul Haque\nContact No : 01819329389\n\n");
        }
        if(!strcmp(command,"zahid")||!strcmp(command,"15702018"))
        {
            printf("\nID:15702018\nName: Zahid Hasan\nGuardian's name: Md. Habibur Rahman\nDistrict: Kishoregonj\nGuardian's contact number: 01770398769\n\n");
        }
        if(!strcmp(command,"mahbub")||!strcmp(command,"15702051"))
        {
            printf("\nStudent's ID:15702051\nStudent's name: Md Mahbubur Rahman\nGuardian's name: Md Delower Hossain\nDistrict: Gainandha\nGuardian's contact number: 01917833314\n\n");
        }
        if(!strcmp(command,"mezbah")||!strcmp(command,"15702017"))
        {
            printf("\nName: mezbah uddin chchowdury\nID: 15702017\nGuardians Name: kusum akter\nAddress: bahaddarhat\nNumber(guardian):01822270992\n\n");
        }
        if(!strcmp(command,"sazzad")||!strcmp(command,"15702068"))
        {
            printf("\nName-Md. Sazzad Hosain\nID-15702068G\nuardian Name-Hafez Abdul Mannan\nDis-Ctg\nphone(guardian)-01952174288\n\n");
        }
        if(!strcmp(command,"fariha")||!strcmp(command,"15702059"))
        {
            printf("\nStudent's ID:15702059\nStudent's name: Farihatun Jannat\nGuardian's name: MD. Karim Ullah\nDistrict: Chittagong\nContact number: 01852742179\n\n");
        }
        if(!strcmp(command,"jinia")||!strcmp(command,"15702007"))
        {
            printf("\nID:15702007\nname:Jinia Shaila Jahan\nGuardian's name: MD. Arif Jahan\nDistrict: Feni\nContact number: 01718460707\n\n");
        }
        if(!strcmp(command,"joy")||!strcmp(command,"15702060"))
        {
            printf("\nID:15702060\nName: Joy Rudra\nGuardians Name: Mridul Rudra\nDistrict:Chittagong\nNumber: 01830810777\n\n");
        }
        if(!strcmp(command,"niloy")||!strcmp(command,"15702041"))
        {
            printf("\nID: 15702041\nName: Niloy Barua\nGuardian's name: S. B. Barua\nDistrict: Ctg\nNumber: 01717379419\n\n");
        }
        if(!strcmp(command,"sifat")||!strcmp(command,"14702032"))
        {
            printf("\nID: 14702032\nName: Sazidul Islam Sifat\nGuardian's Name: Md. Rezaul Islam\nDistrict: Barisal\nContact No: 01781479412\n\n");
        }
        if(!strcmp(command,"sovon")||!strcmp(command,"15702070"))
        {
            printf("\nId: 15702070\nName: Md.Sultan Mahmud\nGaurdian: Farzana Nasrin\nDistrict: Feni\nContact: 01834406745\n\n");

        }
        if(!strcmp(command,"naznin")||!strcmp(command,"15702064"))
        {
            printf("\nId:15702064 .Name:Naznin Akter .Guardian 's Name:parvin Akter. District:ctg. Number:01819628739\n\n");
        }
        if(!strcmp(command,"aisha")||!strcmp(command,"15702037"))
        {
            printf("\nID: 15702037\nName:Aisha B. Rahman\nLocal Guardian: Fatima Rahman\nDist:Comilla\nNumber:01949207153\n\n");
        }
        if(!strcmp(command,"tasneem")||!strcmp(command,"15702061"))
        {
            printf("\nId: 15702061\nName Tasneem Khaled\nguardian's name saifuddin Khaled\nDist: Ctg\nnumber 01711723980\n\n");
        }
        if(!strcmp(command,"zareen")||!strcmp(command,"15702036"))
        {
            printf("\nId:15702036\nname-Syeda Tajkia Zareen\nGuardian-Humayun kabir\ndist-ctg\nnum-01830055238\n\n");
        }
        if(!strcmp(command,"zeesan")||!strcmp(command,"15702016"))
        {
            printf("\nid:15702016\nname: Md. Irfan Uddin\ngurdian name: Monzora Begum\nDis: Chittagong\nm.n: 01836834556\n\n");
        }
        if(!strcmp(command,"jesan")||!strcmp(command,"15702046"))
        {
            printf("\nId:15702046\nName:Jesan Ahmed\nGuardian:Zahid Hasan\nNumber:01915980751\nDst:Jamalpur\n\n");
        }
        if(!strcmp(command,"prapty")||!strcmp(command,"15702013"))
        {
            printf("\nid 15702013\nname prapty saha\nfather name paritosh chandra saha\ndistrict gaibandha\nno 01845006296\n\n");
        }
        if(!strcmp(command,"jame")||!strcmp(command,"15702029"))
        {
            printf("\nid- 15702029\nName- Afroza sultana jame\nuardian's name- Abul bashir\nphone no- 01791779339\nDistrict - cox's bajar\n\n");
        }
        if(!strcmp(command,"bablu")||!strcmp(command,"15702040"))
        {
            printf("\nid-15702040\nname- mohammad babul\nguardians name- md bashar bhuiyan\ncontact no-01742448463\np.address-C/A,agrabad,ctg\ndistrict-Brahmanbaria\n\n");
        }
        if(!strcmp(command,"ashiq")||!strcmp(command,"14702065"))
        {
            printf("\nID:14702065\nName:Md.Imdadul Hoque Ashiq\nGuardian's Name:Md.Nazibul Hoque\nMobile No.:01521485871\n\n");
        }
        if(!strcmp(command,"antu")||!strcmp(command,"15702006"))
        {
            printf("\nID:15702006\nName:Swarup Bhowmik\ngaurdians name:Dulal Bhowmik\nMobile no:01838158080\nAdress:North Nalapara,Ctg\n\n");
        }
        if(!strcmp(command,"shoron")||!strcmp(command,"15702039"))
        {
            printf("\nID- 15702039\nName- Mohammed Shahriar Kamal\nGuardian's name- Mohammed Kamal Uddin\nPhone no-01711326715\nAddress- City Gate,Chittagong\n\n");
        }
        if(!strcmp(command,"mahbub")||!strcmp(command,"14702071"))
        {
            printf("\nID. 14702071\nMahbub Hasan\nfather: Abul kalam azad\nphon: 01521417961\nAdress : sholoshor. Chittagong\n\n");
        }
        if(!strcmp(command,"mamun")||!strcmp(command,"15702028"))
        {
            printf("\nId 15702028\nNamee: ABDULLAH AL MAMUN\nfather's name : Abdul Haque\nphone num 01764861223\naddress : versity campus, cu\n\n");
        }
        if(!strcmp(command,"shamim")||!strcmp(command,"14702018"))
        {
            printf("\nID-14702018\nName-Shamim Ahmed\nGuardians name-Abdul Khalek\nContact no-01770641600\nAddress-Pangsha,Rajbari\n\n");
        }
        if(!strcmp(command,"riyad")||!strcmp(command,"15702019"))
        {
            printf("\nID-15702019\nName- Md. Raihan Alam\nGuardian's Name- Shah Alam\nPhone No- 01784661550\nAddress- Rampura, Dhaka, Bangladesh\n\n");
        }
        if(!strcmp(command,"imran")||!strcmp(command,"15702035"))
        {
            printf("\nid 15702035\nName..Imranul kabir\nGN: mustafa ali\nGrdns.01819065362\nDstrct.Chittagong\n\n");
        }
        if(!strcmp(command,"rajasree")||!strcmp(command,"1570206"))
        {
            printf("\nID-1570206\nName-Rajasree Das\nGuardiian Name-Uttam Kumar Das\nContact No.-01819098204\nAddress-Patharghata,Chittagong\n\n");
        }
        if(!strcmp(command,"hridoy")||!strcmp(command,"15702031"))
        {
            printf("\nID-15702031\nName:Hridoy Das\nFather name:Nakul Kanti Das\nContact no:01740882227\nAddress:Guimara Khagrachari\n\n");
        }
        if(!strcmp(command,"dipa")||!strcmp(command,"15702012"))
        {
            printf("\nID-15702012\nName-Dipa Saha\nGuardian's Name- Dipak Saha\nDistrict- Noakhali\nContact Number- 01683980415\n\n");
        }
        if(!strcmp(command,"sujoy")||!strcmp(command,"15702021"))
        {
            printf("\nSujoy dhar\nID:15702021\nGUARDIAN: Babul dhar\nAd:Lohagara, chittagong\nph:01846883934\n\n");
        }
        if(!strcmp(command,"mithun")||!strcmp(command,"15702056"))
        {
            printf("\nID: 15702056\nName: Mithun chakraborty\nGuardian name: Chandan chakraborty\nAdd: Rangunia, Chittagong\nPh: 01825100845\n\n");
        }
        if(!strcmp(command,"saed")||!strcmp(command,"15702009"))
        {
            printf("\nID: 15702009\nName: Md. Saeid Ekram\nGuardian name: Md. Tofazzel Hossain\nAdd: Aruapara, Kushtia\nPh: 01521456493\n\n");
        }

    }

}
