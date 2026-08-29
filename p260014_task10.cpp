#include <stdio.h>

int main() {
    float pf_marks = 88.0;
    int pf_credit = 3;

    float calc_marks = 76.5;
    int calc_credit = 3;

    float phy_marks = 82.0;
    int phy_credit = 2;

    float total_weighted_score = (pf_marks * pf_credit) + (calc_marks * calc_credit) + (phy_marks * phy_credit);
    int total_credit_hours = pf_credit + calc_credit + phy_credit;
    float weighted_average = total_weighted_score / total_credit_hours;

    printf("================ SEMESTER ACADEMIC REPORT ================\n");
    printf("Course\t\t\tCredit Hours\tObtained Marks\n");
    printf("----------------------------------------------------------\n");
    printf("Programming Fund.\t%d\t\t%.2f\n", pf_credit, pf_marks);
    printf("Calculus\t\t%d\t\t%.2f\n", calc_credit, calc_marks);
    printf("Applied Physics\t\t%d\t\t%.2f\n", phy_credit, phy_marks);
    printf("----------------------------------------------------------\n");
    printf("Total Credit Hours:\t%d\n", total_credit_hours);
    printf("Total Weighted Score:\t%.2f\n", total_weighted_score);
    printf("Weighted Average:\t%.2f%%\n", weighted_average);
    printf("==========================================================\n");

    return 0;
}