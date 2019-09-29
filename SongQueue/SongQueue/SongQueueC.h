#pragma once
#include <iostream>
#include <vector>
#include <iterator>
struct SongType {
	std::string song_name;
};

//Circular array queue.
class SongQueueC {
	SongQueueC() {
		song_queue.resize(10);
		total_songs = 0;
		front = song_queue.begin();
		end = song_queue.begin();
	}

	void push(SongType& song) {
		int size = song_queue.size();
		if (end + 1 == front) {
			song_queue.resize(size * 2);
		}
		//Input song data
		end->song_name = song.song_name;

		//End song data
		if (end + 1 == song_queue.end()) {
			end = song_queue.begin();
		}
		else {
			end++;
		}
	}

	void pop() {
		if (front + 1 == song_queue.end()) {
			front = song_queue.begin();
		}
		else {
			front++;
		}
	}

	SongType top() {
		return song_queue[front - song_queue.begin()];
	}


private:
	std::vector<SongType> song_queue;
	std::vector<SongType>::iterator front;
	std::vector<SongType>::iterator end;
	int total_songs;
};