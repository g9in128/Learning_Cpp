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
	Movie shawshank{string("쇼섕크 탈출"), Genre::Drama,string("주인공이 쇼섕크에 갇히면서 생기는 일에 대한 영화")};
	Movie dune{string("듄"), Genre::Action,string("주인공 가문이 물 행성에서 개중요한 사막 행성으로 이주하면서 생긴 일에 대한 영화")};
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