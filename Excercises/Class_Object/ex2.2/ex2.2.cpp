#include <iostream>
#include <string>
#include <vector>
//struct Subject
//{
//	float math;
//	float physic;
//	float chemistry;
//	float literature;
//	float english;
//	float biology;
//	float history;
//	float geography;
//	float average;
//};
//
//class Student
//{
//public:
//	int ID;
//	std::string name;
//	int age;
//	std::string nationality;
//	float height;
//	float weight;
//	Subject score;
//
//	Student()
//	{
//		ID = 0;
//		name = "Unknown";
//		age = 0;
//		nationality = "Unknown";
//		height = 0;
//		weight = 0;
//		score.math = 0;
//		score.physic = 0;
//		score.chemistry = 0;
//		score.literature = 0;
//		score.english = 0;
//		score.biology = 0;
//		score.history = 0;
//		score.geography = 0;
//	};
//
//	void inputData()
//	{
//		std::cout << "ID: ";
//		std::cin >> ID;
//		
//		std::cin.ignore();
//		std::cout << "Name: ";
//		std::getline(std::cin, name);
//
//
//		std::cout << "Age: ";
//		std::cin >> age;
//
//
//		std::cout << "Nationality: ";
//		std::cin >> nationality;
//
//
//		std::cout << "Height: ";
//		std::cin >> height;
//
//
//		std::cout << "Weight: ";
//		std::cin >> weight;
//
//
//		std::cout << "Math score: ";
//		std::cin >> score.math;
//
//
//		std::cout << "Physical score: ";
//		std::cin >> score.physic;
//
//
//		std::cout << "Chemistry score: ";
//		std::cin >> score.chemistry;
//
//
//		std::cout << "Literature score: ";
//		std::cin >> score.literature;
//
//
//		std::cout << "English score: ";
//		std::cin >> score.english;
//
//
//		std::cout << "Biology score: ";
//		std::cin >> score.biology;
//
//
//		std::cout << "History score: ";
//		std::cin >> score.history;
//
//
//		std::cout << "Geography score: ";
//		std::cin >> score.geography;
//
//		score.average = (score.math + score.physic + score.chemistry + score.literature + score.english + score.biology + score.history + score.geography) / 8;
//	}
//
//	void showScore()
//	{
//		std::cout << "\n" << name << "'s test score: \n";
//		std::cout << "Math score: " << score.math << "\n";
//		std::cout << "Physical score: " << score.physic << "\n";
//		std::cout << "Chemistry score: " << score.chemistry << "\n";
//		std::cout << "Literature score: " << score.literature << "\n";
//		std::cout << "English score: " << score.english << "\n";
//		std::cout << "Biology score: " << score.biology << "\n";
//		std::cout << "History score: " << score.history << "\n";
//		std::cout << "Geography score: " << score.geography << "\n";
//		std::cout << "Average score: " << score.average << "\n";
//	}
//
//	void Ranking()
//	{
//		std::cout << "\n";
//		if (score.average > 8) {
//			std::cout << name << "'s score is " << "Good!\n";
//		}
//		else if (score.average >= 5 && score.average <= 8) {
//			std::cout << name << "'s score is " << "Passable!\n";
//		}
//		else {
//			std::cout << name << "'s score is " << "Failure!\n";
//		}
//	}
//
//	void introduce() {
//		std::cout << "\nHi! I'm " << name << " and " << age << " years old. I'm from " << nationality << ".\n";
//	}
//
//
//};

const int num_of_Subject = 8;
std::vector<std::string> subjects = { "Math", "Physic", "Chemistry", "Literature", "English", "Biology", "History", "Geography" };

class Student
{
public:
	int ID;
	std::string name;
	int age;
	std::string nationality;
	float height;
	float weight;
	std::vector<float> score;

	Student(int _ID, std::string _name, int _age, std::string _nationality,
		float _height, float _weight, std::vector<float> _score) {
		ID = _ID;
		name = _name;
		age = _age;
		nationality = _nationality;
		height = _height;
		weight = _weight;

		for (int i = 0; i < _score.size(); i++) {
			score.push_back(_score[i]);
		}
		int num_of_missing_Subject = num_of_Subject - _score.size();
		for (int i = 0; i < num_of_missing_Subject; i++) {
			score.push_back(0);
		}
	}

