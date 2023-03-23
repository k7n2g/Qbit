// Copyright (c) 2018, The TurtleCoin Developers
// Copyright (c) 2020, Dave Brennan,  k7n2g, Qbit Currency
//
// Please see the included LICENSE file for more information

#pragma once

#include <string>




const std::string nonWindowsAsciiArt =
    "\n                                                                                                      \n"
    " ░██████╗░██████╗░██╗████████╗░░░░░░███╗░░██╗███████╗████████╗░██╗░░░░░░░██╗░█████╗░██████╗░██╗░░██╗\n"
    " ██╔═══██╗██╔══██╗██║╚══██╔══╝░░░░░░████╗░██║██╔════╝╚══██╔══╝░██║░░██╗░░██║██╔══██╗██╔══██╗██║░██╔╝\n"
    " ██║██╗██║██████╦╝██║░░░██║░░░█████╗██╔██╗██║█████╗░░░░░██║░░░░╚██╗████╗██╔╝██║░░██║██████╔╝█████═╝░\n"
    " ╚██████╔╝██╔══██╗██║░░░██║░░░╚════╝██║╚████║██╔══╝░░░░░██║░░░░░████╔═████║░██║░░██║██╔══██╗██╔═██╗░\n"
    " ░╚═██╔═╝░██████╦╝██║░░░██║░░░░░░░░░██║░╚███║███████╗░░░██║░░░░░╚██╔╝░╚██╔╝░╚█████╔╝██║░░██║██║░╚██╗\n"
    " ░░░╚═╝░░░╚═════╝░╚═╝░░░╚═╝░░░░░░░░░╚═╝░░╚══╝╚══════╝░░░╚═╝░░░░░░╚═╝░░░╚═╝░░░╚════╝░╚═╝░░╚═╝╚═╝░░╚═╝\n";  


/* Windows has some characters it won't display in a terminal. If your ascii
   art works fine on Windows and Linux terminals, just replace 'asciiArt' with
   the art itself, and remove these two #ifdefs and above ascii arts */
#ifdef _WIN32



#else
const std::string asciiArt = nonWindowsAsciiArt;
#endif
