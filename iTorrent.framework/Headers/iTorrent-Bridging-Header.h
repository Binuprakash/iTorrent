//
//  Use this file to import your target's public headers that you would like to expose to Swift.
//
#include <stdio.h>
#include <stdlib.h>
#include "result_struct.h"
#include "file_struct.h"

//TORRENT
int init_engine(const char* client_name, const char* download_path, const char* config_path);
Result getTorrentInfo();
char* add_torrent(const char* torrent_path);
void add_torrent_with_states(const char* torrent_path, int* states);
char* add_magnet(const char* magnet_link);
void remove_torrent(const char* torrent_hash, int remove_files);
void save_magnet_to_file(const char* hash);
char* get_torrent_file_hash(const char* torrent_path);
char* get_magnet_hash(const char* magnet_link);
char* get_torrent_magnet_link(const char* torrent_hash);
Files get_files_of_torrent_by_path(const char* torrent_path);
Files get_files_of_torrent_by_hash(const char* hash);
void set_torrent_files_priority(const char* torrent_hash, int* states);
void set_torrent_file_priority(const char* torrent_hash, int file_number, int state);
void resume_to_app();
void save_fast_resume();
void stop_torrent(const char* torrent_hash);
void start_torrent(const char* torrent_hash);
void rehash_torrent(const char* torrent_hash);
void scrape_tracker(const char* torrent_hash);
Trackers get_trackers_by_hash(const char* torrent_hash);
int add_tracker_to_torrent(const char* torrent_hash, const char* tracker_url);
int remove_tracker_from_torrent(const char* torrent_hash, char *const tracker_url[], int count);
void set_download_limit(int limit_in_bytes);
void set_upload_limit(int limit_in_bytes);

void set_torrent_files_sequental(const char* torrent_hash, int sequental);
int get_torrent_files_sequental(const char* torrent_hash);

//memory management
void set_storage_preallocation(int preallocate);
int get_storage_preallocation();