	void introduce() {
		std::cout << "\nID: " << ID << "\n";
		std::cout << "Name: " << name << "\n";
		std::cout << "Age: " << age << "\n";
		std::cout << "Nationality: " << nationality << "\n";
		std::cout << "Height: " << height << "\n";
		std::cout << "Weight: " << weight << "\n";
	}

	void showTableScore() {
		std::cout << "\n" << name << "'s test score: \n";
		for (int i = 0; i < num_of_Subject; i++) {
			std::cout << subjects[i] << ": " << score[i] << "\n";
		}
	}

	void showRanking() {
		float GPA = 0;
		for (int i = 0; i < num_of_Subject; i++) {
			GPA += score[i];
		}
		GPA /= 8;
		std::cout << "\nQualification of " << name << "'s test score = " << GPA << " -> ";
		if (GPA > 8) {
			std::cout << "Good\n";
		}
		else if (GPA >= 5 && GPA <= 8) {
			std::cout << "Passable\n";
		}
		else {
			std::cout << "Failure\n";
		}
	}
};

class Class
{
public:
	std::string ID;
	std::vector<Student*> list_student;
	Student* monitor;
	static int num_of_Class;

	Class(std::string _ID) {
		ID = _ID;
		monitor = NULL;
		num_of_Class++;
	}

	void add_student(Student* student) {
		list_student.push_back(student);
	}

	void remove_student(int id) { // using ID
		int i = 0;
		for (i = 0; i < list_student.size(); i++) {
			if (list_student[i]->ID == id) {
				break;
			}
		}
		list_student.erase(list_student.begin() + i);
	}

	void update_student(int id) {
		int i = 0;
		for (i = 0; i < list_student.size(); i++) {
			if (list_student[i]->ID == id) {
				break;
			}
		}
		int choice = 0;
		std::cout << "What information about this student would you like to update?\n";
		std::cout << "1. ID \t 2. Name \t 3. Age\n";
		std::cout << "4. Nationality \t 5. Height \t 6. Weight\n";
		std::cin >> choice;
		switch (choice)
		{
			case 1:
				std::cin >> list_student[i]->ID;
				break;
			case 2:
				std::cout << "Name: ";
				std::cin.ignore();
				std::getline(std::cin, list_student[i]->name);
				break;
			case 3: 
				std::cin >> list_student[i]->age;
				break;
			case 4: 
				std::getline(std::cin, list_student[i]->nationality);
				break;
			case 5: 
				std::cin >> list_student[i]->height;
				break;
			case 6: 
				std::cin >> list_student[i]->weight;
				break;
			default:
				std::cout << "Invalid choice!";
				break;
		}
	}

	void classMonitor(Student* student) {
		monitor = student;
		std::cout << "Class Monitor is " << monitor->name;
	}
};

int Class::num_of_Class = 0;

int main()
{
	// Student information
	Student* student_1 = new Student(0, "Hung Bui", 20, "Vietnam", 1.68, 63,
		{ 10, 9.5, 8, 7.5, 7, 6.75, 5, 3 });
	student_1->introduce();
	student_1->showTableScore();
	student_1->showRanking();

	Student* student_2 = new Student(1, "Ha Nguyen", 20, "Vietnam", 1.75, 50,
		{ 9.75, 7, 6, 7.5, 7, 9, 6, 4 });
	student_2->introduce();
	student_2->showTableScore();
	student_2->showRanking();

	// Class information
	Class* class_1 = new Class("GCH1004");
	class_1->add_student(student_1);
	class_1->add_student(student_2);

	/*for (int i = 0; i < class_1->list_student.size(); i++) {
		std::cout << "\n" << class_1->list_student[i]->name << "\n";
	} display name student in class_1
	
	class_1->update_student(1); // update information student with ID 1
	for (int i = 0; i < class_1->list_student.size(); i++) {
		std::cout << "\n" << class_1->list_student[i]->name << "\n";
	}*/
	class_1->classMonitor(student_2);

	Class* class_2 = new Class("GCH1002");

	// Number of classes in the school 
	std::cout << "\nThere are " << Class::num_of_Class << " classes in school now.\n";
}

