#pragma once

void ValueAssignment();

void ArrayAssignment();

void CopyCost_Primitive();

void CopyCost_Array();

void StoreVariableAddress();

void PointerAccess_Array();

void PointerTypeAndSize();

void PointerCheckAddress();

void PointerArithmeticAndDataSize();

void PointerReadValue();

void PointerWriteValue();

void PointerAndVariableRelation();

void InvalidPointerTypeProblem();

void ProperPointerTypes();

void PointerArithmetic();

void InvalidPointerAccess();

void NullptrSafeUsage();

void ArrayBasics_IndexAccess();

void PointerArrayAccess();

void ArrayNameImmutability();

void PointerArray();

void ArrayPointer();

void PointerArrayVsArrayPointer();

void ArrayPointerInvalidExample();

void BasicReference();

void WrongReferenceUsage();

void ReferenceDeclarationVSInitialization();

void ReferenceNullptrAvailability();

void PointerVSReferenceIndirection();

void WrongReferenceExamples();

void ConstReferenceBasic();

void BadConstReferenceUsage();

void ForwardReferenceAndRvalue();

void ReferenceReturnLifetime();

void Challenge1();

void Challenge2();

void Challenge3();

/* C++ 17버전 이상 동작 Fold Expression
template<typename... Args>
int calculateAverage(Args... args)
{
    int total = (args + ...);             
    int count = sizeof...(args);         
    return total / count;
}
*/

int calculateAverage(int score, ...);

int calculateAverage(int score1, int score2, ...);

void CallByValue();

void CallByPointer();

void CallByReference();
