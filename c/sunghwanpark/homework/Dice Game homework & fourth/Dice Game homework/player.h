#define MAX_PLAYER_NAME_LENGTH  32 
#define MAX_PLAYER_NUMBER 2

extern char player[MAX_PLAYER_NUMBER][MAX_PLAYER_NAME_LENGTH];

// c�ֻ��� �����ٸ� �����ϰ� ����� ���ϱ� ������ �ʱ� ��ȹ���� �ٸ� ���·� 
// �ڵ尡 �����. �׷��� ���� ������ ���� �����ϸ� �ȵȴ�. (������ ������ �ٸ���.) 
void set_player_info(char []);
void print_player_info(int );