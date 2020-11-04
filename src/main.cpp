#include <SDL.h>
#include <SDL_net.h>
#include <iostream>
int main(int argc,char* argv[]){
  SDL_Init(SDL_INIT_EVERYTHING);
  SDLNet_Init();
  IPaddress ip;
  //SDLNet_ResolveHost(&ip,"localhost:");
  SDLNet_Quit();
  std::cout << "Hello Network" << std::endl;
  return 0;
}
