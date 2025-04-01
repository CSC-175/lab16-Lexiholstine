// Code to implement the gcf function goes here
int gcf(int a, int b) {
  int q = a/b;
  int r = a%b;
  a = b * q + r;
  if (r != 0) {
    a = b;
    b = q;
    q = r;
  }
  else {
    return b;
  }
}