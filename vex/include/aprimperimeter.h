#ifndef _aprimperimeter_
#define _aprimperimeter_

float
aprimperimeter(const int input; const int primnum)
{
    return primintrinsic(input, 'measuredperimeter', primnum);
}

float
aprimperimeter(const string geometry; const int primnum)
{
    return primintrinsic(geometry, 'measuredperimeter', primnum);
}

#endif
