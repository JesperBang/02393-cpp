#include <iostream>
#include "ex03-library.h"
#include <algorithm>
using namespace std;

// Do not modify
SongDatabase::SongDatabase() {
    this->songs.push_back("Penny Lane");
    this->songsInfo["Penny Lane"] = {"https://youtu.be/S-rB0pHI9fU", 8};

    this->songs.push_back("Trololo");
    this->songsInfo["Trololo"] = {"https://youtu.be/oavMtUWDBTM", 10};

    this->songs.push_back("Ob-La-Di, Ob-La-Da");
    this->songsInfo["Ob-La-Di, Ob-La-Da"] = {"https://youtu.be/_J9NpHKrKMw", 2};

    this->songs.push_back("Don't Worry, Be Happy");
    this->songsInfo["Don't Worry, Be Happy"] = {"https://youtu.be/d-diB65scQU", 3};

    this->songs.push_back("Leave My Kitten Alone");
    this->songsInfo["Leave My Kitten Alone"] = {"https://youtu.be/7BKsy9-Bvok", 5};
}

// Task 3(a).  Implement this method
void SongDatabase::display() {
    for (string s: songs){
        cout << "title=" << s << "; url=" << songsInfo[s].url << "; score=" << songsInfo[s].score << endl;
    }
}

// Task 3(b).  Implement this method
bool SongDatabase::addSong(string title, string url, unsigned int score) {
    if (count(songs.begin(), songs.end(), title))
        return false;
    
    if (songsInfo[title].score > score)
        return false;

    songs.push_back(title);
    songsInfo[title] = {url, score};
    return true;
}

// Task 3(c?).  Implement this method
void SongDatabase::searchSongs(string howGood) {
    if (howGood == "abysmal")
        for (string s: songs){
            if (0 <= songsInfo[s].score && songsInfo[s].score < 3)
                cout << "title=" << s << "; url=" << songsInfo[s].url << "; score=" << songsInfo[s].score << endl;
    } else if (howGood == "lousy")
        for (string s: songs){
            if (3 <= songsInfo[s].score && songsInfo[s].score < 5)
                cout << "title=" << s << "; url=" << songsInfo[s].url << "; score=" << songsInfo[s].score << endl;
    } else if (howGood == "meh")
        for (string s: songs){
            if (5 <= songsInfo[s].score && songsInfo[s].score < 7)
                cout << "title=" << s << "; url=" << songsInfo[s].url << "; score=" << songsInfo[s].score << endl;
    } else if (howGood == "cool")
        for (string s: songs){
            if (7 <= songsInfo[s].score && songsInfo[s].score < 9)
                cout << "title=" << s << "; url=" << songsInfo[s].url << "; score=" << songsInfo[s].score << endl;
    } else if (howGood == "OMG")
        for (string s: songs){
            if (songsInfo[s].score >= 9)
                cout << "title=" << s << "; url=" << songsInfo[s].url << "; score=" << songsInfo[s].score << endl;
    }
}
