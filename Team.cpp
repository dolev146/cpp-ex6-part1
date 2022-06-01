class Team
{
private:
    /* data */
public:
    double skills;
    Team(/* args */);
    Team(double skills);
    ~Team();
};

Team::Team(/* args */)
{
    this->skills = 0;
}

Team::Team(double skills)
{
    this->skills = skills;
}

Team::~Team()
{
}
