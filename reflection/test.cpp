
#include "ops.h"

int main(int argc, char* argv[])
{
    int ret = 0;

    Operator* op_add = GetOperator("add");
    op_add->forward();

    Operator* op_mul = GetOperator("mul");
    op_mul->forward();

    printf("ok\n");

    return ret;
}