/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

/* ===== Function Prototypes ===== */
double functionM(void);
int functionN(int n, double x);
double functionO(double x1, int n1, double x2, int n2);
double functionP(int a, int n, int b, int c);

/* ===== Function Definitions ===== */
double functionM(void) {
    return 1.5;
}

int functionN(int n, double x) {
    return n + (int)x;
}

double functionO(double x1, int n1, double x2, int n2) {
    return x1 + n1 + x2 + n2;
}

double functionP(int a, int n, int b, int c) {
    return a + n + b + c;
}

/* ===== main ===== */
int main() {

    int a, b, c, d, e;
    double r, s, t, u, v;

    /* a) */
    functionM();
    // ✔ ถูก
    // functionM ไม่รับ parameter และ return double
    // ไม่รับค่า return มาก็ไม่ผิด

    /* b) */
    a = functionM();
    // ❌ ผิด
    // functionM() return double
    // แต่ a เป็น int (ชนิดข้อมูลไม่ตรง)

    /* c) */
    b = functionN(a, b);
    // ❌ ผิด
    // functionN(int, double)
    // argument ตัวที่ 2 ต้องเป็น double แต่ b เป็น int

    /* d) */
    r = functionO(r, a, s, b);
    // ✔ ถูก
    // functionO(double, int, double, int)
    // r,a,s,b ตรงชนิดทั้งหมด
    // r เป็น double รับค่า return ได้

    /* e) */
    s = functionP(a, b, c, d, e);
    // ❌ ผิด
    // functionP รับ parameter 4 ตัว
    // แต่ส่งมา 5 ตัว

    /* f) */
    u = functionM();
    // ✔ ถูก
    // functionM return double
    // u เป็น double

    /* g) */
    c = d + functionN(r, s);
    // ❌ ผิด
    // functionN(int, double)
    // argument ตัวแรกควรเป็น int แต่ r เป็น double

    /* h) */
    t = s * functionO(r, a, r, a);
    // ✔ ถูก
    // functionO(double, int, double, int) ถูกต้อง
    // s * double = double
    // t เป็น double

    /* i) */
    a = v + functionP(r, s, t, t);
    // ❌ ผิด
    // functionP(int, int, int, int)
    // แต่ส่ง r, s, t, t (double ทั้งหมด)

    /* j) */
    functionP(functionN(a, a), s, t, t + r);
    // ❌ ผิด
    // functionN(a, a) ผิด: ตัวที่ 2 ควรเป็น double
    // functionP ต้องการ int ทั้งหมด
    // แต่ s, t, t+r เป็น double

    /* k) */
    v = functionP(functionN(a, a), s, t, t + r);
    // ❌ ผิด
    // เหมือนข้อ j
    // argument ไม่ตรงชนิดข้อมูล

    return 0;
}
