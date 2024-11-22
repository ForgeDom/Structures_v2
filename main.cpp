#include <iostream>
#include <vector>
#include <string>
#include <limits>

using namespace std;

struct VideoStore {
    string title;
    string director;
    string genre;
    int rating;
    double price;
};

void addVideo(vector<VideoStore>& store);
void showAllVideos(const vector<VideoStore>& store);
void searchByTitle(const vector<VideoStore>& store, const string& title);
void searchByGenre(const vector<VideoStore>& store, const string& genre);
void searchByDirector(const vector<VideoStore>& store, const string& director);
void findMostPopularInGenre(const vector<VideoStore>& store, const string& genre);

void addVideo(vector<VideoStore>& store) {
    VideoStore video;
    cout << "Enter movie title: ";
    getline(cin, video.title);
    cout << "Enter director name: ";
    getline(cin, video.director);
    cout << "Enter genre: ";
    getline(cin, video.genre);
    cout << "Enter popularity rating (1-10): ";
    cin >> video.rating;
    cout << "Enter disc price: ";
    cin >> video.price;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    store.push_back(video);
    cout << "Movie added!\n";
}

void showAllVideos(const vector<VideoStore>& store) {
    if (store.empty()) {
        cout << "The store is empty.\n";
        return;
    }
    for (size_t i = 0; i < store.size(); ++i) {
        cout << "\nMovie #" << i + 1 << ":\n";
        cout << "Title: " << store[i].title << "\n";
        cout << "Director: " << store[i].director << "\n";
        cout << "Genre: " << store[i].genre << "\n";
        cout << "Popularity Rating: " << store[i].rating << "\n";
        cout << "Price: $" << store[i].price << "\n";
    }
}

void searchByTitle(const vector<VideoStore>& store, const string& title) {
    bool found = false;
    for (const auto& video : store) {
        if (video.title == title) {
            cout << "\nMovie found:\n";
            cout << "Title: " << video.title << "\n";
            cout << "Director: " << video.director << "\n";
            cout << "Genre: " << video.genre << "\n";
            cout << "Popularity Rating: " << video.rating << "\n";
            cout << "Price: $" << video.price << "\n";
            found = true;
            break;
        }
    }
    if (!found) cout << "No movie found with title \"" << title << "\".\n";
}

void searchByGenre(const vector<VideoStore>& store, const string& genre) {
    bool found = false;
    for (const auto& video : store) {
        if (video.genre == genre) {
            cout << "\nTitle: " << video.title << " | Director: " << video.director << " | Rating: " << video.rating << "\n";
            found = true;
        }
    }
    if (!found) cout << "No movies found in genre \"" << genre << "\".\n";
}

void searchByDirector(const vector<VideoStore>& store, const string& director) {
    bool found = false;
    for (const auto& video : store) {
        if (video.director == director) {
            cout << "\nTitle: " << video.title << " | Genre: " << video.genre << " | Rating: " << video.rating << "\n";
            found = true;
        }
    }
    if (!found) cout << "No movies found by director \"" << director << "\".\n";
}

void findMostPopularInGenre(const vector<VideoStore>& store, const string& genre) {
    int maxRating = -1;
    VideoStore mostPopular;
    bool found = false;
    for (const auto& video : store) {
        if (video.genre == genre && video.rating > maxRating) {
            maxRating = video.rating;
            mostPopular = video;
            found = true;
        }
    }
    if (found) {
        cout << "\nMost popular movie in genre \"" << genre << "\":\n";
        cout << "Title: " << mostPopular.title << "\n";
        cout << "Director: " << mostPopular.director << "\n";
        cout << "Popularity Rating: " << mostPopular.rating << "\n";
        cout << "Price: $" << mostPopular.price << "\n";
    }
    else {
        cout << "No movies found in genre \"" << genre << "\".\n";
    }
}

int main() {
    vector<VideoStore> store;
    int choice;
    string input;

    do {
        cout << "\n=== VIDEO STORE ===\n";
        cout << "1. Add a record\n";
        cout << "2. Show all records\n";
        cout << "3. Search by title\n";
        cout << "4. Search by genre\n";
        cout << "5. Search by director\n";
        cout << "6. Most popular movie in genre\n";
        cout << "0. Exit\n";
        cout << "Your choice: ";
        cin >> choice;

        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        switch (choice) {
        case 1:
            addVideo(store);
            break;
        case 2:
            showAllVideos(store);
            break;
        case 3:
            cout << "Enter movie title: ";
            getline(cin, input);
            searchByTitle(store, input);
            break;
        case 4:
            cout << "Enter genre: ";
            getline(cin, input);
            searchByGenre(store, input);
            break;
        case 5:
            cout << "Enter director name: ";
            getline(cin, input);
            searchByDirector(store, input);
            break;
        case 6:
            cout << "Enter genre: ";
            getline(cin, input);
            findMostPopularInGenre(store, input);
            break;
        case 0:
            cout << "Goodbye!\n";
            break;
        default:
            cout << "Invalid choice. Try again.\n";
            break;
        }
    } while (choice != 0);

    return 0;
}
