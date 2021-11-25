#include "main.cpp"
#include "printMenu.cpp"
#include "post.h"
#include "get.h"
#include "parser.h"

void inputIdAndPw()
{
    system("cls");

    cout << "ȯ�� ���� ���� �ý��ۿ� �����Ͻ� ���� ȯ���մϴ�.\n";
    cout << "�Ƿ��� �˻縦 ���� �ο��� API Ű, ���̵�, �н����带 �Է��ϼ���.\n\n";

	cout << endl;
}

int checkIdAndPw()
{

	// Login form
	string apikey = null;
	string docId = null;
	string docPw = null;

	cout << "API key: ";
	cin >> apikey;

	cout << "ID : ";
	cin >> docId;

	std::cout << "Password: ";
	std::cin >> password;

	// Get user token
	stringstream authURL;
	stringstream authJSON;

	authURL << "https://www.googleapis.com/identitytoolkit/v3/relyingparty/verifyPassword?key="
		<< apikey;

	authJSON << "{"
		<< "	\"email\": \"" << docId << "\","
		<< "	\"password\": \"" << docPw << "\","
		<< "	\"returnSecureToken\": \"true\""
		<< "}";

	// Post form
	string postResponse = post(authURL.str().c_str(), authJSON.str().c_str());

	// Print result
	cout << "HTTPS Response:" << endl
		<< postResponse <<endl;

	// Get user token
	string token = getJsonValue(postResponse, "\"idToken\":");
	cout << "User Token:" << endl
		<< token << endl;

	// End point url form
	string endPointURL;

	cout << "End point URL: ";
	cin >> endPointURL;

	// Get databese response
	stringstream fullURL;
	fullURL << endPointURL
		<< "?auth="
		<< token;

	get(fullURL.str().c_str());

	cout << endl;
	system("PAUSE");

	return 0;
}