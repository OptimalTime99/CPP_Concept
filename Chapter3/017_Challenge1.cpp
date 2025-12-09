//#include <Windows.h>
//#include <iostream>
//#include <string>
//using namespace std;
//
//void printText(string str) {
//	for (char s : str) {
//		Sleep(10);
//		cout << s;
//	}
//}
//
//void drawProgressBar(int progress) {
//	const int barWidth = 50;                // 게이지 길이 (문자 개수)
//	int pos = progress * barWidth / 100;    // 현재 진행률에 따른 칸 수
//
//	cout << "\r포맷 진행률: [";            // \r = 커서를 줄 맨 앞으로 이동
//
//	for (int i = 0; i < barWidth; ++i) {
//		if (i < pos)       cout << "#";    // 채워진 부분
//		else if (i == pos) cout << ">";    // 진행 중인 위치
//		else               cout << " ";    // 아직 안 찬 부분
//	}
//
//	if (progress > 100) progress = 100; // 100% 초과 방지
//
//	cout << "] " << progress << "%";
//	cout.flush(); // 출력 버퍼 강제 비우기 (바로 화면에 보이게)
//}
//
//int main() {
//	printText("삐빅! 당신의 컴퓨터는 바이러스에 걸렸습니다!\n지금부터 답변을 제대로 하지 않으면 당신의 컴퓨터는 포맷됩니다…!\n포맷을 실행하시겟습니까?(Y/N)\n");
//
//	char key;
//	cin >> key;
//
//	if(key == 'y' || key == 'Y') {
//		printText("포맷을 시작합니다…!\n");
//	} else if(key == 'n' || key == 'N') {
//		printText("포맷을 취소하려다가 시작합니다…!\n");
//	} else {
//		printText("잘못된 입력으로 포맷을 시작합니다…!\n");
//	}
//
//	Sleep(500);
//	printText("\n바이러스로 인해 포맷이 수동으로 이루어집니다.\n게이지를 채우려면 [spacebar] 키를 눌러주세요.\n");
//
//	int progress = 0;
//	while (progress < 100) {
//		if (GetAsyncKeyState(VK_SPACE) & 0x8000) {
//			if (progress < 100) {
//				progress+= rand() % 5 + 1;
//				drawProgressBar(progress);
//				Sleep(100);
//			}
//		}
//	}
//	cout << endl;
//
//	if (progress >= 100) {
//		printText("\n포맷이 완료되었습니다! 컴퓨터가 재부팅됩니다…!\n");
//	}
//
//	Sleep(1000);
//	printText("\n잠깐! 장난이었어요! 컴퓨터는 안전합니다! 안심하세요!\n");
//
//	return 0;
//}
