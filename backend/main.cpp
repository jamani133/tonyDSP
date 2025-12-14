#include <iostream>

using namespace std;

int main(){
    //read config

    bool DSP_ACTIVE = true;
    while(DSP_ACTIVE){
        process_layers();
    }
    clean();
}

void process_layers(){
    uint8_t layer = 0;
    while(layer < 256){
        process_layer(layer);
        layer += 1;
    }
}

void process_layer(uint8_t layer){
    uint8_t processors = 0;// GET NUM FROM CONFIOG@LAYER
    uint8_t processor = 0;
    while(processor < processors){
        pipeline[layer][processor]->main();
    }
}



void clean(){

}


class Processor {
public:
    Processor(){
        
    }
    
    virtual void main() const = 0;
}