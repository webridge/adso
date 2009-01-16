#include "adsotime.h"
#include "unit.h"
#include "text.h"


Time::Time(Text *t, Text *a, Text *b): Unit(t, a, b) { myclass += ":Time";};
Time::Time(Text *t): Unit(t) { myclass += ":Time";};
Time::~Time() {}


int Time::combine(Text *t, int a, int b, int c) {


        // Times of the Day
        if (t->return_chinese(a,b-1) == "����") {
                add_post_english("in the morning");
                shift_pre_chinese(t, a, b-1, 0, this); b--;
                t->make_only(a,b,this);
        }

        if (t->return_chinese(a,b-1) == "����") {
                add_post_english("in the evening");
                shift_pre_chinese(t, a, b-1, 0, this); b--;
                t->make_only(a,b,this);
        }

        if (t->return_chinese(a,b-1) == "�糿") {
                add_post_english("in the early morning");
                shift_pre_chinese(t, a, b-1, 0, this); b--;
                t->make_only(a,b,this);
        }

        if (t->return_chinese(a,b-1) == "����") {
                add_post_english("in the afternoon");
                shift_pre_chinese(t, a, b-1, 0, this); b--;
                t->make_only(a,b,this);
        }

        if (t->return_chinese(a,b-1) == "�峿") {
                add_post_english("in the morning");
                shift_pre_chinese(t, a, b-1, 0, this); b--;
                t->make_only(a,b,this);
        }

        if (t->return_chinese(a,b-1) == "�ƻ�") {
                add_post_english("in the evening");
                shift_pre_chinese(t, a, b-1, 0, this); b--;
                t->make_only(a,b,this);
        }

        if (t->return_chinese(a,b-1) == "����") {
                add_post_english("in the evening");
                shift_pre_chinese(t, a, b-1, 0, this); b--;
                t->make_only(a,b,this);
        }

        if (t->return_chinese(a,b-1) == "����") {
                add_post_english("in the early morning"); 
                shift_pre_chinese(t, a, b-1, 0, this); b--;
                t->make_only(a,b,this);
        }


        return 1;
}




