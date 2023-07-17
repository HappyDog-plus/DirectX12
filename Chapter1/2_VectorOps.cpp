//#include <windows.h> // for XMVerifyCPUSupport
//#include <DirectXMath.h>
//#include <DirectXPackedVector.h>
//#include <iostream>
//using namespace std;
//using namespace DirectX;
//using namespace DirectX::PackedVector;
//
//// Overload the  "<<" operators so that we can use cout to 
//// output XMVECTOR objects.
//ostream& XM_CALLCONV operator<<(ostream& os, FXMVECTOR v)
//{
//    XMFLOAT4 dest;
//    XMStoreFloat4(&dest, v);
//
//    os << "(" << dest.x << ", " << dest.y << ", " << dest.z << ", " << dest.w << ")";
//    return os;
//}
//
//int main()
//{
//    cout.setf(ios_base::boolalpha);
//
//    // Check support for SSE2 (Pentium4, AMD K8, and above).
//    if (!XMVerifyCPUSupport())
//    {
//        cout << "directx math not supported" << endl;
//        return 0;
//    }
//
//    XMVECTOR p = XMVectorSet(2.0f, 2.0f, 1.0f, 0.0f);
//    XMVECTOR q = XMVectorSet(2.0f, -0.5f, 0.5f, 0.1f);
//    XMVECTOR u = XMVectorSet(1.0f, 2.0f, 4.0f, 8.0f);
//    XMVECTOR v = XMVectorSet(-2.0f, 1.0f, -3.0f, 2.5f);
//    XMVECTOR w = XMVectorSet(0.0f, XM_PIDIV4, XM_PIDIV2, XM_PI);
//
//    cout << "Absolute:    " << XMVectorAbs(v) << endl;
//    cout << "Cosine:      " << XMVectorCos(w) << endl;
//    cout << "Log:         " << XMVectorLog(u) << endl;
//    cout << "Exp:         " << XMVectorExp(p) << endl;
//
//    cout << "Pow:         " << XMVectorPow(u, p) << endl;
//    cout << "Sqrt:        " << XMVectorSqrt(u) << endl;
//
//    cout << "Swizzle:     " << XMVectorSwizzle(u, 2, 2, 1, 3) << endl;
//
//    cout << "Multiply:    " << XMVectorMultiply(u, v) << endl;
//    // each element's value mapped to [0, 1].
//    cout << "Saturate:    " << XMVectorSaturate(q) << endl;
//    cout << "Min:         " << XMVectorMin(p, v) << endl;
//    cout << "Max:         " << XMVectorMax(p, v) << endl;
//
//    return 0;
//}