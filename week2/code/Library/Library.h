// ���� ifdef ���Ǵ���ʹ�� DLL �������򵥵�
// ��ı�׼�������� DLL �е������ļ��������������϶���� LIBRARY_EXPORTS
// ���ű���ġ���ʹ�ô� DLL ��
// �κ�������Ŀ�ϲ�Ӧ����˷��š�������Դ�ļ��а������ļ����κ�������Ŀ���Ὣ
// LIBRARY_API ������Ϊ�Ǵ� DLL ����ģ����� DLL ���ô˺궨���
// ������Ϊ�Ǳ������ġ�
#ifdef LIBRARY_EXPORTS
#define LIBRARY_API __declspec(dllexport)
#else
#define LIBRARY_API __declspec(dllimport)
#endif


#include "../Closest-Pair Problem/DivideAndConquer.h"


	Points points;
	Result result;
	DivideAndConquer dc;
	EXTERN_C void LIBRARY_API __stdcall addPoint(int x, int y);
	EXTERN_C int LIBRARY_API getA();
	EXTERN_C int LIBRARY_API getB();

