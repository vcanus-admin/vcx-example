#include <iostream>
#include <iostream>
#include <string.h>
#include <thread>
#include <chrono>
#include <string>
#include "./src/Example.h"

using namespace std;

int main(int argc, char **argv) {
    cout << "Hellow World" << endl;

//    BoostLogger &logger = BoostLogger::get_instance();
//    logger.set_filter(boost::log::trivial::info);
//    BOOST_LOG_TRIVIAL(info) << "BoostLogger is initialized";

    int time_interval_sec = 0;
    int time_interval_msec = 500;
    int time_interval_threshold_for_log = 1000;
    int sched_priority = 90;
    if(argc == 0) {
//        BOOST_LOG_TRIVIAL(info) << "no argv";
    } else {
//        BOOST_LOG_TRIVIAL(info) << "argc: " << argc;
        for(int i=1; i<argc; i++) {
//            BOOST_LOG_TRIVIAL(info) << "argv[" << i << "] is " << argv[i];
            switch(i) {
                case 1:
                    time_interval_sec = std::atoi(argv[i]);
                    break;
                case 2:
                    time_interval_msec = std::atoi(argv[i]);
                    break;
                case 3:
                    time_interval_threshold_for_log = std::atoi(argv[i]);
                    break;
                case 4:
                    sched_priority = std::atoi(argv[i]);
                    break;
                default:
//                    BOOST_LOG_TRIVIAL(error) << "unsupported argument";
                    return -1;
                    break;
            }
        }
    }

//    string str_filename;
//    if(argc == 0) {
//        BOOST_LOG_TRIVIAL(info) << "no argv";
//    } else {
//        BOOST_LOG_TRIVIAL(info) << "argc: " << argc;
//        for(int i=1; i<argc; i++) {
//            BOOST_LOG_TRIVIAL(info) << "argv[" << i << "] is " << argv[i];
//            switch(i) {
//                case 1: {
//                    string str = argv[i];
//                    stringstream str_stream(str);
//                    str_stream >> str_filename;
//                    break;
//                }
//                default:
//                    BOOST_LOG_TRIVIAL(error) << "unsupported argument";
//                    return -1;
//                    break;
//            }
//        }
//    }
//
//    std::ifstream fileIn;
//    fileIn.open(str_filename.c_str());
//    if(!fileIn.is_open()) {
//        BOOST_LOG_TRIVIAL(error) << "file not found";
//        return -1;
//    }
//    std::stringstream buffer;
//    buffer << fileIn.rdbuf();
//    ConfigMercury &config = ConfigMercury::get_instance();
//    if(!config.readFromJson(buffer.str())) {
//        BOOST_LOG_TRIVIAL(error) << "fail to read .json config";
//        return -1;
//    }

    return 0;
}

