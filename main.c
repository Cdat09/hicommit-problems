#include <stdio.h>


int main() {
    double dtb;
    double drl;

    if (!(cin >> dtb >> drl)) {
        return 0;
    }

    string hoc_luc = "";
    if (dtb >= 9.0) {
        hoc_luc = "XUAT_SAC";
    } else if (dtb >= 8.0) {
        hoc_luc = "GIOI";
    } else if (dtb >= 7.0) {
        hoc_luc = "KHA";
    } else {
        hoc_luc = "KHONG_DAT";
    }

    string ren_luyen = "";
    if (drl >= 90) {
        ren_luyen = "XUAT_SAC";
    } else if (drl >= 80) {
        ren_luyen = "TOT";
    } else if (drl >= 70) {
        ren_luyen = "KHA";
    } else {
        ren_luyen = "KHONG_DAT";
    }

    if (hoc_luc == "XUAT_SAC" && ren_luyen == "XUAT_SAC") {
        cout << "HOC_BONG_XUAT_SAC" << endl;
    } 
    else if ((hoc_luc == "GIOI" && (ren_luyen == "TOT" || ren_luyen == "XUAT_SAC")) || 
             (hoc_luc == "XUAT_SAC" && ren_luyen == "TOT")) {
        cout << "HOC_BONG_GIOI" << endl;
    } 
    else if ((hoc_luc == "KHA" && (ren_luyen == "KHA" || ren_luyen == "TOT" || ren_luyen == "XUAT_SAC")) || 
             (hoc_luc == "GIOI" && ren_luyen == "KHA") || 
             (hoc_luc == "XUAT_SAC" && ren_luyen == "KHA")) {
        cout << "HOC_BONG_KHA" << endl;
    } 
    else {
        cout << "KHONG_DAT" << endl;
    }

    return 0;
}

