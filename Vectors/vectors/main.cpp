#include <iostream>
#include <vector>

using namespace std;

int main()
{
//    vector <char> vowels;       //empty
//    vector <char> vowels(5);     // 5 elements initialized to zero
    vector <char> vowels {'a', 'e', 'i', 'o', 'u'};

    cout << vowels[0] << endl;
    cout << vowels[4] << endl;

//    vector <int> test_score(3);  //3 elements all initialized to zero
//    vector <int> test_score(3 , 100);  //3 elements all initialized to 100

    vector <int> test_score{100, 98, 89};  //3 elements all initialized to 100

    cout << "\nTest case using array syntax:" << endl;
    cout << test_score[0] << endl;
    cout << test_score[1] << endl;
    cout << test_score[2] << endl;

    cout << "\nTest case using vector syntax:" << endl;
    cout << test_score.at(0) << endl;
    cout << test_score.at(1) << endl;
    cout << test_score.at(2) << endl;
    cout << "\nThere are " << test_score.size() << " scores in vector" << endl;

    cout << "\nEnter 3 test scores : ";
    cin >> test_score.at(0);
    cin >> test_score.at(1);
    cin >> test_score.at(2);

    cout << "\nUpdated vector" << endl;
    cout << test_score.at(0) << endl;
    cout << test_score.at(1) << endl;
    cout << test_score.at(2) << endl;

    cout << "\nEnter a test score to add to the vector: ";

    int score_to_add {0};
    cin >> score_to_add;

    test_score.push_back(score_to_add);

    cout << "\nEnter one more test score to add to vector: ";
    cin >> score_to_add;

    test_score.push_back(score_to_add);

    cout << "\nNow test score are : " << endl;
    cout << test_score.at(0) << endl;
    cout << test_score.at(1) << endl;
    cout << test_score.at(2) << endl;
    cout << test_score.at(3) << endl;
    cout << test_score.at(4) << endl;

    cout << "\nThere are now " << test_score.size() << " scores in vector" << endl;

//    cout << "\nThis shold cause an exception!! " << test_score.at(10) << endl;

    //example of 2D vector
    vector <vector<int>> movie_ratings
    {
        {1,2,3,4},
        {1,2,4,4},
        {1,3,4,5}
    };

    cout << "\nHere are movie rating for Reviewer #1 using array syntax : " << endl;
    cout << movie_ratings[0][0] << endl;
    cout << movie_ratings[0][1] << endl;
    cout << movie_ratings[0][2] << endl;
    cout << movie_ratings[0][3] << endl;

    cout << "\nHere are movie rating for Reviewer #1 using vector syntax : " << endl;
    cout << movie_ratings.at(0).at(0) << endl;
    cout << movie_ratings.at(0).at(1) << endl;
    cout << movie_ratings.at(0).at(2) << endl;
    cout << movie_ratings.at(0).at(3) << endl;

    return 0;
}
