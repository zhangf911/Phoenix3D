// PX2HPoint.inl

//----------------------------------------------------------------------------
inline HPoint::operator const float* () const
{
    return mTuple;
}
//----------------------------------------------------------------------------
inline HPoint::operator float* ()
{
    return mTuple;
}
//----------------------------------------------------------------------------
inline float HPoint::operator[] (int i) const
{
    return mTuple[i];
}
//----------------------------------------------------------------------------
inline float& HPoint::operator[] (int i)
{
    return mTuple[i];
}
//----------------------------------------------------------------------------
inline float HPoint::X () const
{
    return mTuple[0];
}
//----------------------------------------------------------------------------
inline float& HPoint::X ()
{
    return mTuple[0];
}
//----------------------------------------------------------------------------
inline float HPoint::Y () const
{
    return mTuple[1];
}
//----------------------------------------------------------------------------
inline float& HPoint::Y ()
{
    return mTuple[1];
}
//----------------------------------------------------------------------------
inline float HPoint::Z () const
{
    return mTuple[2];
}
//----------------------------------------------------------------------------
inline float& HPoint::Z ()
{
    return mTuple[2];
}
//----------------------------------------------------------------------------
inline float HPoint::W () const
{
    return mTuple[3];
}
//----------------------------------------------------------------------------
inline float& HPoint::W ()
{
    return mTuple[3];
}
//----------------------------------------------------------------------------