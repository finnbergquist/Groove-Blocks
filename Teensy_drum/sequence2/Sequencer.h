#ifndef Sequencer_h
#define Sequencer_h

#include "Arduino.h"
#include "Drum_channel.h"
#include <Audio.h>

class Sequencer {
    private: 
        //Timing 
        int total_time;       
        int init_time;
        int elapsed_time;      
        int duration; 
        
        //BPM, steps
        int BPM;
        int Step; 
        int max_steps;       
        int step_interval;

        //Channels
        int num_channels;
        Drum_channel channels [4];   
        int curr_channel;
        
    public: 
        Sequencer(int BPM, int max_steps, int note_duration, int num_channels);
        int Check();
        int getBPM();
        int getChannels();
        int getStep();       
        void start_clock();
        void pause_clock();
        void stop_clock();
        bool change();
        bool inst_On(int inst);
        const char* getSound(int inst);
        void add_instrument(Drum_channel new_channel);
        Drum_channel get_instrument(int index);
        

};
#endif 
