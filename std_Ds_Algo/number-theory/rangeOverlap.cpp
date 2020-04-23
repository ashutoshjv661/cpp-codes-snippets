static inline bool check_ov2(int x1, int x2, int y1, int y2){
 //   return ( x1 <= y2 && y1 <= x2 );
   return (bool)((((unsigned int)((x2-y1)|(y2-x1))) >> (sizeof(int)*8-1))^1);
};