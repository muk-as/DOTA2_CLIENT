#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::modellib
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0xa8
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct ModelSkeletonData_t
    {
    public:
        // m_boneName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CUtlString> m_boneName;
        char m_boneName[0x18]; // 0x0        
        // m_nParent has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<int16_t> m_nParent;
        char m_nParent[0x18]; // 0x18        
        // m_boneSphere has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<float> m_boneSphere;
        char m_boneSphere[0x18]; // 0x30        
        // m_nFlag has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<uint32_t> m_nFlag;
        char m_nFlag[0x18]; // 0x48        
        // m_bonePosParent has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<Vector> m_bonePosParent;
        char m_bonePosParent[0x18]; // 0x60        
        // m_boneRotParent has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<QuaternionStorage> m_boneRotParent;
        char m_boneRotParent[0x18]; // 0x78        
        // m_boneScaleParent has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<float> m_boneScaleParent;
        char m_boneScaleParent[0x18]; // 0x90        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(ModelSkeletonData_t, m_boneName) == 0x0);
    static_assert(offsetof(ModelSkeletonData_t, m_nParent) == 0x18);
    static_assert(offsetof(ModelSkeletonData_t, m_boneSphere) == 0x30);
    static_assert(offsetof(ModelSkeletonData_t, m_nFlag) == 0x48);
    static_assert(offsetof(ModelSkeletonData_t, m_bonePosParent) == 0x60);
    static_assert(offsetof(ModelSkeletonData_t, m_boneRotParent) == 0x78);
    static_assert(offsetof(ModelSkeletonData_t, m_boneScaleParent) == 0x90);
    
    static_assert(sizeof(ModelSkeletonData_t) == 0xa8);
};
