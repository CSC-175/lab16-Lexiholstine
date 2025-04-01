// Code to implement the gcf function goes here
int gcf(int a, int b) {
  int q = a/b;
  int r = a%b;
  a = b * q + r;
  if (r == 0) {
    return b;
  }
  else {
    a = b;
    b = q;
    q = r;
  }
}