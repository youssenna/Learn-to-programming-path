#include <iostream>

using namespace std;

struct stname {
	string FirstName;
	string LastName;
	string CIN;
	short int age;
};
struct stcontact {
	string PhoneNumber;
	string Watsapp;
	string Facbook;
	string LinkdIn;
	string Instegram;
};
struct stAddress {
	string Contient;
	string Contry;
	string Side;
	string City;
};
struct stnote {
	short int english;
	short int information;
	short int WebDev;
	short int math;
	short int physique;
	short int sport;
};
struct stSeasonUniversity {
	string Class;
	stnote SubjaectSchool ;
};
struct stuniversety {
	string Name;
	string CNE;
	string NemberEtudient;
	stSeasonUniversity season1;
	stSeasonUniversity season2;
	stSeasonUniversity season3;
	stSeasonUniversity season4;
};
struct stjob {
	string job;
	int dailySalary;
	int MonthlySalary;
	int yearlySalary;
};
struct stskill {
	string personnel;
	string tecnique;
};
struct st_students {
	stname name;
	stAddress address;
	stcontact contact;
	stuniversety university;
	stjob job;
	stskill skills;
};
void ft_ask(int &lenght) {
	cout << "how meny person you went to inscript\n";
	cin >> lenght;
	cin.ignore(1, '\n');
}
void ft_ReadInfo(st_students student[100], int &lenght) {
	ft_ask(lenght);
	for (int i = 0 ; i <= lenght - 1; i++) {
		cout << "\n***************************************\n";
		cout << "Enter  information of  student [" << i + 1 << "]\nFirst name : "; 
		getline(cin, student[i].name.FirstName);
		cout << "Last name : ";
		getline(cin, student[i].name.LastName);
		cout << "Age : ";
		cin >> student[i].name.age;
		cout << "CIN : ";
		cin.ignore(1, '\n');
		getline(cin, student[i].name.CIN);

		cout << "Contient (africa...) : ";
		getline(cin, student[i].address.Contient);	
		cout << "Contry : "; 
		getline(cin, student[i].address.Contry);	
		cout << "City : ";
		getline(cin, student[i].address.City);	
		cout << "Side (draa tafillalt ...) : "; 
		getline(cin, student[i].address.Side);

		cout << "Phone number : "; 
		getline(cin, student[i].contact.PhoneNumber);	
		cout << "Whatsup : "; 
		getline(cin, student[i].contact.Watsapp);	
		cout << "Facebook : "; 
		getline(cin, student[i].contact.Facbook);
		cout << "Instegram : "; 
		getline(cin, student[i].contact.Instegram);
		cout << "Linkd In : "; 
		getline(cin, student[i].contact.LinkdIn);	

		cout << "Name of university : ";
		getline(cin, student[i].university.Name);
		cout << "Class : "; 
		getline(cin, student[i].university.season1.Class);
		cout << "code masar : "; 
		getline(cin, student[i].university.CNE);
		cout << "Nember etdient : "; 
		getline(cin, student[i].university.NemberEtudient);
		cout << "Not :\nEnglish : "; 
		cin >> student[i].university.season1.SubjaectSchool.english;
		cout << "Information : "; 
		cin >> student[i].university.season1.SubjaectSchool.information;
		cout << "Math : ";
		cin >> student[i].university.season1.SubjaectSchool.math;
		cout << "Physique : "; 
		cin >> student[i].university.season1.SubjaectSchool.physique;
		cout << "Web devlepmmant : "; 
		cin >> student[i].university.season1.SubjaectSchool.WebDev;
		cout << "Sport : "; 
		cin >> student[i].university.season1.SubjaectSchool.sport;

		cout << "Your job : "; 
		cin.ignore(1, '\n');
		getline(cin, student[i].job.job);
		cout << "Monthly salary : "; 
		cin >> student[i].job.MonthlySalary;

		student[i].job.dailySalary = student[i].job.MonthlySalary / 30;
		student[i].job.yearlySalary = student[i].job.MonthlySalary * 12;


		cout << "enter all your personal skills : "; 
		cin.ignore(1, '\n');
		getline(cin, student[i].skills.personnel);
		cout << "enter all your tecnique skills : "; 
		getline(cin, student[i].skills.tecnique);
	}
}

void ft_PrintInfo(st_students student[100], int lenght)
{
	for (int i = 0; i <= lenght - 1; i++) {
		cout << "*********Student [" << i + 1 << "] ****+++++++++++++++++++++++**\n";

		cout << "********IMPORTANT INFORMATION********\n";
		cout << "*  First Name  : " << student[i].name.FirstName << "\n";
		cout << "*  Last Name   : " << student[i].name.LastName << "\n";
		cout << "*  Age         : " << student[i].name.age << "\n";
		cout << "*  CIN         : " << student[i].name.CIN << "\n";

		cout << "*********ADRESS INFORMATION***********\n";
		cout << "*  Contient    : " << student[i].address.Contient << "\n";
		cout << "*  Side        : " << student[i].address.Side << "\n";
		cout << "*  Contry      : " << student[i].address.Contry << "\n";
		cout << "*  City        : " << student[i].address.City << "\n";

		cout << "*******CONTACT INFORMATION*********\n";
		cout << "*  Phone Number: " << student[i].contact.PhoneNumber << "\n";
		cout << "*  Whatsup     : " << student[i].contact.Watsapp << "\n";
		cout << "*  Facbook     : " << student[i].contact.Facbook << "\n";
		cout << "*  Insegram    : " << student[i].contact.Instegram << "\n";
		cout << "*  likdin      : " << student[i].contact.LinkdIn << "\n";

		cout << "*******UNIVERSITY INFORMATION**********\n";
		cout << "*  University Name  : " << student[i].university.Name << "\n";
		cout << "*  code masar       : " << student[i].university.CNE << "\n";
		cout << "*  student nivaux   : " << student[i].university.season1.Class << "\n";
		cout << "*  student number   : " << student[i].university.NemberEtudient << "\n";
		cout << "*  English note     : " << student[i].university.season1.SubjaectSchool.english << "\n";
		cout << "*  Information note : " << student[i].university.season1.SubjaectSchool.information << "\n";
		cout << "*  Math note        : " << student[i].university.season1.SubjaectSchool.math << "\n";
		cout << "*  physiaue note    : " << student[i].university.season1.SubjaectSchool.physique << "\n";
		cout << "*  Soport note      : " << student[i].university.season1.SubjaectSchool.sport << "\n";
		cout << "*  Web dev not      : " << student[i].university.season1.SubjaectSchool.WebDev << "\n";

		cout << "*******Student skils**********\n";
		cout << "*  personal skils   : " << student[i].skills.personnel << "\n";
		cout << "*  tecnique skils   : " << student[i].skills.tecnique << "\n";

		cout << "*******Student job**********\n";
		cout << "*  job   : " << student[i].job.job << "\n";
		cout << "*  Daily salary   : " << student[i].job.dailySalary << "\n";
		cout << "*  monthly salary   : " << student[i].job.MonthlySalary << "\n";
		cout << "*  yearly salary   : " << student[i].job.yearlySalary << endl;
		cout << "******************************************+++++++++++++++++++++++*\n\n\n";
	}
}
int main()
{
	st_students student[100];
	int lenght = 0;

	ft_ReadInfo(student,lenght);
	ft_PrintInfo(student, lenght);
	return 0;
}
