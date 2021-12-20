#ifndef EX03_LIBRARY_H_
#define EX03_LIBRARY_H_

#include <string>
#include <vector>
#include <map>
using namespace std;

struct Info {
    string url;
    unsigned int score;
};

class SongDatabase {
private:
    vector<string> songs;
    map<string,Info> songsInfo;
public:
    SongDatabase();
    void display();
    bool addSong(string title, string url, unsigned int score);
    void searchSongs(string howGood);
};

#endif /* EX03_LIBRARY_H_ */
