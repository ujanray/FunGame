#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    std::srand(std::time(0));
    int score = 0, answer2;
    string answer, answer1;
    std::string questionans[10][2] = { {"Q) Who is Scylla? \nA. Odysseus's wife            B. Banana  \nC. A monstrous being          D. Trump ", "c"}, {"Q) Who is Charybdis? \nA. Odysseus's mom       B. A witch \nC. A pig                D. A monstrous being","d"}, {"Q) Where do Scylla and Charybdis reside? \nA. In a cabin        B. In rocks on the outskirts of a strait  \nC. In a desk         D. In Sparta", "b"}, {"Q) What does Charybdis do? \nA. Uses a chainsaw to break ships        B. Swallows water, than spits it out (in large amounts) \nC. Takes out the trash              D. Asks riddles", "b"},  {"Q) What does Scylla do? \nA. Sings wonderfully             B. Blows hot air towards ships \nC. Use 6 heads to eat people     D. Fight with Charybdis", "c"}, {"Q) What monsters come before Scylla and Charybdis for Odysseus? \nA. The sirens       B. Centicores \nC. Titans           D. Manticores", "a"}, {"Q) What natural disaster is most similar to Charybdis? \nA. A tornado        B. A whirpool \nC. A hurricane      D. A tsunami", "b"}, {"Q) How many rows of teeth does Scylla have? \nA. 3         B. 2 \nC. 10        D. 1","a"}, {"Q) What does Circe advise Odysseus to do about Scylla and Charybdis? \nA. Sing to Scylla and Charybdis        B. Ask for divine help \nC. Sacrifice 6 people to Scylla        D. Sacrifice 6 people to Charybdis", "c"}, {"Q) What does Odysseus do when confronted by Scylla and Charybdis?\nA. Sings to them                 B. Asks for divine help \nC. Sacrifices 6 people to Scylla then runs     D. Sacrifices sushi to them", "c"} };
    std::string question[10] = {"Q) Who is Scylla? \nA. Odysseus's wife            B. Banana  \nC. A monstrous being          D. Trump ", "Q) Who is Charybdis? \nA. Odysseus's mom        B. A witch \nC. A pig              D. A monstrous being", "Q) Where do Scylla and Charybdis reside? \nA. In a cabin        B. In rocks on the outskirts of a strait  \nC. In a desk         D. In Sparta", "Q) What does Charybdis do? \nA. Uses a chainsaw to break ships       B. Swallows water, than spits it out (in large amounts) \nC. Takes out the trash                 D. Asks riddles", "Q) What does Scylla do? \nA. Sings wonderfully             B. Blows hot air towards ships \nC. Use 6 heads to eat people     D. Fight with Charybdis","Q) What monsters come before Scylla and Charybdis for Odysseus? \nA. The sirens       B. Centicores \nC. Titans           D. Manticores", "Q) What natural disaster is most similar to Charybdis? \nA. A tornado        B. A whirpool \nC. A hurricane      D. A tsunami", "Q) How many rows of teeth does Scylla have? \nA. 3         B. 2 \nC. 10        D. 1", "Q) What does Circe advise Odysseus to do about Scylla and Charybdis? \nA. Sing to Scylla and Charybdis        B. Ask for divine help \nC. Sacrifice 6 people to Scylla        D. Sacrifice 6 people to Charybdis", "Q) What does Odysseus do when confronted by Scylla and Charybdis?\nA. Sings to them                           B. Asks for divine help \nC. Sacrifices 6 people to Scylla then runs     D. Sacrifices sushi to them"};
    int question_index[] = {0,1,2,3,4,5,6,7,8,9};
    cout<< "Would you like to take the test? Answer 1 for yes, 2 for no." <<endl;
    cin>>answer2;
    if (answer2 == 1)
    {
        random_shuffle(question_index, question_index+10);
        cout<< "Let's begin!" <<endl;
        for (int i = 0; i < 10; i++ )
        {
            int qIndex = question_index[i];
            cout<< question[qIndex] <<endl;
            answer = questionans [qIndex][1];
            cin>>answer1;
            if (answer1 == answer)
            {
                score++;
                cout<< "Correct!" <<endl;
            }
            else
            {
                score = score + 0;
                cout<< "Incorrect. Keep trying!" <<endl;
            }
            cout << string(1, '\n' );
        }
        cout<<"Your score is "<< score << "/10" <<endl;
    }
    else if (answer2 == 2)
    {
        cout<< "Ok. have a good day!" <<endl;
    }
    else
    {
        cout<< "Ok. have a good day!" <<endl;
    }

}

