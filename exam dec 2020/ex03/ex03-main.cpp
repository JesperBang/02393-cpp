#include <iostream>
#include "ex03-library.h"
using namespace std;

int main() {
    SongDatabase db = SongDatabase();

    db.addSong("Ob-La-Di, Ob-La-Da", "https://youtu.be/_J9NpHKrKMw", 4);
    db.addSong("I am the Walrus", "https://youtu.be/t1Jm5epJr10", 8);
    db.addSong("Leave My Kitten Alone", "https://youtu.be/t1Jm5epJr10", 8);

    cout << "The database contains the songs:" << endl;
    db.display();

    cout << endl << "Abysmal songs:" << endl;
    db.searchSongs("abysmal");

    cout << endl << "Lousy songs:" << endl;
    db.searchSongs("lousy");

    cout << endl << "Meh songs:" << endl;
    db.searchSongs("meh");

    cout << endl << "Cool songs:" << endl;
    db.searchSongs("cool");

    cout << endl << "OMG songs:" << endl;
    db.searchSongs("OMG");

    return 0;
}
