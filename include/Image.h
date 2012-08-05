/********************************************************************************
 *  Copyright 2011-2012 ruler501                                                *
 *                                                                              *
 *  This file is part of The pSDL Helper Library                                *
 *                                                                              *
 *  The pSDL Helper Library is free software: you can redistribute it and/or    *
 *  modify it under the terms of the GNU General Public License as              *
 *  published by the Free Software Foundation, either version 3 of              *
 *  the License, or (at your option) any later version.                         *
 *                                                                              *
 *  The pSDL Helper Library is distributed in the hope that it will be useful,  *
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of              *
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the               *
 *  GNU General Public License for more details.                                *
 *                                                                              *
 *  You should have received a copy of the GNU General Public License           *
 *  along with The pSDL Helper Library.  Check the LICENSE file in the project  *
 *  root. If not, see <http://www.gnu.org/licenses/>.                           *
 *******************************************************************************/

#include <SDL.h>

//Returns a SDL_Surface with the image created from the image data 
SDL_Surface* Load16Image(Uint16* image, int x, int y);
//returns an SDL_Color with the 24 bit version of the input color
SDL_Color rgb16to24(Uint16 x);
