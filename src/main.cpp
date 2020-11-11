#include <SDL.h>
#include <SDL_net.h>
#include <iostream>
#include <vector>
#include <cstring>
int main(int argc,char* argv[]){
  SDL_Init(SDL_INIT_EVERYTHING);
  SDLNet_Init();

  IPaddress ip;
  SDLNet_ResolveHost(&ip,NULL,1234);

  TCPsocket server = SDLNet_TCP_Open(&ip);
  TCPsocket client;

  SDLNet_Quit();
  SDL_Quit();
}
