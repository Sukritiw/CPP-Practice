int c = 0;
for(int i = n; i > 0; i /= 2) {
for(int j = 0; j < i; j ++) {
c++;
}
}

Time Complexity  = O(2n)
