export module enum_test;

import <iostream>;
import <string>;

using namespace std;

enum class Genre {Action, Romance, Horror, Drama };

typedef struct Movie{
	string name;
	Genre genre;
	string summery;
};

export void enumTest() {
	Movie shawshank{string("�ũ Ż��"), Genre::Drama,string("���ΰ��� �ũ�� �����鼭 ����� �Ͽ� ���� ��ȭ")};
	Movie dune{string("��"), Genre::Action,string("���ΰ� ������ �� �༺���� ���߿��� �縷 �༺���� �����ϸ鼭 ���� �Ͽ� ���� ��ȭ")};
	Movie movies[]{ shawshank,dune };
	
	using enum Genre;
	for (int i{ 0 }; i < 2; i++) {
		cout << movies[i].name << '\n';
		string genre;
		switch (movies[i].genre) {
		case Action:
			genre = "Action";
			break;
		case Romance:
			genre = "Romance";
			break;
		case Horror:
			genre = "Horror";
			break;
		case Drama:
			genre = "Drama";
		}
		cout << genre << '\n';
		cout << movies[i].summery << endl;
	}

}