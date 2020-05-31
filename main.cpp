#include <iostream>
using namespace std;

enum Race
{
    HUMAN,
    ELF,
    DEMON,
    COOK
};

enum Deals
{
    STRONGDRUGS,
    WEAKDRUGS,
    WEED
};

enum MeetingLoc
{
    DETROIT,
    WESTVIRGINIA,
    YOURHOME,
    YOURPLACE
};

class DrugDealer
{
    int age;
    int phoneNum;
    string secretPhrase;
    Race race;
    Deals deals;
    double successRate;
    long password;
    MeetingLoc meetingLoc;

public:
    DrugDealer(int _age, int _phoneNum, string _secretPhrase, Race _race, Deals _deals,
                double _successRate, long _password, MeetingLoc _meetingLoc)
    {
        age = _age;
        phoneNum = _phoneNum;
        secretPhrase = _secretPhrase;
        race = _race;
        deals = _deals;
        successRate = 0.2;
        password = _password;
        meetingLoc = _meetingLoc;
    }

    void PrintInfo()
    {
        cout << age << endl;
        cout << phoneNum << endl;
        cout << secretPhrase << endl;
        cout << race << endl;
        cout << deals << endl;
        cout << successRate << endl;
        cout << password << endl;
        cout << meetingLoc << endl;
    }
};

class DrugDealerBuilder
{
    int age;
    int phoneNum;
    string secretPhrase;
    Race race;
    Deals deals;
    double successRate = 0.2;
    long password;
    MeetingLoc meetingLoc;

public:
    void SetAge(int _age)
    {
        age = _age;
    }

    void SetPhoneNum(int _phoneNum)
    {
        phoneNum = _phoneNum;
    }

    void SetSecretPhrase(string _secretPhrase)
    {
        secretPhrase = _secretPhrase;
    }

    void SetRace(Race _race)
    {
        race = _race;
    }

    void SetDeals(Deals _deals)
    {
        deals = _deals;
    }

    void SetPassword(long _password)
    {
        password = _password;
    }

    void SetMeetingLoc(MeetingLoc _meetingLoc)
    {
        meetingLoc = _meetingLoc;
    }

    DrugDealer* Build()
    {
        return new DrugDealer(age, phoneNum, secretPhrase, race, deals,
                                successRate, password, meetingLoc);
    }
};

int main()
{
    DrugDealer *Jeff;
    DrugDealerBuilder build;

    build.SetAge(22);
    build.SetPhoneNum(893023123);
    build.SetSecretPhrase("Don't use drugs");
    build.SetRace(HUMAN);
    build.SetDeals(WEED);
    build.SetPassword(989248232);
    build.SetMeetingLoc(YOURPLACE);

    Jeff = build.Build();

    Jeff->PrintInfo();

    return 0;
}
