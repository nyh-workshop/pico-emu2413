#include "miditonesFile.h"

const uint8_t mdtFile1[] = {
// BWV 816 Sarabande by Johann Sebastian Bach (1685-1750)
// https://musescore.com/user/3104136/scores/6474418
0x90,43, 0x91,71, 0,114, 0x81, 0,8, 0x91,69, 0,114, 0x81, 0,10, 0x91,71, 2,240, 0x92,55, 1,175, 0x81, 0,68, 
0x91,72, 1,141, 0x80, 0,75, 0x81, 0,27, 0x90,52, 0x91,69, 0,114, 0x81, 0,8, 0x91,71, 0,114, 0x81, 0,10, 
0x91,69, 1,214, 0x81, 0,31, 0x91,67, 0,197, 0x80, 0,37, 0x81, 0,14, 0x90,47, 0x91,74, 3,179, 0x80, 0x81, 0,52, 
0x90,48, 0x91,74, 0,112, 0x81, 0,10, 0x91,76, 0,112, 0x81, 0,14, 0x91,74, 0,72, 0x82, 0,39, 0x81, 0,10, 
0x91,76, 0,127, 0x92,55, 1,216, 0x82, 0,27, 0x92,57, 1,216, 0x82, 0,27, 0x92,59, 1,141, 0x80, 0,14, 0x81, 
0,60, 0x82, 0,27, 0x90,67, 0x91,60, 0x92,57, 3,179, 0x81, 0x82, 0,50, 0x80, 0,2, 0x90,57, 0x91,66, 0x92,54, 
1,214, 0x81, 0,29, 0x91,72, 1,191, 0x80, 0x82, 0,25, 0x81, 0,27, 0x90,55, 0x91,71, 0x80, 0x90,55, 0,114, 0x81, 
0,8, 0x91,69, 0,114, 0x81, 0,10, 0x91,71, 1,214, 0x81, 0,31, 0x91,69, 0,235, 0x81, 0,14, 0x91,50, 0x92,69, 
1,166, 0x80, 0,77, 0x90,52, 1,216, 0x80, 0,27, 0x90,54, 1,216, 0x80, 0,27, 0x90,57, 1,141, 0x81, 0,75, 
0x80, 0,27, 0x90,62, 1,244, 0x91,50, 1,91, 0x82, 0,100, 0x80, 0,25, 0x81, 0,27, 0x90,78, 0x91,48, 0,114, 
0x80, 0,8, 0x90,76, 0,114, 0x80, 0,10, 0x90,78, 2,240, 0x92,57, 1,175, 0x80, 0,68, 0x90,79, 1,141, 0x81, 
0,75, 0x80, 0,27, 0x90,48, 0x91,76, 0,114, 0x81, 0,8, 0x91,78, 0,114, 0x81, 0,10, 0x91,76, 1,214, 0x81, 
0,31, 0x91,74, 0,147, 0x82, 0,50, 0x80, 0,37, 0x81, 0,14, 0x90,47, 0x91,79, 1,244, 0x92,50, 1,191, 0x81, 
0x80, 0,25, 0x82, 0,27, 0x90,72, 0x91,55, 0x92,52, 0,114, 0x80, 0,8, 0x90,71, 0,114, 0x80, 0,10, 0x90,72, 
2,188, 0x82, 0,52, 0x92,48, 1,175, 0x80, 0,68, 0x90,74, 0,235, 0x80, 0,14, 0x90,76, 0,197, 0x82, 0,37, 
0x80, 0,14, 0x90,50, 0x92,69, 3,79, 0x81, 0,100, 0x82, 0,52, 0x91,54, 0x92,74, 1,216, 0x81, 0,27, 0x91,52, 
0,210, 0x82, 0,39, 0x92,72, 0,222, 0x81, 0,12, 0x82, 0,14, 0x91,54, 0x92,71, 2,198, 0x82, 0,39, 0x92,72, 
0,97, 0x80, 0,100, 0x81, 0,37, 0x82, 0,14, 0x90,55, 0x91,71, 0,114, 0x81, 0,8, 0x91,72, 0,114, 0x81, 0,10, 
0x91,71, 0,114, 0x81, 0,12, 0x91,72, 0,114, 0x81, 0,8, 0x91,71, 0,114, 0x81, 0,10, 0x91,72, 0,114, 0x81, 
0,12, 0x91,71, 0,114, 0x81, 0,8, 0x91,72, 0,114, 0x81, 0,10, 0x91,71, 0,2, 0x92,50, 0,112, 0x81, 0,12, 
0x91,72, 0,114, 0x81, 0,8, 0x91,71, 0,114, 0x81, 0,10, 0x91,72, 0,114, 0x81, 0,12, 0x91,69, 1,191, 0x82, 
0,25, 0x81, 0,27, 0x91,43, 0x92,67, 3,79, 0x80, 0,100, 0x82, 0x81, 0,52, 0x90,83, 0x91,55, 1,244, 0x92,59, 
1,216, 0x82, 0,27, 0x92,64, 1,166, 0x80, 0,77, 0x90,79, 1,191, 0x82, 0,25, 0x80, 0,27, 0x90,62, 0x92,78, 
0,114, 0x82, 0,8, 0x92,79, 0,114, 0x82, 0,10, 0x92,78, 1,214, 0x82, 0,31, 0x92,76, 0,197, 0x80, 0,37, 
0x82, 0,14, 0x90,61, 0x92,81, 1,66, 0x81, 0,177, 0x91,55, 1,191, 0x82, 0x80, 0,25, 0x81, 0,27, 0x90,74, 0x91,54, 
1,244, 0x92,57, 1,216, 0x82, 0,27, 0x92,62, 1,166, 0x80, 0,77, 0x90,76, 0,235, 0x80, 0,14, 0x90,78, 0,197, 
0x82, 0,37, 0x80, 0,14, 0x90,55, 0x92,71, 1,116, 0x81, 0,127, 0x91,54, 1,216, 0x81, 0,27, 0x91,52, 0,185, 
0x82, 0,64, 0x92,74, 0,222, 0x81, 0,12, 0x82, 0,14, 0x91,50, 0x92,73, 0,235, 0x82, 0,14, 0x92,71, 0,222, 
0x81, 0,12, 0x82, 0,14, 0x91,49, 0x92,76, 0,235, 0x82, 0,14, 0x92,79, 0,222, 0x81, 0,12, 0x82, 0,14, 0x91,47, 
0x92,78, 0,235, 0x82, 0,14, 0x92,76, 0,222, 0x81, 0,12, 0x82, 0,14, 0x91,45, 0x92,73, 0,114, 0x82, 0,8, 
0x92,74, 0,114, 0x82, 0,10, 0x92,73, 0,75, 0x80, 0,177, 0x90,52, 1,216, 0x80, 0,27, 0x90,57, 1,175, 0x82, 
0,41, 0x80, 0,27, 0x90,71, 0x92,55, 1,141, 0x81, 0,75, 0x80, 0x82, 0,27, 0x90,69, 0x91,54, 1,244, 0x92,50, 
1,191, 0x80, 0x81, 0,52, 0x90,67, 0x91,52, 0,75, 0x80, 0,6, 0x90,69, 0,75, 0x80, 0,8, 0x90,67, 0,75, 
0x80, 0,10, 0x90,66, 0,197, 0x82, 0,37, 0x80, 0,14, 0x90,50, 0x92,67, 1,216, 0x80, 0x82, 0,27, 0x90,49, 0x92,76, 
1,166, 0x81, 0,77, 0x91,52, 1,216, 0x81, 0,27, 0x91,57, 1,166, 0x82, 0x80, 0,77, 0x90,74, 0x92,47, 0,235, 
0x80, 0,14, 0x90,73, 0,222, 0x82, 0,12, 0x80, 0,14, 0x90,45, 0x92,79, 1,166, 0x81, 0,77, 0x91,50, 0,210, 
0x82, 0,39, 0x92,78, 0,116, 0x82, 0,8, 0x92,76, 0,97, 0x81, 0,18, 0x82, 0,8, 0x91,49, 0x92,81, 1,166, 
0x80, 0,77, 0x90,43, 0,210, 0x82, 0,39, 0x92,78, 0,197, 0x81, 0,25, 0x80, 0,12, 0x82, 0,14, 0x90,50, 0x91,76, 
0x92,42, 1,216, 0x80, 0,25, 0x81, 0,2, 0x90,52, 0x91,74, 1,216, 0x80, 0,27, 0x90,54, 1,166, 0x82, 0,77, 
0x92,43, 0,185, 0x81, 0,64, 0x91,71, 0,197, 0x80, 0,25, 0x82, 0,12, 0x81, 0,14, 0x90,52, 0x91,73, 0x92,45, 
0,114, 0x81, 0,8, 0x91,74, 0,114, 0x81, 0,10, 0x91,73, 0,114, 0x81, 0,12, 0x91,74, 0,97, 0x80, 0,16, 
0x81, 0,8, 0x90,73, 0,2, 0x91,54, 0,112, 0x80, 0,10, 0x90,74, 0,114, 0x80, 0,12, 0x90,73, 0,114, 0x80, 
0,8, 0x90,74, 0,100, 0x81, 0,14, 0x80, 0,10, 0x90,73, 0,2, 0x91,55, 0,112, 0x80, 0,12, 0x90,74, 0,114, 
0x80, 0,8, 0x90,73, 0,114, 0x80, 0,10, 0x90,74, 0,114, 0x80, 0,12, 0x90,74, 1,141, 0x82, 0,75, 0x80, 0,27, 
0x90,50, 0x92,74, 1,166, 0x81, 0,77, 0x91,54, 0,235, 0x81, 0,14, 0x91,52, 0,235, 0x81, 0,14, 0x91,54, 1,166, 
0x80, 0,77, 0x90,50, 1,191, 0x81, 0,25, 0x80, 0,27, 0x90,38, 3,79, 0x82, 0,100, 0x80, 0,52, 0x90,43, 0x91,71, 
0,114, 0x81, 0,8, 0x91,69, 0,114, 0x81, 0,10, 0x91,71, 2,240, 0x92,55, 1,175, 0x81, 0,68, 0x91,72, 1,141, 
0x80, 0,75, 0x81, 0,27, 0x90,52, 0x91,69, 0,114, 0x81, 0,8, 0x91,71, 0,114, 0x81, 0,10, 0x91,69, 1,214, 
0x81, 0,31, 0x91,67, 0,197, 0x80, 0,37, 0x81, 0,14, 0x90,47, 0x91,74, 3,179, 0x80, 0x81, 0,52, 0x90,48, 0x91,74, 
0,112, 0x81, 0,10, 0x91,76, 0,112, 0x81, 0,14, 0x91,74, 0,72, 0x82, 0,39, 0x81, 0,10, 0x91,76, 0,127, 
0x92,55, 1,216, 0x82, 0,27, 0x92,57, 1,216, 0x82, 0,27, 0x92,59, 1,141, 0x80, 0,14, 0x81, 0,60, 0x82, 0,27, 
0x90,67, 0x91,60, 0x92,57, 3,179, 0x81, 0x82, 0,50, 0x80, 0,2, 0x90,57, 0x91,66, 0x92,54, 1,214, 0x81, 0,29, 
0x91,72, 1,191, 0x80, 0x82, 0,25, 0x81, 0,27, 0x90,55, 0x91,71, 0x80, 0x90,55, 0,114, 0x81, 0,8, 0x91,69, 0,114, 
0x81, 0,10, 0x91,71, 1,214, 0x81, 0,31, 0x91,69, 0,235, 0x81, 0,14, 0x91,50, 0x92,69, 1,166, 0x80, 0,77, 
0x90,52, 1,216, 0x80, 0,27, 0x90,54, 1,216, 0x80, 0,27, 0x90,57, 1,141, 0x81, 0,75, 0x80, 0,27, 0x90,62, 
1,244, 0x91,50, 1,91, 0x82, 0,100, 0x80, 0,25, 0x81, 0,27, 0x90,78, 0x91,48, 0,114, 0x80, 0,8, 0x90,76, 
0,114, 0x80, 0,10, 0x90,78, 2,240, 0x92,57, 1,175, 0x80, 0,68, 0x90,79, 1,141, 0x81, 0,75, 0x80, 0,27, 
0x90,48, 0x91,76, 0,114, 0x81, 0,8, 0x91,78, 0,114, 0x81, 0,10, 0x91,76, 1,214, 0x81, 0,31, 0x91,74, 0,147, 
0x82, 0,50, 0x80, 0,37, 0x81, 0,14, 0x90,47, 0x91,79, 1,244, 0x92,50, 1,191, 0x81, 0x80, 0,25, 0x82, 0,27, 
0x90,72, 0x91,55, 0x92,52, 0,114, 0x80, 0,8, 0x90,71, 0,114, 0x80, 0,10, 0x90,72, 2,188, 0x82, 0,52, 0x92,48, 
1,175, 0x80, 0,68, 0x90,74, 0,235, 0x80, 0,14, 0x90,76, 0,197, 0x82, 0,37, 0x80, 0,14, 0x90,50, 0x92,69, 
3,79, 0x81, 0,100, 0x82, 0,52, 0x91,54, 0x92,74, 1,216, 0x81, 0,27, 0x91,52, 0,210, 0x82, 0,39, 0x92,72, 
0,222, 0x81, 0,12, 0x82, 0,14, 0x91,54, 0x92,71, 2,198, 0x82, 0,39, 0x92,72, 0,97, 0x80, 0,100, 0x81, 0,37, 
0x82, 0,14, 0x90,55, 0x91,71, 0,114, 0x81, 0,8, 0x91,72, 0,114, 0x81, 0,10, 0x91,71, 0,114, 0x81, 0,12, 
0x91,72, 0,114, 0x81, 0,8, 0x91,71, 0,114, 0x81, 0,10, 0x91,72, 0,114, 0x81, 0,12, 0x91,71, 0,114, 0x81, 
0,8, 0x91,72, 0,114, 0x81, 0,10, 0x91,71, 0,2, 0x92,50, 0,112, 0x81, 0,12, 0x91,72, 0,114, 0x81, 0,8, 
0x91,71, 0,114, 0x81, 0,10, 0x91,72, 0,114, 0x81, 0,12, 0x91,69, 1,191, 0x82, 0,25, 0x81, 0,27, 0x91,43, 
0x92,67, 3,79, 0x80, 0,100, 0x82, 0x81, 0,52, 0x90,83, 0x91,55, 1,244, 0x92,59, 1,216, 0x82, 0,27, 0x92,64, 
1,166, 0x80, 0,77, 0x90,79, 1,191, 0x82, 0,25, 0x80, 0,27, 0x90,62, 0x92,78, 0,114, 0x82, 0,8, 0x92,79, 
0,114, 0x82, 0,10, 0x92,78, 1,214, 0x82, 0,31, 0x92,76, 0,197, 0x80, 0,37, 0x82, 0,14, 0x90,61, 0x92,81, 
1,66, 0x81, 0,177, 0x91,55, 1,191, 0x82, 0x80, 0,25, 0x81, 0,27, 0x90,74, 0x91,54, 1,244, 0x92,57, 1,216, 
0x82, 0,27, 0x92,62, 1,166, 0x80, 0,77, 0x90,76, 0,235, 0x80, 0,14, 0x90,78, 0,197, 0x82, 0,37, 0x80, 0,14, 
0x90,55, 0x92,71, 1,116, 0x81, 0,127, 0x91,54, 1,216, 0x81, 0,27, 0x91,52, 0,185, 0x82, 0,64, 0x92,74, 0,222, 
0x81, 0,12, 0x82, 0,14, 0x91,50, 0x92,73, 0,235, 0x82, 0,14, 0x92,71, 0,222, 0x81, 0,12, 0x82, 0,14, 0x91,49, 
0x92,76, 0,235, 0x82, 0,14, 0x92,79, 0,222, 0x81, 0,12, 0x82, 0,14, 0x91,47, 0x92,78, 0,235, 0x82, 0,14, 
0x92,76, 0,222, 0x81, 0,12, 0x82, 0,14, 0x91,45, 0x92,73, 0,114, 0x82, 0,8, 0x92,74, 0,114, 0x82, 0,10, 
0x92,73, 0,75, 0x80, 0,177, 0x90,52, 1,216, 0x80, 0,27, 0x90,57, 1,175, 0x82, 0,41, 0x80, 0,27, 0x90,71, 
0x92,55, 1,141, 0x81, 0,75, 0x80, 0x82, 0,27, 0x90,69, 0x91,54, 1,244, 0x92,50, 1,191, 0x80, 0x81, 0,52, 0x90,67, 
0x91,52, 0,75, 0x80, 0,6, 0x90,69, 0,75, 0x80, 0,8, 0x90,67, 0,75, 0x80, 0,10, 0x90,66, 0,197, 0x82, 
0,37, 0x80, 0,14, 0x90,50, 0x92,67, 1,216, 0x80, 0x82, 0,27, 0x90,49, 0x92,76, 1,166, 0x81, 0,77, 0x91,52, 
1,216, 0x81, 0,27, 0x91,57, 1,166, 0x82, 0x80, 0,77, 0x90,74, 0x92,47, 0,235, 0x80, 0,14, 0x90,73, 0,222, 
0x82, 0,12, 0x80, 0,14, 0x90,45, 0x92,79, 1,166, 0x81, 0,77, 0x91,50, 0,210, 0x82, 0,39, 0x92,78, 0,116, 
0x82, 0,8, 0x92,76, 0,97, 0x81, 0,18, 0x82, 0,8, 0x91,49, 0x92,81, 1,166, 0x80, 0,77, 0x90,43, 0,210, 
0x82, 0,39, 0x92,78, 0,197, 0x81, 0,25, 0x80, 0,12, 0x82, 0,14, 0x90,50, 0x91,76, 0x92,42, 1,216, 0x80, 0,25, 
0x81, 0,2, 0x90,52, 0x91,74, 1,216, 0x80, 0,27, 0x90,54, 1,166, 0x82, 0,77, 0x92,43, 0,185, 0x81, 0,64, 
0x91,71, 0,197, 0x80, 0,25, 0x82, 0,12, 0x81, 0,14, 0x90,52, 0x91,73, 0x92,45, 0,114, 0x81, 0,8, 0x91,74, 
0,114, 0x81, 0,10, 0x91,73, 0,114, 0x81, 0,12, 0x91,74, 0,97, 0x80, 0,16, 0x81, 0,8, 0x90,73, 0,2, 
0x91,54, 0,112, 0x80, 0,10, 0x90,74, 0,114, 0x80, 0,12, 0x90,73, 0,114, 0x80, 0,8, 0x90,74, 0,100, 0x81, 
0,14, 0x80, 0,10, 0x90,73, 0,2, 0x91,55, 0,112, 0x80, 0,12, 0x90,74, 0,114, 0x80, 0,8, 0x90,73, 0,114, 
0x80, 0,10, 0x90,74, 0,114, 0x80, 0,12, 0x90,74, 1,141, 0x82, 0,75, 0x80, 0,27, 0x90,50, 0x92,74, 1,166, 
0x81, 0,77, 0x91,54, 0,235, 0x81, 0,14, 0x91,52, 0,235, 0x81, 0,14, 0x91,54, 1,166, 0x80, 0,77, 0x90,50, 
1,191, 0x81, 0,25, 0x80, 0,27, 0x90,38, 3,79, 0x82, 0,100, 0x80, 0,52, 0x90,78, 0x91,50, 3,232, 0x92,62, 
1,166, 0x80, 0,77, 0x90,79, 1,141, 0x81, 0,75, 0x80, 0,27, 0x90,60, 0x91,81, 2,198, 0x81, 0,39, 0x91,78, 
0,197, 0x80, 0,37, 0x81, 0,14, 0x90,59, 0x91,74, 1,116, 0x82, 0,127, 0x92,62, 1,191, 0x81, 0,25, 0x82, 0,27, 
0x91,79, 0x92,60, 1,216, 0x82, 0,27, 0x80, 0x90,59, 1,244, 0x92,57, 1,166, 0x81, 0,50, 0x82, 0,27, 0x91,81, 
0x92,55, 0,235, 0x81, 0,14, 0x91,83, 0,172, 0x80, 0,50, 0x82, 0,12, 0x81, 0,14, 0x90,60, 0x91,76, 1,244, 
0x92,48, 1,216, 0x82, 0,27, 0x92,50, 1,166, 0x81, 0x80, 0,77, 0x90,74, 0x91,59, 1,191, 0x82, 0,25, 0x80, 0x81, 
0,27, 0x90,72, 0x91,57, 0x92,52, 0,114, 0x80, 0,8, 0x90,74, 0,114, 0x80, 0,10, 0x90,72, 0,225, 0x81, 0,27, 
0x91,56, 0,218, 0x80, 0,31, 0x90,71, 0,197, 0x82, 0,25, 0x81, 0,12, 0x80, 0,14, 0x90,57, 0x91,72, 1,244, 
0x92,52, 1,191, 0x80, 0,25, 0x82, 0,27, 0x90,45, 1,166, 0x81, 0,50, 0x80, 0,27, 0x90,71, 0x91,47, 1,216, 
0x80, 0x81, 0,27, 0x90,69, 0x91,48, 1,216, 0x81, 0,27, 0x91,52, 1,191, 0x80, 0,25, 0x81, 0,27, 0x90,84, 0x91,57, 
1,244, 0x92,60, 1,216, 0x82, 0,27, 0x92,66, 1,166, 0x80, 0x81, 0,77, 0x90,83, 0x91,57, 0,235, 0x80, 0,14, 
0x90,81, 0,197, 0x82, 0,25, 0x81, 0,12, 0x80, 0,14, 0x90,55, 0x91,83, 1,244, 0x92,59, 0,210, 0x81, 0,39, 
0x91,76, 0,197, 0x80, 0,25, 0x82, 0,12, 0x81, 0,14, 0x90,54, 0x91,76, 0,114, 0x81, 0,8, 0x91,75, 0,114, 
0x81, 0,10, 0x91,76, 0,114, 0x81, 0,12, 0x91,75, 0,125, 0x92,57, 1,216, 0x82, 0,27, 0x92,60, 1,166, 0x80, 
0,16, 0x81, 0,60, 0x90,52, 0x91,76, 0,235, 0x81, 0,14, 0x91,78, 0,197, 0x82, 0,25, 0x80, 0,12, 0x81, 0,14, 
0x90,54, 0x91,71, 0x92,51, 2,198, 0x81, 0,39, 0x91,81, 0,197, 0x80, 0x82, 0,37, 0x81, 0,14, 0x90,52, 0x91,79, 
0x80, 0x90,52, 1,216, 0x80, 0,27, 0x90,54, 0x92,45, 0,210, 0x81, 0,39, 0x91,78, 0,222, 0x82, 0,12, 0x81, 0,14, 
0x91,47, 0x92,75, 0,114, 0x82, 0,8, 0x92,76, 0,114, 0x82, 0,10, 0x92,75, 0,114, 0x82, 0,12, 0x92,76, 0,72, 
0x80, 0,41, 0x82, 0,8, 0x90,75, 0,2, 0x92,55, 0,112, 0x80, 0,10, 0x90,76, 0,114, 0x80, 0,12, 0x90,75, 
0,114, 0x80, 0,8, 0x90,76, 0,100, 0x82, 0,14, 0x80, 0,10, 0x90,75, 0,2, 0x92,57, 0,112, 0x80, 0,12, 
0x90,76, 0,114, 0x80, 0,8, 0x90,75, 0,114, 0x80, 0,10, 0x90,76, 0,114, 0x80, 0,12, 0x90,76, 1,141, 0x81, 
0,75, 0x80, 0,27, 0x90,52, 0x91,76, 1,166, 0x82, 0,77, 0x92,55, 0,235, 0x82, 0,14, 0x92,54, 0,235, 0x82, 
0,14, 0x92,55, 1,166, 0x80, 0,77, 0x90,52, 1,191, 0x82, 0,25, 0x80, 0,27, 0x90,40, 3,79, 0x81, 0,100, 
0x80, 0,52, 0x90,71, 0x91,55, 0x92,52, 0,114, 0x80, 0,8, 0x90,69, 0,114, 0x80, 0,10, 0x90,71, 2,188, 0x82, 
0,52, 0x92,50, 1,175, 0x80, 0,68, 0x90,72, 1,191, 0x82, 0,25, 0x80, 0,27, 0x90,48, 0x92,69, 0,114, 0x82, 
0,8, 0x92,71, 0,114, 0x82, 0,10, 0x92,69, 1,214, 0x82, 0,31, 0x92,67, 0,197, 0x80, 0,37, 0x82, 0,14, 
0x90,47, 0x92,77, 0,114, 0x82, 0,10, 0x92,76, 0,114, 0x82, 0,10, 0x92,77, 2,185, 0x80, 0,10, 0x82, 0,41, 
0x90,48, 0x92,77, 1,16, 0x81, 0,227, 0x91,52, 1,216, 0x81, 0,25, 0x82, 0,2, 0x91,53, 0x92,76, 1,216, 0x81, 
0,27, 0x91,55, 1,141, 0x80, 0,50, 0x82, 0,25, 0x81, 0,27, 0x90,74, 0x91,57, 0x92,53, 1,216, 0x81, 0,27, 
0x91,59, 0,210, 0x80, 0,39, 0x90,72, 0,116, 0x80, 0,8, 0x90,71, 0,97, 0x81, 0,18, 0x80, 0,8, 0x90,60, 
0x91,81, 1,166, 0x82, 0,77, 0x92,55, 0,210, 0x81, 0,39, 0x91,79, 0,222, 0x82, 0,12, 0x81, 0,14, 0x91,57, 
0x92,77, 0,235, 0x82, 0,14, 0x92,76, 0,222, 0x81, 0,12, 0x82, 0,14, 0x91,53, 0x92,74, 0,235, 0x82, 0,14, 
0x92,72, 0,222, 0x81, 0,12, 0x82, 0,14, 0x91,55, 0x92,76, 3,79, 0x80, 0,100, 0x82, 0,52, 0x90,59, 0x92,74, 
0,75, 0x82, 0,6, 0x92,76, 0,75, 0x82, 0,8, 0x92,74, 0,75, 0x82, 0,10, 0x92,72, 0,235, 0x82, 0,14, 
0x92,74, 1,141, 0x81, 0,50, 0x80, 0,25, 0x82, 0,27, 0x90,60, 0x91,72, 0x92,48, 3,179, 0x81, 0x80, 0,52, 0x90,71, 
0x91,54, 1,166, 0x82, 0,77, 0x92,52, 1,216, 0x82, 0,25, 0x80, 0,2, 0x90,50, 0x92,69, 1,214, 0x82, 0,2, 
0x80, 0,27, 0x90,71, 0x92,48, 1,141, 0x81, 0,75, 0x80, 0x82, 0,27, 0x90,67, 0x91,47, 1,216, 0x81, 0,27, 0x91,45, 
0,210, 0x80, 0,39, 0x90,66, 0,222, 0x81, 0,12, 0x80, 0,14, 0x90,55, 0x91,74, 0x92,47, 1,216, 0x82, 0,27, 
0x92,50, 1,191, 0x81, 0,25, 0x82, 0,27, 0x91,74, 0x92,48, 0,112, 0x81, 0,10, 0x91,76, 0,112, 0x81, 0,14, 
0x91,74, 0,112, 0x81, 0,10, 0x91,76, 0,100, 0x82, 0,27, 0x92,47, 1,141, 0x80, 0,75, 0x82, 0,27, 0x90,45, 
1,216, 0x80, 0,27, 0x90,43, 1,156, 0x81, 0,60, 0x80, 0,27, 0x90,62, 0x91,42, 0,235, 0x80, 0,14, 0x90,64, 
0,235, 0x80, 0,14, 0x90,45, 0x92,66, 0,235, 0x82, 0,14, 0x92,67, 0,222, 0x80, 0,12, 0x82, 0,14, 0x90,50, 
0x92,69, 0,235, 0x82, 0,14, 0x92,71, 0,172, 0x81, 0,62, 0x82, 0,14, 0x91,42, 0x92,72, 0,235, 0x82, 0,14, 
0x92,69, 0,222, 0x81, 0,12, 0x82, 0,14, 0x91,43, 0x92,71, 0,156, 0x82, 0,10, 0x92,69, 0,156, 0x82, 0,10, 
0x92,67, 0,89, 0x80, 0,50, 0x81, 0,16, 0x82, 0,10, 0x90,52, 0x91,69, 0x92,48, 0,156, 0x81, 0,10, 0x91,67, 
0,156, 0x81, 0,10, 0x91,66, 0,139, 0x80, 0x82, 0,16, 0x81, 0,10, 0x90,50, 0x91,67, 0x80, 0x90,50, 1,244, 0x92,59, 
1,191, 0x81, 0,25, 0x82, 0,27, 0x91,66, 0x92,57, 0,114, 0x81, 0,8, 0x91,67, 0,114, 0x81, 0,10, 0x91,66, 
0,225, 0x82, 0,27, 0x92,55, 0,218, 0x81, 0,31, 0x91,64, 0,222, 0x82, 0,12, 0x81, 0,14, 0x91,54, 0x92,62, 
1,116, 0x80, 0,127, 0x90,48, 1,191, 0x82, 0,25, 0x80, 0,27, 0x90,74, 0x92,47, 0,114, 0x80, 0,8, 0x90,72, 
0,114, 0x80, 0,10, 0x90,74, 0,175, 0x81, 0,77, 0x91,50, 1,216, 0x81, 0,27, 0x91,55, 1,166, 0x82, 0,8, 
0x80, 0,68, 0x90,47, 0x92,76, 1,216, 0x80, 0x82, 0,27, 0x90,45, 0x92,72, 0,114, 0x82, 0,8, 0x92,74, 0,114, 
0x82, 0,10, 0x92,72, 0,225, 0x80, 0,27, 0x90,43, 0,218, 0x82, 0,31, 0x92,71, 0,222, 0x80, 0,12, 0x82, 0,14, 
0x90,48, 0x92,76, 1,116, 0x81, 0,127, 0x91,52, 1,191, 0x82, 0,25, 0x81, 0,27, 0x91,76, 0x92,57, 0,114, 0x81, 
0,8, 0x91,78, 0,114, 0x81, 0,10, 0x91,79, 0,114, 0x81, 0,12, 0x91,78, 0,47, 0x80, 0,66, 0x81, 0,8, 
0x90,79, 0,2, 0x91,45, 0,112, 0x80, 0,10, 0x90,78, 0,114, 0x80, 0,12, 0x90,79, 0,114, 0x80, 0,8, 0x90,78, 
0,100, 0x81, 0,14, 0x80, 0,10, 0x90,79, 0,2, 0x91,50, 0,112, 0x80, 0,12, 0x90,78, 0,114, 0x80, 0,8, 
0x90,79, 0,114, 0x80, 0,10, 0x90,78, 0,100, 0x81, 0,14, 0x80, 0,12, 0x90,48, 0x91,76, 0,235, 0x81, 0,14, 
0x91,78, 0,147, 0x82, 0,75, 0x80, 0,12, 0x81, 0,14, 0x90,47, 0x91,79, 1,244, 0x92,50, 1,191, 0x80, 0,25, 
0x82, 0,27, 0x90,49, 1,166, 0x81, 0,77, 0x91,52, 0x92,81, 0,235, 0x82, 0,14, 0x92,83, 0,222, 0x81, 0,12, 
0x82, 0,14, 0x91,57, 0x92,81, 0,235, 0x82, 0,14, 0x92,78, 0,172, 0x80, 0,62, 0x82, 0,14, 0x90,45, 0x92,79, 
1,216, 0x80, 0x82, 0,27, 0x90,50, 0x92,78, 0,114, 0x82, 0,8, 0x92,79, 0,114, 0x82, 0,10, 0x92,78, 0,175, 
0x81, 0,77, 0x91,57, 1,216, 0x81, 0,27, 0x91,62, 1,175, 0x82, 0,41, 0x81, 0,27, 0x91,76, 0x92,60, 1,216, 
0x81, 0x82, 0,27, 0x91,74, 0x92,59, 1,216, 0x82, 0,27, 0x92,57, 1,91, 0x80, 0,100, 0x81, 0,25, 0x82, 0,27, 
0x90,72, 0x91,55, 0x92,52, 0,75, 0x80, 0,6, 0x90,74, 0,75, 0x80, 0,8, 0x90,72, 0,75, 0x80, 0,10, 0x90,71, 
0,222, 0x82, 0,12, 0x80, 0,14, 0x90,50, 0x92,72, 1,191, 0x81, 0,25, 0x82, 0x80, 0,27, 0x90,78, 0x91,57, 0x92,48, 
1,216, 0x82, 0,27, 0x92,47, 1,191, 0x81, 0,25, 0x82, 0,27, 0x91,45, 1,166, 0x80, 0,50, 0x81, 0,27, 0x90,79, 
0x91,43, 0,235, 0x80, 0,14, 0x90,81, 0,222, 0x81, 0,12, 0x80, 0,14, 0x90,42, 0x91,81, 0,156, 0x81, 0,10, 
0x91,83, 0,156, 0x81, 0,10, 0x91,84, 0,139, 0x80, 0,16, 0x81, 0,10, 0x90,38, 0x91,84, 0,156, 0x81, 0,10, 
0x91,83, 0,156, 0x81, 0,10, 0x91,81, 0,139, 0x80, 0,16, 0x81, 0,10, 0x90,40, 0x91,81, 0,156, 0x81, 0,10, 
0x91,79, 0,156, 0x81, 0,10, 0x91,78, 0,139, 0x80, 0,16, 0x81, 0,10, 0x90,45, 0x91,78, 0x92,42, 0,156, 0x81, 
0,10, 0x91,76, 0,156, 0x81, 0,10, 0x91,74, 0,139, 0x80, 0x82, 0,16, 0x81, 0,10, 0x90,47, 0x91,74, 0x92,43, 
0,156, 0x81, 0,10, 0x91,83, 0,156, 0x81, 0,10, 0x91,81, 0,139, 0x80, 0x82, 0,16, 0x81, 0,10, 0x90,48, 0x91,79, 
0x92,45, 0,156, 0x81, 0,10, 0x91,78, 0,156, 0x81, 0,10, 0x91,76, 0,139, 0x80, 0x82, 0,16, 0x81, 0,10, 0x90,50, 
0x91,74, 0x92,47, 0,156, 0x81, 0,10, 0x91,72, 0,156, 0x81, 0,10, 0x91,71, 0,139, 0x80, 0x82, 0,16, 0x81, 0,10, 
0x90,55, 0x91,76, 0x92,48, 0,156, 0x81, 0,10, 0x91,74, 0,156, 0x81, 0,10, 0x91,72, 0,139, 0x82, 0,16, 0x81, 
0,10, 0x91,50, 0x92,71, 1,191, 0x80, 0,52, 0x90,52, 1,191, 0x82, 0,25, 0x80, 0,27, 0x90,69, 0x92,54, 0,114, 
0x80, 0,8, 0x90,71, 0,114, 0x80, 0,10, 0x90,69, 0,114, 0x80, 0,12, 0x90,71, 0,97, 0x82, 0,16, 0x80, 0,8, 
0x90,69, 0,2, 0x92,60, 0,112, 0x80, 0,10, 0x90,71, 0,114, 0x80, 0,12, 0x90,67, 0,147, 0x81, 0,87, 0x80, 
0,14, 0x90,55, 0x91,67, 1,191, 0x82, 0,52, 0x92,59, 0,235, 0x82, 0,14, 0x92,57, 0,235, 0x82, 0,14, 0x92,59, 
1,166, 0x80, 0,77, 0x90,55, 1,191, 0x82, 0,25, 0x80, 0,27, 0x90,43, 3,79, 0x81, 0,100, 0x80, 0,52, 0x90,78, 
0x91,50, 3,232, 0x92,62, 1,166, 0x80, 0,77, 0x90,79, 1,141, 0x81, 0,75, 0x80, 0,27, 0x90,60, 0x91,81, 2,198, 
0x81, 0,39, 0x91,78, 0,197, 0x80, 0,37, 0x81, 0,14, 0x90,59, 0x91,74, 1,116, 0x82, 0,127, 0x92,62, 1,191, 
0x81, 0,25, 0x82, 0,27, 0x91,79, 0x92,60, 1,216, 0x82, 0,27, 0x80, 0x90,59, 1,244, 0x92,57, 1,166, 0x81, 0,50, 
0x82, 0,27, 0x91,81, 0x92,55, 0,235, 0x81, 0,14, 0x91,83, 0,172, 0x80, 0,50, 0x82, 0,12, 0x81, 0,14, 0x90,60, 
0x91,76, 1,244, 0x92,48, 1,216, 0x82, 0,27, 0x92,50, 1,166, 0x81, 0x80, 0,77, 0x90,74, 0x91,59, 1,191, 0x82, 
0,25, 0x80, 0x81, 0,27, 0x90,72, 0x91,57, 0x92,52, 0,114, 0x80, 0,8, 0x90,74, 0,114, 0x80, 0,10, 0x90,72, 
0,225, 0x81, 0,27, 0x91,56, 0,218, 0x80, 0,31, 0x90,71, 0,197, 0x82, 0,25, 0x81, 0,12, 0x80, 0,14, 0x90,57, 
0x91,72, 1,244, 0x92,52, 1,191, 0x80, 0,25, 0x82, 0,27, 0x90,45, 1,166, 0x81, 0,50, 0x80, 0,27, 0x90,71, 
0x91,47, 1,216, 0x80, 0x81, 0,27, 0x90,69, 0x91,48, 1,216, 0x81, 0,27, 0x91,52, 1,191, 0x80, 0,25, 0x81, 0,27, 
0x90,84, 0x91,57, 1,244, 0x92,60, 1,216, 0x82, 0,27, 0x92,66, 1,166, 0x80, 0x81, 0,77, 0x90,83, 0x91,57, 0,235, 
0x80, 0,14, 0x90,81, 0,197, 0x82, 0,25, 0x81, 0,12, 0x80, 0,14, 0x90,55, 0x91,83, 1,244, 0x92,59, 0,210, 
0x81, 0,39, 0x91,76, 0,197, 0x80, 0,25, 0x82, 0,12, 0x81, 0,14, 0x90,54, 0x91,76, 0,114, 0x81, 0,8, 0x91,75, 
0,114, 0x81, 0,10, 0x91,76, 0,114, 0x81, 0,12, 0x91,75, 0,125, 0x92,57, 1,216, 0x82, 0,27, 0x92,60, 1,166, 
0x80, 0,16, 0x81, 0,60, 0x90,52, 0x91,76, 0,235, 0x81, 0,14, 0x91,78, 0,197, 0x82, 0,25, 0x80, 0,12, 0x81, 
0,14, 0x90,54, 0x91,71, 0x92,51, 2,198, 0x81, 0,39, 0x91,81, 0,197, 0x80, 0x82, 0,37, 0x81, 0,14, 0x90,52, 
0x91,79, 0x80, 0x90,52, 1,216, 0x80, 0,27, 0x90,54, 0x92,45, 0,210, 0x81, 0,39, 0x91,78, 0,222, 0x82, 0,12, 
0x81, 0,14, 0x91,47, 0x92,75, 0,114, 0x82, 0,8, 0x92,76, 0,114, 0x82, 0,10, 0x92,75, 0,114, 0x82, 0,12, 
0x92,76, 0,72, 0x80, 0,41, 0x82, 0,8, 0x90,75, 0,2, 0x92,55, 0,112, 0x80, 0,10, 0x90,76, 0,114, 0x80, 
0,12, 0x90,75, 0,114, 0x80, 0,8, 0x90,76, 0,100, 0x82, 0,14, 0x80, 0,10, 0x90,75, 0,2, 0x92,57, 0,112, 
0x80, 0,12, 0x90,76, 0,114, 0x80, 0,8, 0x90,75, 0,114, 0x80, 0,10, 0x90,76, 0,114, 0x80, 0,12, 0x90,76, 
1,141, 0x81, 0,75, 0x80, 0,27, 0x90,52, 0x91,76, 1,166, 0x82, 0,77, 0x92,55, 0,235, 0x82, 0,14, 0x92,54, 
0,235, 0x82, 0,14, 0x92,55, 1,166, 0x80, 0,77, 0x90,52, 1,191, 0x82, 0,25, 0x80, 0,27, 0x90,40, 3,79, 
0x81, 0,100, 0x80, 0,52, 0x90,71, 0x91,55, 0x92,52, 0,114, 0x80, 0,8, 0x90,69, 0,114, 0x80, 0,10, 0x90,71, 
2,188, 0x82, 0,52, 0x92,50, 1,175, 0x80, 0,68, 0x90,72, 1,191, 0x82, 0,25, 0x80, 0,27, 0x90,48, 0x92,69, 
0,114, 0x82, 0,8, 0x92,71, 0,114, 0x82, 0,10, 0x92,69, 1,214, 0x82, 0,31, 0x92,67, 0,197, 0x80, 0,37, 
0x82, 0,14, 0x90,47, 0x92,77, 0,114, 0x82, 0,10, 0x92,76, 0,114, 0x82, 0,10, 0x92,77, 2,185, 0x80, 0,10, 
0x82, 0,41, 0x90,48, 0x92,77, 1,16, 0x81, 0,227, 0x91,52, 1,216, 0x81, 0,25, 0x82, 0,2, 0x91,53, 0x92,76, 
1,216, 0x81, 0,27, 0x91,55, 1,141, 0x80, 0,50, 0x82, 0,25, 0x81, 0,27, 0x90,74, 0x91,57, 0x92,53, 1,216, 
0x81, 0,27, 0x91,59, 0,210, 0x80, 0,39, 0x90,72, 0,116, 0x80, 0,8, 0x90,71, 0,97, 0x81, 0,18, 0x80, 0,8, 
0x90,60, 0x91,81, 1,166, 0x82, 0,77, 0x92,55, 0,210, 0x81, 0,39, 0x91,79, 0,222, 0x82, 0,12, 0x81, 0,14, 
0x91,57, 0x92,77, 0,235, 0x82, 0,14, 0x92,76, 0,222, 0x81, 0,12, 0x82, 0,14, 0x91,53, 0x92,74, 0,235, 0x82, 
0,14, 0x92,72, 0,222, 0x81, 0,12, 0x82, 0,14, 0x91,55, 0x92,76, 3,79, 0x80, 0,100, 0x82, 0,52, 0x90,59, 
0x92,74, 0,75, 0x82, 0,6, 0x92,76, 0,75, 0x82, 0,8, 0x92,74, 0,75, 0x82, 0,10, 0x92,72, 0,235, 0x82, 
0,14, 0x92,74, 1,141, 0x81, 0,50, 0x80, 0,25, 0x82, 0,27, 0x90,60, 0x91,72, 0x92,48, 3,179, 0x81, 0x80, 0,52, 
0x90,71, 0x91,54, 1,166, 0x82, 0,77, 0x92,52, 1,216, 0x82, 0,25, 0x80, 0,2, 0x90,50, 0x92,69, 1,214, 0x82, 
0,2, 0x80, 0,27, 0x90,71, 0x92,48, 1,141, 0x81, 0,75, 0x80, 0x82, 0,27, 0x90,67, 0x91,47, 1,216, 0x81, 0,27, 
0x91,45, 0,210, 0x80, 0,39, 0x90,66, 0,222, 0x81, 0,12, 0x80, 0,14, 0x90,55, 0x91,74, 0x92,47, 1,216, 0x82, 
0,27, 0x92,50, 1,191, 0x81, 0,25, 0x82, 0,27, 0x91,74, 0x92,48, 0,112, 0x81, 0,10, 0x91,76, 0,112, 0x81, 
0,14, 0x91,74, 0,112, 0x81, 0,10, 0x91,76, 0,100, 0x82, 0,27, 0x92,47, 1,141, 0x80, 0,75, 0x82, 0,27, 
0x90,45, 1,216, 0x80, 0,27, 0x90,43, 1,156, 0x81, 0,60, 0x80, 0,27, 0x90,62, 0x91,42, 0,235, 0x80, 0,14, 
0x90,64, 0,235, 0x80, 0,14, 0x90,45, 0x92,66, 0,235, 0x82, 0,14, 0x92,67, 0,222, 0x80, 0,12, 0x82, 0,14, 
0x90,50, 0x92,69, 0,235, 0x82, 0,14, 0x92,71, 0,172, 0x81, 0,62, 0x82, 0,14, 0x91,42, 0x92,72, 0,235, 0x82, 
0,14, 0x92,69, 0,222, 0x81, 0,12, 0x82, 0,14, 0x91,43, 0x92,71, 0,156, 0x82, 0,10, 0x92,69, 0,156, 0x82, 
0,10, 0x92,67, 0,89, 0x80, 0,50, 0x81, 0,16, 0x82, 0,10, 0x90,52, 0x91,69, 0x92,48, 0,156, 0x81, 0,10, 
0x91,67, 0,156, 0x81, 0,10, 0x91,66, 0,139, 0x80, 0x82, 0,16, 0x81, 0,10, 0x90,50, 0x91,67, 0x80, 0x90,50, 1,244, 
0x92,59, 1,191, 0x81, 0,25, 0x82, 0,27, 0x91,66, 0x92,57, 0,114, 0x81, 0,8, 0x91,67, 0,114, 0x81, 0,10, 
0x91,66, 0,225, 0x82, 0,27, 0x92,55, 0,218, 0x81, 0,31, 0x91,64, 0,222, 0x82, 0,12, 0x81, 0,14, 0x91,54, 
0x92,62, 1,116, 0x80, 0,127, 0x90,48, 1,191, 0x82, 0,25, 0x80, 0,27, 0x90,74, 0x92,47, 0,114, 0x80, 0,8, 
0x90,72, 0,114, 0x80, 0,10, 0x90,74, 0,175, 0x81, 0,77, 0x91,50, 1,216, 0x81, 0,27, 0x91,55, 1,166, 0x82, 
0,8, 0x80, 0,68, 0x90,47, 0x92,76, 1,216, 0x80, 0x82, 0,27, 0x90,45, 0x92,72, 0,114, 0x82, 0,8, 0x92,74, 
0,114, 0x82, 0,10, 0x92,72, 0,225, 0x80, 0,27, 0x90,43, 0,218, 0x82, 0,31, 0x92,71, 0,222, 0x80, 0,12, 
0x82, 0,14, 0x90,48, 0x92,76, 1,116, 0x81, 0,127, 0x91,52, 1,191, 0x82, 0,25, 0x81, 0,27, 0x91,76, 0x92,57, 
0,114, 0x81, 0,8, 0x91,78, 0,114, 0x81, 0,10, 0x91,79, 0,114, 0x81, 0,12, 0x91,78, 0,47, 0x80, 0,66, 
0x81, 0,8, 0x90,79, 0,2, 0x91,45, 0,112, 0x80, 0,10, 0x90,78, 0,114, 0x80, 0,12, 0x90,79, 0,114, 0x80, 
0,8, 0x90,78, 0,100, 0x81, 0,14, 0x80, 0,10, 0x90,79, 0,2, 0x91,50, 0,112, 0x80, 0,12, 0x90,78, 0,114, 
0x80, 0,8, 0x90,79, 0,114, 0x80, 0,10, 0x90,78, 0,100, 0x81, 0,14, 0x80, 0,12, 0x90,48, 0x91,76, 0,235, 
0x81, 0,14, 0x91,78, 0,147, 0x82, 0,75, 0x80, 0,12, 0x81, 0,14, 0x90,47, 0x91,79, 1,244, 0x92,50, 1,191, 
0x80, 0,25, 0x82, 0,27, 0x90,49, 1,166, 0x81, 0,77, 0x91,52, 0x92,81, 0,235, 0x82, 0,14, 0x92,83, 0,222, 
0x81, 0,12, 0x82, 0,14, 0x91,57, 0x92,81, 0,235, 0x82, 0,14, 0x92,78, 0,172, 0x80, 0,62, 0x82, 0,14, 0x90,45, 
0x92,79, 1,216, 0x80, 0x82, 0,27, 0x90,50, 0x92,78, 0,114, 0x82, 0,8, 0x92,79, 0,114, 0x82, 0,10, 0x92,78, 
0,175, 0x81, 0,77, 0x91,57, 1,216, 0x81, 0,27, 0x91,62, 1,175, 0x82, 0,41, 0x81, 0,27, 0x91,76, 0x92,60, 
1,216, 0x81, 0x82, 0,27, 0x91,74, 0x92,59, 1,216, 0x82, 0,27, 0x92,57, 1,91, 0x80, 0,100, 0x81, 0,25, 0x82, 
0,27, 0x90,72, 0x91,55, 0x92,52, 0,75, 0x80, 0,6, 0x90,74, 0,75, 0x80, 0,8, 0x90,72, 0,75, 0x80, 0,10, 
0x90,71, 0,222, 0x82, 0,12, 0x80, 0,14, 0x90,50, 0x92,72, 1,191, 0x81, 0,25, 0x82, 0x80, 0,27, 0x90,78, 0x91,57, 
0x92,48, 1,216, 0x82, 0,27, 0x92,47, 1,191, 0x81, 0,25, 0x82, 0,27, 0x91,45, 1,166, 0x80, 0,50, 0x81, 0,27, 
0x90,79, 0x91,43, 0,235, 0x80, 0,14, 0x90,81, 0,222, 0x81, 0,12, 0x80, 0,14, 0x90,42, 0x91,81, 0,156, 0x81, 
0,10, 0x91,83, 0,156, 0x81, 0,10, 0x91,84, 0,139, 0x80, 0,16, 0x81, 0,10, 0x90,38, 0x91,84, 0,156, 0x81, 
0,10, 0x91,83, 0,156, 0x81, 0,10, 0x91,81, 0,139, 0x80, 0,16, 0x81, 0,10, 0x90,40, 0x91,81, 0,156, 0x81, 
0,10, 0x91,79, 0,156, 0x81, 0,10, 0x91,78, 0,139, 0x80, 0,16, 0x81, 0,10, 0x90,45, 0x91,78, 0x92,42, 0,156, 
0x81, 0,10, 0x91,76, 0,156, 0x81, 0,10, 0x91,74, 0,139, 0x80, 0x82, 0,16, 0x81, 0,10, 0x90,47, 0x91,74, 0x92,43, 
0,156, 0x81, 0,10, 0x91,83, 0,156, 0x81, 0,10, 0x91,81, 0,139, 0x80, 0x82, 0,16, 0x81, 0,10, 0x90,48, 0x91,79, 
0x92,45, 0,156, 0x81, 0,10, 0x91,78, 0,156, 0x81, 0,10, 0x91,76, 0,139, 0x80, 0x82, 0,16, 0x81, 0,10, 0x90,50, 
0x91,74, 0x92,47, 0,156, 0x81, 0,10, 0x91,72, 0,156, 0x81, 0,10, 0x91,71, 0,139, 0x80, 0x82, 0,16, 0x81, 0,10, 
0x90,55, 0x91,76, 0x92,48, 0,156, 0x81, 0,10, 0x91,74, 0,156, 0x81, 0,10, 0x91,72, 0,139, 0x82, 0,16, 0x81, 
0,10, 0x91,50, 0x92,71, 1,191, 0x80, 0,52, 0x90,52, 1,191, 0x82, 0,25, 0x80, 0,27, 0x90,69, 0x92,54, 0,114, 
0x80, 0,8, 0x90,71, 0,114, 0x80, 0,10, 0x90,69, 0,114, 0x80, 0,12, 0x90,71, 0,97, 0x82, 0,16, 0x80, 0,8, 
0x90,69, 0,2, 0x92,60, 0,112, 0x80, 0,10, 0x90,71, 0,114, 0x80, 0,12, 0x90,67, 0,147, 0x81, 0,87, 0x80, 
0,14, 0x90,55, 0x91,67, 1,191, 0x82, 0,52, 0x92,59, 0,235, 0x82, 0,14, 0x92,57, 0,235, 0x82, 0,14, 0x92,59, 
1,166, 0x80, 0,77, 0x90,55, 1,191, 0x82, 0,25, 0x80, 0,27, 0x90,43, 3,79, 0x81, 0,100, 0x80, 0xf0};