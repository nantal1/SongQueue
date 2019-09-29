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
		song_queue.reserve(10);
		total_songs = 0;
		front = song_queue.begin();
		end = song_queue.begin();
	}

	void push(SongType& song) {
		int size = song_queue.size();
		if (total_songs < size) {

		}
	}


private:
	std::vector<SongType> song_queue;
	std::vector<SongType>::iterator front;
	std::vector<SongType>::iterator end;
	int total_songs;
};