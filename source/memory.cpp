#include "memory.h"


Memory::Memory() { 

	verb_conjugation = 0;

	names	 	= new std::vector<std::string>;
	unlikely 	= new std::vector<std::string>;
	likely	 	= new std::vector<std::string>;
	complements 	= new std::vector<std::string>;
	tense	 	= new std::vector<std::string>;
	predecessors 	= new std::vector<std::string>;

	unlikely->push_back("֮");
        unlikely->push_back("ʵ");
	unlikely->push_back("��"); 
	unlikely->push_back("Ҳ");
	unlikely->push_back("��");
	unlikely->push_back("��");
	unlikely->push_back("��");
	unlikely->push_back("��");
	unlikely->push_back("˵");
	unlikely->push_back("��");
	unlikely->push_back("��");
	unlikely->push_back("��");
	unlikely->push_back("��");
	unlikely->push_back("��");
	unlikely->push_back("��");
	unlikely->push_back("��");
	unlikely->push_back("��");
	unlikely->push_back("��");
	unlikely->push_back("��");
	unlikely->push_back("��");
	unlikely->push_back("��");
	unlikely->push_back("��");
	unlikely->push_back("��");
	unlikely->push_back("��");
	unlikely->push_back("��");
	unlikely->push_back("��");
	unlikely->push_back("ƭ");
	unlikely->push_back("��");
	unlikely->push_back("ʱ");
	unlikely->push_back("��");
	unlikely->push_back("��");
	unlikely->push_back("��");
	unlikely->push_back("��");
	unlikely->push_back("��");
	unlikely->push_back("��");
	unlikely->push_back("��");
	unlikely->push_back("��");
	unlikely->push_back("��");
	unlikely->push_back("��");
	unlikely->push_back("��");
	unlikely->push_back("��");
	unlikely->push_back("��");
	unlikely->push_back("��");
	unlikely->push_back("��");
	unlikely->push_back("��");


	likely->push_back("ܽ");
	likely->push_back("��");
	likely->push_back("��");
	likely->push_back("��");
	likely->push_back("��");
	likely->push_back("��");
	likely->push_back("��");
	likely->push_back("��");
	likely->push_back("ʤ");
	likely->push_back("��");
	likely->push_back("��");
	likely->push_back("��");
	likely->push_back("��");
	likely->push_back("��");
	likely->push_back("��");
	likely->push_back("��");
	likely->push_back("��");
	likely->push_back("��");
	likely->push_back("��");
	likely->push_back("��");
	likely->push_back("־");
	likely->push_back("��");
	likely->push_back("ƽ");
	likely->push_back("��");
	likely->push_back("��");
	likely->push_back("��");
	likely->push_back("��");
	likely->push_back("��");
	likely->push_back("Ԫ");
	likely->push_back("ɽ");
	likely->push_back("��");
	likely->push_back("��");
	likely->push_back("��");
	likely->push_back("ƽ");
	likely->push_back("��");
	likely->push_back("��");
	likely->push_back("��");
	likely->push_back("��");
	likely->push_back("��");
	likely->push_back("��");
	likely->push_back("ΰ");
	likely->push_back("��");
	likely->push_back("��");
	likely->push_back("��");

	complements->push_back("��");
	complements->push_back("��");
	complements->push_back("��");
	complements->push_back("��");
	complements->push_back("��");
	complements->push_back("��");
	complements->push_back("��");
	complements->push_back("��");
	complements->push_back("��");
	complements->push_back("��");
	complements->push_back("��");
	complements->push_back("ȥ");

	complements->push_back("����");
	complements->push_back("����");
	complements->push_back("��ȥ");
	complements->push_back("����");
	complements->push_back("����");
	complements->push_back("����");
	complements->push_back("����");
	complements->push_back("��ȥ");
	complements->push_back("��ȥ");
	complements->push_back("����");
	complements->push_back("һ��");
	complements->push_back("����");
	complements->push_back("����");
	complements->push_back("����");
	complements->push_back("����");
	complements->push_back("�õ�");

	tense->push_back("��");
	tense->push_back("��");
	tense->push_back("��");
	tense->push_back("��");

	predecessors->push_back("��");
	predecessors->push_back("����");

};
Memory::~Memory() {
 likely->clear();
 unlikely->clear();
 complements->clear();
 tense->clear();
 names->clear();
 predecessors->clear();
 delete likely;
 delete unlikely;
 delete names;
}


