/*  
 *  Copyright (c) 2013, Adrian M. Partl <apartl@aip.de>, 
 *                      eScience team AIP Potsdam
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  See the NOTICE file distributed with this work for additional
 *  information regarding copyright ownership. You may obtain a copy
 *  of the License at
 *
 *  http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 */


/*! \file N10.h
 \brief Hilbert generation genes for N=10 (10 dimensions)
 
 Semi-Automatically generated by hilbertKey.py: (usage python hilbertKey.py dim)
 for any other dimension configuration
 */

#include <stdint.h>

#ifndef __CLASS_N10__
#define __CLASS_N10__

#define HILB_MAX_DIM 10

uint32_t C1[] = {0,1};
uint32_t revC1[] = {0,1};
uint32_t H1[][2] = {{0,0},{0,0}};
uint32_t C2[] = {0,1,3,2};
uint32_t revC2[] = {0,1,3,2};
uint32_t H2[][2] = {{3,0},{0,0},{0,0},{3,3}};
uint32_t C3[] = {0,1,3,2,6,7,5,4};
uint32_t revC3[] = {0,1,3,2,7,6,4,5};
uint32_t H3[][2] = {{5,0},{6,0},{0,0},{6,5},{6,3},{0,0},{6,6},{5,5}};
uint32_t C4[] = {0,1,3,2,6,7,5,4,12,13,15,14,10,11,9,8};
uint32_t revC4[] = {0,1,3,2,7,6,4,5,15,14,12,13,8,9,11,10};
uint32_t H4[][2] = {{9,0},{10,0},{0,0},{12,9},{0,9},{0,0},{0,10},{0,3},{0,3},{0,10},{0,0},{0,9},{12,5},{0,0},{10,10},{9,9}};
uint32_t C5[] = {0,1,3,2,6,7,5,4,12,13,15,14,10,11,9,8,24,25,27,26,30,31,29,28,20,21,23,22,18,19,17,16};
uint32_t revC5[] = {0,1,3,2,7,6,4,5,15,14,12,13,8,9,11,10,31,30,28,29,24,25,27,26,16,17,19,18,23,22,20,21};
uint32_t H5[][2] = {{17,0},{18,0},{0,0},{20,17},{0,17},{0,0},{0,18},{24,3},{0,3},{0,18},{0,0},{0,17},{0,5},{0,20},{0,6},{24,23},{24,15},{0,6},{0,20},{0,5},{0,17},{0,0},{0,18},{0,3},{24,27},{0,18},{0,0},{0,17},{20,5},{0,0},{18,18},{17,17}};
uint32_t C6[] = {0,1,3,2,6,7,5,4,12,13,15,14,10,11,9,8,24,25,27,26,30,31,29,28,20,21,23,22,18,19,17,16,48,49,51,50,54,55,53,52,60,61,63,62,58,59,57,56,40,41,43,42,46,47,45,44,36,37,39,38,34,35,33,32};
uint32_t revC6[] = {0,1,3,2,7,6,4,5,15,14,12,13,8,9,11,10,31,30,28,29,24,25,27,26,16,17,19,18,23,22,20,21,63,62,60,61,56,57,59,58,48,49,51,50,55,54,52,53,32,33,35,34,39,38,36,37,47,46,44,45,40,41,43,42};
uint32_t H6[][2] = {{33,0},{34,0},{0,0},{36,33},{0,33},{0,0},{0,34},{40,3},{0,3},{0,34},{0,0},{0,33},{0,5},{0,36},{0,6},{48,39},{0,39},{0,6},{0,36},{0,5},{0,33},{0,0},{0,34},{0,3},{0,43},{0,10},{0,40},{0,9},{0,45},{0,12},{0,46},{0,15},{0,15},{0,46},{0,12},{0,45},{0,9},{0,40},{0,10},{0,43},{0,3},{0,34},{0,0},{0,33},{0,5},{0,36},{0,6},{0,39},{48,23},{0,6},{0,36},{0,5},{0,33},{0,0},{0,34},{0,3},{40,43},{0,34},{0,0},{0,33},{36,5},{0,0},{34,34},{33,33}};
uint32_t C7[] = {0,1,3,2,6,7,5,4,12,13,15,14,10,11,9,8,24,25,27,26,30,31,29,28,20,21,23,22,18,19,17,16,48,49,51,50,54,55,53,52,60,61,63,62,58,59,57,56,40,41,43,42,46,47,45,44,36,37,39,38,34,35,33,32,96,97,99,98,102,103,101,100,108,109,111,110,106,107,105,104,120,121,123,122,126,127,125,124,116,117,119,118,114,115,113,112,80,81,83,82,86,87,85,84,92,93,95,94,90,91,89,88,72,73,75,74,78,79,77,76,68,69,71,70,66,67,65,64};
uint32_t revC7[] = {0,1,3,2,7,6,4,5,15,14,12,13,8,9,11,10,31,30,28,29,24,25,27,26,16,17,19,18,23,22,20,21,63,62,60,61,56,57,59,58,48,49,51,50,55,54,52,53,32,33,35,34,39,38,36,37,47,46,44,45,40,41,43,42,127,126,124,125,120,121,123,122,112,113,115,114,119,118,116,117,96,97,99,98,103,102,100,101,111,110,108,109,104,105,107,106,64,65,67,66,71,70,68,69,79,78,76,77,72,73,75,74,95,94,92,93,88,89,91,90,80,81,83,82,87,86,84,85};
uint32_t H7[][2] = {{65,0},{66,0},{0,0},{68,65},{0,65},{0,0},{0,66},{72,3},{0,3},{0,66},{0,0},{0,65},{0,5},{0,68},{0,6},{80,71},{0,71},{0,6},{0,68},{0,5},{0,65},{0,0},{0,66},{0,3},{0,75},{0,10},{0,72},{0,9},{0,77},{0,12},{0,78},{96,15},{0,15},{0,78},{0,12},{0,77},{0,9},{0,72},{0,10},{0,75},{0,3},{0,66},{0,0},{0,65},{0,5},{0,68},{0,6},{0,71},{0,23},{0,86},{0,20},{0,85},{0,17},{0,80},{0,18},{0,83},{0,27},{0,90},{0,24},{0,89},{0,29},{0,92},{0,30},{96,95},{96,63},{0,30},{0,92},{0,29},{0,89},{0,24},{0,90},{0,27},{0,83},{0,18},{0,80},{0,17},{0,85},{0,20},{0,86},{0,23},{0,71},{0,6},{0,68},{0,5},{0,65},{0,0},{0,66},{0,3},{0,75},{0,10},{0,72},{0,9},{0,77},{0,12},{0,78},{0,15},{96,111},{0,78},{0,12},{0,77},{0,9},{0,72},{0,10},{0,75},{0,3},{0,66},{0,0},{0,65},{0,5},{0,68},{0,6},{0,71},{80,23},{0,6},{0,68},{0,5},{0,65},{0,0},{0,66},{0,3},{72,75},{0,66},{0,0},{0,65},{68,5},{0,0},{66,66},{65,65}};
uint32_t C8[] = {0,1,3,2,6,7,5,4,12,13,15,14,10,11,9,8,24,25,27,26,30,31,29,28,20,21,23,22,18,19,17,16,48,49,51,50,54,55,53,52,60,61,63,62,58,59,57,56,40,41,43,42,46,47,45,44,36,37,39,38,34,35,33,32,96,97,99,98,102,103,101,100,108,109,111,110,106,107,105,104,120,121,123,122,126,127,125,124,116,117,119,118,114,115,113,112,80,81,83,82,86,87,85,84,92,93,95,94,90,91,89,88,72,73,75,74,78,79,77,76,68,69,71,70,66,67,65,64,192,193,195,194,198,199,197,196,204,205,207,206,202,203,201,200,216,217,219,218,222,223,221,220,212,213,215,214,210,211,209,208,240,241,243,242,246,247,245,244,252,253,255,254,250,251,249,248,232,233,235,234,238,239,237,236,228,229,231,230,226,227,225,224,160,161,163,162,166,167,165,164,172,173,175,174,170,171,169,168,184,185,187,186,190,191,189,188,180,181,183,182,178,179,177,176,144,145,147,146,150,151,149,148,156,157,159,158,154,155,153,152,136,137,139,138,142,143,141,140,132,133,135,134,130,131,129,128};
uint32_t revC8[] = {0,1,3,2,7,6,4,5,15,14,12,13,8,9,11,10,31,30,28,29,24,25,27,26,16,17,19,18,23,22,20,21,63,62,60,61,56,57,59,58,48,49,51,50,55,54,52,53,32,33,35,34,39,38,36,37,47,46,44,45,40,41,43,42,127,126,124,125,120,121,123,122,112,113,115,114,119,118,116,117,96,97,99,98,103,102,100,101,111,110,108,109,104,105,107,106,64,65,67,66,71,70,68,69,79,78,76,77,72,73,75,74,95,94,92,93,88,89,91,90,80,81,83,82,87,86,84,85,255,254,252,253,248,249,251,250,240,241,243,242,247,246,244,245,224,225,227,226,231,230,228,229,239,238,236,237,232,233,235,234,192,193,195,194,199,198,196,197,207,206,204,205,200,201,203,202,223,222,220,221,216,217,219,218,208,209,211,210,215,214,212,213,128,129,131,130,135,134,132,133,143,142,140,141,136,137,139,138,159,158,156,157,152,153,155,154,144,145,147,146,151,150,148,149,191,190,188,189,184,185,187,186,176,177,179,178,183,182,180,181,160,161,163,162,167,166,164,165,175,174,172,173,168,169,171,170};
uint32_t H8[][2] = {{129,0},{130,0},{0,0},{132,129},{0,129},{0,0},{0,130},{136,3},{0,3},{0,130},{0,0},{0,129},{0,5},{0,132},{0,6},{144,135},{0,135},{0,6},{0,132},{0,5},{0,129},{0,0},{0,130},{0,3},{0,139},{0,10},{0,136},{0,9},{0,141},{0,12},{0,142},{160,15},{0,15},{0,142},{0,12},{0,141},{0,9},{0,136},{0,10},{0,139},{0,3},{0,130},{0,0},{0,129},{0,5},{0,132},{0,6},{0,135},{0,23},{0,150},{0,20},{0,149},{0,17},{0,144},{0,18},{0,147},{0,27},{0,154},{0,24},{0,153},{0,29},{0,156},{0,30},{192,159},{0,159},{0,30},{0,156},{0,29},{0,153},{0,24},{0,154},{0,27},{0,147},{0,18},{0,144},{0,17},{0,149},{0,20},{0,150},{0,23},{0,135},{0,6},{0,132},{0,5},{0,129},{0,0},{0,130},{0,3},{0,139},{0,10},{0,136},{0,9},{0,141},{0,12},{0,142},{0,15},{0,175},{0,46},{0,172},{0,45},{0,169},{0,40},{0,170},{0,43},{0,163},{0,34},{0,160},{0,33},{0,165},{0,36},{0,166},{0,39},{0,183},{0,54},{0,180},{0,53},{0,177},{0,48},{0,178},{0,51},{0,187},{0,58},{0,184},{0,57},{0,189},{0,60},{0,190},{0,63},{0,63},{0,190},{0,60},{0,189},{0,57},{0,184},{0,58},{0,187},{0,51},{0,178},{0,48},{0,177},{0,53},{0,180},{0,54},{0,183},{0,39},{0,166},{0,36},{0,165},{0,33},{0,160},{0,34},{0,163},{0,43},{0,170},{0,40},{0,169},{0,45},{0,172},{0,46},{0,175},{0,15},{0,142},{0,12},{0,141},{0,9},{0,136},{0,10},{0,139},{0,3},{0,130},{0,0},{0,129},{0,5},{0,132},{0,6},{0,135},{0,23},{0,150},{0,20},{0,149},{0,17},{0,144},{0,18},{0,147},{0,27},{0,154},{0,24},{0,153},{0,29},{0,156},{0,30},{0,159},{192,95},{0,30},{0,156},{0,29},{0,153},{0,24},{0,154},{0,27},{0,147},{0,18},{0,144},{0,17},{0,149},{0,20},{0,150},{0,23},{0,135},{0,6},{0,132},{0,5},{0,129},{0,0},{0,130},{0,3},{0,139},{0,10},{0,136},{0,9},{0,141},{0,12},{0,142},{0,15},{160,175},{0,142},{0,12},{0,141},{0,9},{0,136},{0,10},{0,139},{0,3},{0,130},{0,0},{0,129},{0,5},{0,132},{0,6},{0,135},{144,23},{0,6},{0,132},{0,5},{0,129},{0,0},{0,130},{0,3},{136,139},{0,130},{0,0},{0,129},{132,5},{0,0},{130,130},{129,129}};
uint32_t C9[] = {0,1,3,2,6,7,5,4,12,13,15,14,10,11,9,8,24,25,27,26,30,31,29,28,20,21,23,22,18,19,17,16,48,49,51,50,54,55,53,52,60,61,63,62,58,59,57,56,40,41,43,42,46,47,45,44,36,37,39,38,34,35,33,32,96,97,99,98,102,103,101,100,108,109,111,110,106,107,105,104,120,121,123,122,126,127,125,124,116,117,119,118,114,115,113,112,80,81,83,82,86,87,85,84,92,93,95,94,90,91,89,88,72,73,75,74,78,79,77,76,68,69,71,70,66,67,65,64,192,193,195,194,198,199,197,196,204,205,207,206,202,203,201,200,216,217,219,218,222,223,221,220,212,213,215,214,210,211,209,208,240,241,243,242,246,247,245,244,252,253,255,254,250,251,249,248,232,233,235,234,238,239,237,236,228,229,231,230,226,227,225,224,160,161,163,162,166,167,165,164,172,173,175,174,170,171,169,168,184,185,187,186,190,191,189,188,180,181,183,182,178,179,177,176,144,145,147,146,150,151,149,148,156,157,159,158,154,155,153,152,136,137,139,138,142,143,141,140,132,133,135,134,130,131,129,128,384,385,387,386,390,391,389,388,396,397,399,398,394,395,393,392,408,409,411,410,414,415,413,412,404,405,407,406,402,403,401,400,432,433,435,434,438,439,437,436,444,445,447,446,442,443,441,440,424,425,427,426,430,431,429,428,420,421,423,422,418,419,417,416,480,481,483,482,486,487,485,484,492,493,495,494,490,491,489,488,504,505,507,506,510,511,509,508,500,501,503,502,498,499,497,496,464,465,467,466,470,471,469,468,476,477,479,478,474,475,473,472,456,457,459,458,462,463,461,460,452,453,455,454,450,451,449,448,320,321,323,322,326,327,325,324,332,333,335,334,330,331,329,328,344,345,347,346,350,351,349,348,340,341,343,342,338,339,337,336,368,369,371,370,374,375,373,372,380,381,383,382,378,379,377,376,360,361,363,362,366,367,365,364,356,357,359,358,354,355,353,352,288,289,291,290,294,295,293,292,300,301,303,302,298,299,297,296,312,313,315,314,318,319,317,316,308,309,311,310,306,307,305,304,272,273,275,274,278,279,277,276,284,285,287,286,282,283,281,280,264,265,267,266,270,271,269,268,260,261,263,262,258,259,257,256};
uint32_t revC9[] = {0,1,3,2,7,6,4,5,15,14,12,13,8,9,11,10,31,30,28,29,24,25,27,26,16,17,19,18,23,22,20,21,63,62,60,61,56,57,59,58,48,49,51,50,55,54,52,53,32,33,35,34,39,38,36,37,47,46,44,45,40,41,43,42,127,126,124,125,120,121,123,122,112,113,115,114,119,118,116,117,96,97,99,98,103,102,100,101,111,110,108,109,104,105,107,106,64,65,67,66,71,70,68,69,79,78,76,77,72,73,75,74,95,94,92,93,88,89,91,90,80,81,83,82,87,86,84,85,255,254,252,253,248,249,251,250,240,241,243,242,247,246,244,245,224,225,227,226,231,230,228,229,239,238,236,237,232,233,235,234,192,193,195,194,199,198,196,197,207,206,204,205,200,201,203,202,223,222,220,221,216,217,219,218,208,209,211,210,215,214,212,213,128,129,131,130,135,134,132,133,143,142,140,141,136,137,139,138,159,158,156,157,152,153,155,154,144,145,147,146,151,150,148,149,191,190,188,189,184,185,187,186,176,177,179,178,183,182,180,181,160,161,163,162,167,166,164,165,175,174,172,173,168,169,171,170,511,510,508,509,504,505,507,506,496,497,499,498,503,502,500,501,480,481,483,482,487,486,484,485,495,494,492,493,488,489,491,490,448,449,451,450,455,454,452,453,463,462,460,461,456,457,459,458,479,478,476,477,472,473,475,474,464,465,467,466,471,470,468,469,384,385,387,386,391,390,388,389,399,398,396,397,392,393,395,394,415,414,412,413,408,409,411,410,400,401,403,402,407,406,404,405,447,446,444,445,440,441,443,442,432,433,435,434,439,438,436,437,416,417,419,418,423,422,420,421,431,430,428,429,424,425,427,426,256,257,259,258,263,262,260,261,271,270,268,269,264,265,267,266,287,286,284,285,280,281,283,282,272,273,275,274,279,278,276,277,319,318,316,317,312,313,315,314,304,305,307,306,311,310,308,309,288,289,291,290,295,294,292,293,303,302,300,301,296,297,299,298,383,382,380,381,376,377,379,378,368,369,371,370,375,374,372,373,352,353,355,354,359,358,356,357,367,366,364,365,360,361,363,362,320,321,323,322,327,326,324,325,335,334,332,333,328,329,331,330,351,350,348,349,344,345,347,346,336,337,339,338,343,342,340,341};
uint32_t H9[][2] = {{257,0},{258,0},{0,0},{260,257},{0,257},{0,0},{0,258},{264,3},{0,3},{0,258},{0,0},{0,257},{0,5},{0,260},{0,6},{272,263},{0,263},{0,6},{0,260},{0,5},{0,257},{0,0},{0,258},{0,3},{0,267},{0,10},{0,264},{0,9},{0,269},{0,12},{0,270},{288,15},{0,15},{0,270},{0,12},{0,269},{0,9},{0,264},{0,10},{0,267},{0,3},{0,258},{0,0},{0,257},{0,5},{0,260},{0,6},{0,263},{0,23},{0,278},{0,20},{0,277},{0,17},{0,272},{0,18},{0,275},{0,27},{0,282},{0,24},{0,281},{0,29},{0,284},{0,30},{320,287},{0,287},{0,30},{0,284},{0,29},{0,281},{0,24},{0,282},{0,27},{0,275},{0,18},{0,272},{0,17},{0,277},{0,20},{0,278},{0,23},{0,263},{0,6},{0,260},{0,5},{0,257},{0,0},{0,258},{0,3},{0,267},{0,10},{0,264},{0,9},{0,269},{0,12},{0,270},{0,15},{0,303},{0,46},{0,300},{0,45},{0,297},{0,40},{0,298},{0,43},{0,291},{0,34},{0,288},{0,33},{0,293},{0,36},{0,294},{0,39},{0,311},{0,54},{0,308},{0,53},{0,305},{0,48},{0,306},{0,51},{0,315},{0,58},{0,312},{0,57},{0,317},{0,60},{0,318},{384,63},{0,63},{0,318},{0,60},{0,317},{0,57},{0,312},{0,58},{0,315},{0,51},{0,306},{0,48},{0,305},{0,53},{0,308},{0,54},{0,311},{0,39},{0,294},{0,36},{0,293},{0,33},{0,288},{0,34},{0,291},{0,43},{0,298},{0,40},{0,297},{0,45},{0,300},{0,46},{0,303},{0,15},{0,270},{0,12},{0,269},{0,9},{0,264},{0,10},{0,267},{0,3},{0,258},{0,0},{0,257},{0,5},{0,260},{0,6},{0,263},{0,23},{0,278},{0,20},{0,277},{0,17},{0,272},{0,18},{0,275},{0,27},{0,282},{0,24},{0,281},{0,29},{0,284},{0,30},{0,287},{0,95},{0,350},{0,92},{0,349},{0,89},{0,344},{0,90},{0,347},{0,83},{0,338},{0,80},{0,337},{0,85},{0,340},{0,86},{0,343},{0,71},{0,326},{0,68},{0,325},{0,65},{0,320},{0,66},{0,323},{0,75},{0,330},{0,72},{0,329},{0,77},{0,332},{0,78},{0,335},{0,111},{0,366},{0,108},{0,365},{0,105},{0,360},{0,106},{0,363},{0,99},{0,354},{0,96},{0,353},{0,101},{0,356},{0,102},{0,359},{0,119},{0,374},{0,116},{0,373},{0,113},{0,368},{0,114},{0,371},{0,123},{0,378},{0,120},{0,377},{0,125},{0,380},{0,126},{384,383},{384,255},{0,126},{0,380},{0,125},{0,377},{0,120},{0,378},{0,123},{0,371},{0,114},{0,368},{0,113},{0,373},{0,116},{0,374},{0,119},{0,359},{0,102},{0,356},{0,101},{0,353},{0,96},{0,354},{0,99},{0,363},{0,106},{0,360},{0,105},{0,365},{0,108},{0,366},{0,111},{0,335},{0,78},{0,332},{0,77},{0,329},{0,72},{0,330},{0,75},{0,323},{0,66},{0,320},{0,65},{0,325},{0,68},{0,326},{0,71},{0,343},{0,86},{0,340},{0,85},{0,337},{0,80},{0,338},{0,83},{0,347},{0,90},{0,344},{0,89},{0,349},{0,92},{0,350},{0,95},{0,287},{0,30},{0,284},{0,29},{0,281},{0,24},{0,282},{0,27},{0,275},{0,18},{0,272},{0,17},{0,277},{0,20},{0,278},{0,23},{0,263},{0,6},{0,260},{0,5},{0,257},{0,0},{0,258},{0,3},{0,267},{0,10},{0,264},{0,9},{0,269},{0,12},{0,270},{0,15},{0,303},{0,46},{0,300},{0,45},{0,297},{0,40},{0,298},{0,43},{0,291},{0,34},{0,288},{0,33},{0,293},{0,36},{0,294},{0,39},{0,311},{0,54},{0,308},{0,53},{0,305},{0,48},{0,306},{0,51},{0,315},{0,58},{0,312},{0,57},{0,317},{0,60},{0,318},{0,63},{384,447},{0,318},{0,60},{0,317},{0,57},{0,312},{0,58},{0,315},{0,51},{0,306},{0,48},{0,305},{0,53},{0,308},{0,54},{0,311},{0,39},{0,294},{0,36},{0,293},{0,33},{0,288},{0,34},{0,291},{0,43},{0,298},{0,40},{0,297},{0,45},{0,300},{0,46},{0,303},{0,15},{0,270},{0,12},{0,269},{0,9},{0,264},{0,10},{0,267},{0,3},{0,258},{0,0},{0,257},{0,5},{0,260},{0,6},{0,263},{0,23},{0,278},{0,20},{0,277},{0,17},{0,272},{0,18},{0,275},{0,27},{0,282},{0,24},{0,281},{0,29},{0,284},{0,30},{0,287},{320,95},{0,30},{0,284},{0,29},{0,281},{0,24},{0,282},{0,27},{0,275},{0,18},{0,272},{0,17},{0,277},{0,20},{0,278},{0,23},{0,263},{0,6},{0,260},{0,5},{0,257},{0,0},{0,258},{0,3},{0,267},{0,10},{0,264},{0,9},{0,269},{0,12},{0,270},{0,15},{288,303},{0,270},{0,12},{0,269},{0,9},{0,264},{0,10},{0,267},{0,3},{0,258},{0,0},{0,257},{0,5},{0,260},{0,6},{0,263},{272,23},{0,6},{0,260},{0,5},{0,257},{0,0},{0,258},{0,3},{264,267},{0,258},{0,0},{0,257},{260,5},{0,0},{258,258},{257,257}};
uint32_t C10[] = {0,1,3,2,6,7,5,4,12,13,15,14,10,11,9,8,24,25,27,26,30,31,29,28,20,21,23,22,18,19,17,16,48,49,51,50,54,55,53,52,60,61,63,62,58,59,57,56,40,41,43,42,46,47,45,44,36,37,39,38,34,35,33,32,96,97,99,98,102,103,101,100,108,109,111,110,106,107,105,104,120,121,123,122,126,127,125,124,116,117,119,118,114,115,113,112,80,81,83,82,86,87,85,84,92,93,95,94,90,91,89,88,72,73,75,74,78,79,77,76,68,69,71,70,66,67,65,64,192,193,195,194,198,199,197,196,204,205,207,206,202,203,201,200,216,217,219,218,222,223,221,220,212,213,215,214,210,211,209,208,240,241,243,242,246,247,245,244,252,253,255,254,250,251,249,248,232,233,235,234,238,239,237,236,228,229,231,230,226,227,225,224,160,161,163,162,166,167,165,164,172,173,175,174,170,171,169,168,184,185,187,186,190,191,189,188,180,181,183,182,178,179,177,176,144,145,147,146,150,151,149,148,156,157,159,158,154,155,153,152,136,137,139,138,142,143,141,140,132,133,135,134,130,131,129,128,384,385,387,386,390,391,389,388,396,397,399,398,394,395,393,392,408,409,411,410,414,415,413,412,404,405,407,406,402,403,401,400,432,433,435,434,438,439,437,436,444,445,447,446,442,443,441,440,424,425,427,426,430,431,429,428,420,421,423,422,418,419,417,416,480,481,483,482,486,487,485,484,492,493,495,494,490,491,489,488,504,505,507,506,510,511,509,508,500,501,503,502,498,499,497,496,464,465,467,466,470,471,469,468,476,477,479,478,474,475,473,472,456,457,459,458,462,463,461,460,452,453,455,454,450,451,449,448,320,321,323,322,326,327,325,324,332,333,335,334,330,331,329,328,344,345,347,346,350,351,349,348,340,341,343,342,338,339,337,336,368,369,371,370,374,375,373,372,380,381,383,382,378,379,377,376,360,361,363,362,366,367,365,364,356,357,359,358,354,355,353,352,288,289,291,290,294,295,293,292,300,301,303,302,298,299,297,296,312,313,315,314,318,319,317,316,308,309,311,310,306,307,305,304,272,273,275,274,278,279,277,276,284,285,287,286,282,283,281,280,264,265,267,266,270,271,269,268,260,261,263,262,258,259,257,256,768,769,771,770,774,775,773,772,780,781,783,782,778,779,777,776,792,793,795,794,798,799,797,796,788,789,791,790,786,787,785,784,816,817,819,818,822,823,821,820,828,829,831,830,826,827,825,824,808,809,811,810,814,815,813,812,804,805,807,806,802,803,801,800,864,865,867,866,870,871,869,868,876,877,879,878,874,875,873,872,888,889,891,890,894,895,893,892,884,885,887,886,882,883,881,880,848,849,851,850,854,855,853,852,860,861,863,862,858,859,857,856,840,841,843,842,846,847,845,844,836,837,839,838,834,835,833,832,960,961,963,962,966,967,965,964,972,973,975,974,970,971,969,968,984,985,987,986,990,991,989,988,980,981,983,982,978,979,977,976,1008,1009,1011,1010,1014,1015,1013,1012,1020,1021,1023,1022,1018,1019,1017,1016,1000,1001,1003,1002,1006,1007,1005,1004,996,997,999,998,994,995,993,992,928,929,931,930,934,935,933,932,940,941,943,942,938,939,937,936,952,953,955,954,958,959,957,956,948,949,951,950,946,947,945,944,912,913,915,914,918,919,917,916,924,925,927,926,922,923,921,920,904,905,907,906,910,911,909,908,900,901,903,902,898,899,897,896,640,641,643,642,646,647,645,644,652,653,655,654,650,651,649,648,664,665,667,666,670,671,669,668,660,661,663,662,658,659,657,656,688,689,691,690,694,695,693,692,700,701,703,702,698,699,697,696,680,681,683,682,686,687,685,684,676,677,679,678,674,675,673,672,736,737,739,738,742,743,741,740,748,749,751,750,746,747,745,744,760,761,763,762,766,767,765,764,756,757,759,758,754,755,753,752,720,721,723,722,726,727,725,724,732,733,735,734,730,731,729,728,712,713,715,714,718,719,717,716,708,709,711,710,706,707,705,704,576,577,579,578,582,583,581,580,588,589,591,590,586,587,585,584,600,601,603,602,606,607,605,604,596,597,599,598,594,595,593,592,624,625,627,626,630,631,629,628,636,637,639,638,634,635,633,632,616,617,619,618,622,623,621,620,612,613,615,614,610,611,609,608,544,545,547,546,550,551,549,548,556,557,559,558,554,555,553,552,568,569,571,570,574,575,573,572,564,565,567,566,562,563,561,560,528,529,531,530,534,535,533,532,540,541,543,542,538,539,537,536,520,521,523,522,526,527,525,524,516,517,519,518,514,515,513,512};
uint32_t revC10[] = {0,1,3,2,7,6,4,5,15,14,12,13,8,9,11,10,31,30,28,29,24,25,27,26,16,17,19,18,23,22,20,21,63,62,60,61,56,57,59,58,48,49,51,50,55,54,52,53,32,33,35,34,39,38,36,37,47,46,44,45,40,41,43,42,127,126,124,125,120,121,123,122,112,113,115,114,119,118,116,117,96,97,99,98,103,102,100,101,111,110,108,109,104,105,107,106,64,65,67,66,71,70,68,69,79,78,76,77,72,73,75,74,95,94,92,93,88,89,91,90,80,81,83,82,87,86,84,85,255,254,252,253,248,249,251,250,240,241,243,242,247,246,244,245,224,225,227,226,231,230,228,229,239,238,236,237,232,233,235,234,192,193,195,194,199,198,196,197,207,206,204,205,200,201,203,202,223,222,220,221,216,217,219,218,208,209,211,210,215,214,212,213,128,129,131,130,135,134,132,133,143,142,140,141,136,137,139,138,159,158,156,157,152,153,155,154,144,145,147,146,151,150,148,149,191,190,188,189,184,185,187,186,176,177,179,178,183,182,180,181,160,161,163,162,167,166,164,165,175,174,172,173,168,169,171,170,511,510,508,509,504,505,507,506,496,497,499,498,503,502,500,501,480,481,483,482,487,486,484,485,495,494,492,493,488,489,491,490,448,449,451,450,455,454,452,453,463,462,460,461,456,457,459,458,479,478,476,477,472,473,475,474,464,465,467,466,471,470,468,469,384,385,387,386,391,390,388,389,399,398,396,397,392,393,395,394,415,414,412,413,408,409,411,410,400,401,403,402,407,406,404,405,447,446,444,445,440,441,443,442,432,433,435,434,439,438,436,437,416,417,419,418,423,422,420,421,431,430,428,429,424,425,427,426,256,257,259,258,263,262,260,261,271,270,268,269,264,265,267,266,287,286,284,285,280,281,283,282,272,273,275,274,279,278,276,277,319,318,316,317,312,313,315,314,304,305,307,306,311,310,308,309,288,289,291,290,295,294,292,293,303,302,300,301,296,297,299,298,383,382,380,381,376,377,379,378,368,369,371,370,375,374,372,373,352,353,355,354,359,358,356,357,367,366,364,365,360,361,363,362,320,321,323,322,327,326,324,325,335,334,332,333,328,329,331,330,351,350,348,349,344,345,347,346,336,337,339,338,343,342,340,341,1023,1022,1020,1021,1016,1017,1019,1018,1008,1009,1011,1010,1015,1014,1012,1013,992,993,995,994,999,998,996,997,1007,1006,1004,1005,1000,1001,1003,1002,960,961,963,962,967,966,964,965,975,974,972,973,968,969,971,970,991,990,988,989,984,985,987,986,976,977,979,978,983,982,980,981,896,897,899,898,903,902,900,901,911,910,908,909,904,905,907,906,927,926,924,925,920,921,923,922,912,913,915,914,919,918,916,917,959,958,956,957,952,953,955,954,944,945,947,946,951,950,948,949,928,929,931,930,935,934,932,933,943,942,940,941,936,937,939,938,768,769,771,770,775,774,772,773,783,782,780,781,776,777,779,778,799,798,796,797,792,793,795,794,784,785,787,786,791,790,788,789,831,830,828,829,824,825,827,826,816,817,819,818,823,822,820,821,800,801,803,802,807,806,804,805,815,814,812,813,808,809,811,810,895,894,892,893,888,889,891,890,880,881,883,882,887,886,884,885,864,865,867,866,871,870,868,869,879,878,876,877,872,873,875,874,832,833,835,834,839,838,836,837,847,846,844,845,840,841,843,842,863,862,860,861,856,857,859,858,848,849,851,850,855,854,852,853,512,513,515,514,519,518,516,517,527,526,524,525,520,521,523,522,543,542,540,541,536,537,539,538,528,529,531,530,535,534,532,533,575,574,572,573,568,569,571,570,560,561,563,562,567,566,564,565,544,545,547,546,551,550,548,549,559,558,556,557,552,553,555,554,639,638,636,637,632,633,635,634,624,625,627,626,631,630,628,629,608,609,611,610,615,614,612,613,623,622,620,621,616,617,619,618,576,577,579,578,583,582,580,581,591,590,588,589,584,585,587,586,607,606,604,605,600,601,603,602,592,593,595,594,599,598,596,597,767,766,764,765,760,761,763,762,752,753,755,754,759,758,756,757,736,737,739,738,743,742,740,741,751,750,748,749,744,745,747,746,704,705,707,706,711,710,708,709,719,718,716,717,712,713,715,714,735,734,732,733,728,729,731,730,720,721,723,722,727,726,724,725,640,641,643,642,647,646,644,645,655,654,652,653,648,649,651,650,671,670,668,669,664,665,667,666,656,657,659,658,663,662,660,661,703,702,700,701,696,697,699,698,688,689,691,690,695,694,692,693,672,673,675,674,679,678,676,677,687,686,684,685,680,681,683,682};
uint32_t H10[][2] = {{513,0},{514,0},{0,0},{516,513},{0,513},{0,0},{0,514},{520,3},{0,3},{0,514},{0,0},{0,513},{0,5},{0,516},{0,6},{528,519},{0,519},{0,6},{0,516},{0,5},{0,513},{0,0},{0,514},{0,3},{0,523},{0,10},{0,520},{0,9},{0,525},{0,12},{0,526},{544,15},{0,15},{0,526},{0,12},{0,525},{0,9},{0,520},{0,10},{0,523},{0,3},{0,514},{0,0},{0,513},{0,5},{0,516},{0,6},{0,519},{0,23},{0,534},{0,20},{0,533},{0,17},{0,528},{0,18},{0,531},{0,27},{0,538},{0,24},{0,537},{0,29},{0,540},{0,30},{576,543},{0,543},{0,30},{0,540},{0,29},{0,537},{0,24},{0,538},{0,27},{0,531},{0,18},{0,528},{0,17},{0,533},{0,20},{0,534},{0,23},{0,519},{0,6},{0,516},{0,5},{0,513},{0,0},{0,514},{0,3},{0,523},{0,10},{0,520},{0,9},{0,525},{0,12},{0,526},{0,15},{0,559},{0,46},{0,556},{0,45},{0,553},{0,40},{0,554},{0,43},{0,547},{0,34},{0,544},{0,33},{0,549},{0,36},{0,550},{0,39},{0,567},{0,54},{0,564},{0,53},{0,561},{0,48},{0,562},{0,51},{0,571},{0,58},{0,568},{0,57},{0,573},{0,60},{0,574},{640,63},{0,63},{0,574},{0,60},{0,573},{0,57},{0,568},{0,58},{0,571},{0,51},{0,562},{0,48},{0,561},{0,53},{0,564},{0,54},{0,567},{0,39},{0,550},{0,36},{0,549},{0,33},{0,544},{0,34},{0,547},{0,43},{0,554},{0,40},{0,553},{0,45},{0,556},{0,46},{0,559},{0,15},{0,526},{0,12},{0,525},{0,9},{0,520},{0,10},{0,523},{0,3},{0,514},{0,0},{0,513},{0,5},{0,516},{0,6},{0,519},{0,23},{0,534},{0,20},{0,533},{0,17},{0,528},{0,18},{0,531},{0,27},{0,538},{0,24},{0,537},{0,29},{0,540},{0,30},{0,543},{0,95},{0,606},{0,92},{0,605},{0,89},{0,600},{0,90},{0,603},{0,83},{0,594},{0,80},{0,593},{0,85},{0,596},{0,86},{0,599},{0,71},{0,582},{0,68},{0,581},{0,65},{0,576},{0,66},{0,579},{0,75},{0,586},{0,72},{0,585},{0,77},{0,588},{0,78},{0,591},{0,111},{0,622},{0,108},{0,621},{0,105},{0,616},{0,106},{0,619},{0,99},{0,610},{0,96},{0,609},{0,101},{0,612},{0,102},{0,615},{0,119},{0,630},{0,116},{0,629},{0,113},{0,624},{0,114},{0,627},{0,123},{0,634},{0,120},{0,633},{0,125},{0,636},{0,126},{768,639},{0,639},{0,126},{0,636},{0,125},{0,633},{0,120},{0,634},{0,123},{0,627},{0,114},{0,624},{0,113},{0,629},{0,116},{0,630},{0,119},{0,615},{0,102},{0,612},{0,101},{0,609},{0,96},{0,610},{0,99},{0,619},{0,106},{0,616},{0,105},{0,621},{0,108},{0,622},{0,111},{0,591},{0,78},{0,588},{0,77},{0,585},{0,72},{0,586},{0,75},{0,579},{0,66},{0,576},{0,65},{0,581},{0,68},{0,582},{0,71},{0,599},{0,86},{0,596},{0,85},{0,593},{0,80},{0,594},{0,83},{0,603},{0,90},{0,600},{0,89},{0,605},{0,92},{0,606},{0,95},{0,543},{0,30},{0,540},{0,29},{0,537},{0,24},{0,538},{0,27},{0,531},{0,18},{0,528},{0,17},{0,533},{0,20},{0,534},{0,23},{0,519},{0,6},{0,516},{0,5},{0,513},{0,0},{0,514},{0,3},{0,523},{0,10},{0,520},{0,9},{0,525},{0,12},{0,526},{0,15},{0,559},{0,46},{0,556},{0,45},{0,553},{0,40},{0,554},{0,43},{0,547},{0,34},{0,544},{0,33},{0,549},{0,36},{0,550},{0,39},{0,567},{0,54},{0,564},{0,53},{0,561},{0,48},{0,562},{0,51},{0,571},{0,58},{0,568},{0,57},{0,573},{0,60},{0,574},{0,63},{0,703},{0,190},{0,700},{0,189},{0,697},{0,184},{0,698},{0,187},{0,691},{0,178},{0,688},{0,177},{0,693},{0,180},{0,694},{0,183},{0,679},{0,166},{0,676},{0,165},{0,673},{0,160},{0,674},{0,163},{0,683},{0,170},{0,680},{0,169},{0,685},{0,172},{0,686},{0,175},{0,655},{0,142},{0,652},{0,141},{0,649},{0,136},{0,650},{0,139},{0,643},{0,130},{0,640},{0,129},{0,645},{0,132},{0,646},{0,135},{0,663},{0,150},{0,660},{0,149},{0,657},{0,144},{0,658},{0,147},{0,667},{0,154},{0,664},{0,153},{0,669},{0,156},{0,670},{0,159},{0,735},{0,222},{0,732},{0,221},{0,729},{0,216},{0,730},{0,219},{0,723},{0,210},{0,720},{0,209},{0,725},{0,212},{0,726},{0,215},{0,711},{0,198},{0,708},{0,197},{0,705},{0,192},{0,706},{0,195},{0,715},{0,202},{0,712},{0,201},{0,717},{0,204},{0,718},{0,207},{0,751},{0,238},{0,748},{0,237},{0,745},{0,232},{0,746},{0,235},{0,739},{0,226},{0,736},{0,225},{0,741},{0,228},{0,742},{0,231},{0,759},{0,246},{0,756},{0,245},{0,753},{0,240},{0,754},{0,243},{0,763},{0,250},{0,760},{0,249},{0,765},{0,252},{0,766},{0,255},{0,255},{0,766},{0,252},{0,765},{0,249},{0,760},{0,250},{0,763},{0,243},{0,754},{0,240},{0,753},{0,245},{0,756},{0,246},{0,759},{0,231},{0,742},{0,228},{0,741},{0,225},{0,736},{0,226},{0,739},{0,235},{0,746},{0,232},{0,745},{0,237},{0,748},{0,238},{0,751},{0,207},{0,718},{0,204},{0,717},{0,201},{0,712},{0,202},{0,715},{0,195},{0,706},{0,192},{0,705},{0,197},{0,708},{0,198},{0,711},{0,215},{0,726},{0,212},{0,725},{0,209},{0,720},{0,210},{0,723},{0,219},{0,730},{0,216},{0,729},{0,221},{0,732},{0,222},{0,735},{0,159},{0,670},{0,156},{0,669},{0,153},{0,664},{0,154},{0,667},{0,147},{0,658},{0,144},{0,657},{0,149},{0,660},{0,150},{0,663},{0,135},{0,646},{0,132},{0,645},{0,129},{0,640},{0,130},{0,643},{0,139},{0,650},{0,136},{0,649},{0,141},{0,652},{0,142},{0,655},{0,175},{0,686},{0,172},{0,685},{0,169},{0,680},{0,170},{0,683},{0,163},{0,674},{0,160},{0,673},{0,165},{0,676},{0,166},{0,679},{0,183},{0,694},{0,180},{0,693},{0,177},{0,688},{0,178},{0,691},{0,187},{0,698},{0,184},{0,697},{0,189},{0,700},{0,190},{0,703},{0,63},{0,574},{0,60},{0,573},{0,57},{0,568},{0,58},{0,571},{0,51},{0,562},{0,48},{0,561},{0,53},{0,564},{0,54},{0,567},{0,39},{0,550},{0,36},{0,549},{0,33},{0,544},{0,34},{0,547},{0,43},{0,554},{0,40},{0,553},{0,45},{0,556},{0,46},{0,559},{0,15},{0,526},{0,12},{0,525},{0,9},{0,520},{0,10},{0,523},{0,3},{0,514},{0,0},{0,513},{0,5},{0,516},{0,6},{0,519},{0,23},{0,534},{0,20},{0,533},{0,17},{0,528},{0,18},{0,531},{0,27},{0,538},{0,24},{0,537},{0,29},{0,540},{0,30},{0,543},{0,95},{0,606},{0,92},{0,605},{0,89},{0,600},{0,90},{0,603},{0,83},{0,594},{0,80},{0,593},{0,85},{0,596},{0,86},{0,599},{0,71},{0,582},{0,68},{0,581},{0,65},{0,576},{0,66},{0,579},{0,75},{0,586},{0,72},{0,585},{0,77},{0,588},{0,78},{0,591},{0,111},{0,622},{0,108},{0,621},{0,105},{0,616},{0,106},{0,619},{0,99},{0,610},{0,96},{0,609},{0,101},{0,612},{0,102},{0,615},{0,119},{0,630},{0,116},{0,629},{0,113},{0,624},{0,114},{0,627},{0,123},{0,634},{0,120},{0,633},{0,125},{0,636},{0,126},{0,639},{768,383},{0,126},{0,636},{0,125},{0,633},{0,120},{0,634},{0,123},{0,627},{0,114},{0,624},{0,113},{0,629},{0,116},{0,630},{0,119},{0,615},{0,102},{0,612},{0,101},{0,609},{0,96},{0,610},{0,99},{0,619},{0,106},{0,616},{0,105},{0,621},{0,108},{0,622},{0,111},{0,591},{0,78},{0,588},{0,77},{0,585},{0,72},{0,586},{0,75},{0,579},{0,66},{0,576},{0,65},{0,581},{0,68},{0,582},{0,71},{0,599},{0,86},{0,596},{0,85},{0,593},{0,80},{0,594},{0,83},{0,603},{0,90},{0,600},{0,89},{0,605},{0,92},{0,606},{0,95},{0,543},{0,30},{0,540},{0,29},{0,537},{0,24},{0,538},{0,27},{0,531},{0,18},{0,528},{0,17},{0,533},{0,20},{0,534},{0,23},{0,519},{0,6},{0,516},{0,5},{0,513},{0,0},{0,514},{0,3},{0,523},{0,10},{0,520},{0,9},{0,525},{0,12},{0,526},{0,15},{0,559},{0,46},{0,556},{0,45},{0,553},{0,40},{0,554},{0,43},{0,547},{0,34},{0,544},{0,33},{0,549},{0,36},{0,550},{0,39},{0,567},{0,54},{0,564},{0,53},{0,561},{0,48},{0,562},{0,51},{0,571},{0,58},{0,568},{0,57},{0,573},{0,60},{0,574},{0,63},{640,703},{0,574},{0,60},{0,573},{0,57},{0,568},{0,58},{0,571},{0,51},{0,562},{0,48},{0,561},{0,53},{0,564},{0,54},{0,567},{0,39},{0,550},{0,36},{0,549},{0,33},{0,544},{0,34},{0,547},{0,43},{0,554},{0,40},{0,553},{0,45},{0,556},{0,46},{0,559},{0,15},{0,526},{0,12},{0,525},{0,9},{0,520},{0,10},{0,523},{0,3},{0,514},{0,0},{0,513},{0,5},{0,516},{0,6},{0,519},{0,23},{0,534},{0,20},{0,533},{0,17},{0,528},{0,18},{0,531},{0,27},{0,538},{0,24},{0,537},{0,29},{0,540},{0,30},{0,543},{576,95},{0,30},{0,540},{0,29},{0,537},{0,24},{0,538},{0,27},{0,531},{0,18},{0,528},{0,17},{0,533},{0,20},{0,534},{0,23},{0,519},{0,6},{0,516},{0,5},{0,513},{0,0},{0,514},{0,3},{0,523},{0,10},{0,520},{0,9},{0,525},{0,12},{0,526},{0,15},{544,559},{0,526},{0,12},{0,525},{0,9},{0,520},{0,10},{0,523},{0,3},{0,514},{0,0},{0,513},{0,5},{0,516},{0,6},{0,519},{528,23},{0,6},{0,516},{0,5},{0,513},{0,0},{0,514},{0,3},{520,523},{0,514},{0,0},{0,513},{516,5},{0,0},{514,514},{513,513}};
uint32_t * C[] = {(uint32_t*)&C1,(uint32_t*)&C2,(uint32_t*)&C3,(uint32_t*)&C4,(uint32_t*)&C5,(uint32_t*)&C6,(uint32_t*)&C7,(uint32_t*)&C8,(uint32_t*)&C9,(uint32_t*)&C10};
uint32_t * revC[] = {(uint32_t*)&revC1,(uint32_t*)&revC2,(uint32_t*)&revC3,(uint32_t*)&revC4,(uint32_t*)&revC5,(uint32_t*)&revC6,(uint32_t*)&revC7,(uint32_t*)&revC8,(uint32_t*)&revC9,(uint32_t*)&revC10};
uint32_t * H[] = {(uint32_t*)&H1,(uint32_t*)&H2,(uint32_t*)&H3,(uint32_t*)&H4,(uint32_t*)&H5,(uint32_t*)&H6,(uint32_t*)&H7,(uint32_t*)&H8,(uint32_t*)&H9,(uint32_t*)&H10};

#endif
