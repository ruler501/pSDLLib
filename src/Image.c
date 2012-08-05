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

SDL_Color rgb16to24(Uint16 x)
{
   SDL_Color newcolor;
   newcolor.b= (x & 0x1F) * 8;
        newcolor.g = ((x >> 5) & 0x2F)* 4;
    newcolor.r = ((x >> 11) & 0x1F)* 8;
   return newcolor;
}

SDL_Surface* Load16Image(Uint16* image, int x, int y)
{
   SDL_Surface  *rimage, *tempsurf =  SDL_CreateRGBSurfaceFrom(image, x, y, 16, 2*x, PZM_RMASK16,PZM_GMASK16,PZM_BMASK16,0);
   rimage = SDL_DisplayFormat(tempsurf);
   SDL_FreeSurface(tempsurf);
   return rimage;
}

