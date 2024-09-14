#pragma once
#include "source2sdk/animationsystem/CAnimActivity.hpp"
#include "source2sdk/animationsystem/CAnimDesc_Flag.hpp"
#include "source2sdk/animationsystem/CAnimEncodedFrames.hpp"
#include "source2sdk/animationsystem/CAnimEventDefinition.hpp"
#include "source2sdk/animationsystem/CAnimLocalHierarchy.hpp"
#include "source2sdk/animationsystem/CAnimMovement.hpp"
#include "source2sdk/animationsystem/CAnimSequenceParams.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animationsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animationsystem
{
    // Registered alignment: 0x10
    // Alignment: 0x10
    // Standard-layout class: true
    // Size: 0x1d0
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAnimDesc
    {
    public:
        CBufferString m_name; // 0x0        
        animationsystem::CAnimDesc_Flag m_flags; // 0x10        
        float fps; // 0x18        
        [[maybe_unused]] std::uint8_t pad_0x1c[0x4]; // 0x1c
        // metadata: MKV3TransferName "m_pData"
        animationsystem::CAnimEncodedFrames m_Data; // 0x20        
        // m_movementArray has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<animationsystem::CAnimMovement> m_movementArray;
        char m_movementArray[0x18]; // 0xf8        
        CTransform m_xInitialOffset; // 0x110        
        // m_eventArray has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<animationsystem::CAnimEventDefinition> m_eventArray;
        char m_eventArray[0x18]; // 0x130        
        // m_activityArray has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<animationsystem::CAnimActivity> m_activityArray;
        char m_activityArray[0x18]; // 0x148        
        // m_hierarchyArray has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<animationsystem::CAnimLocalHierarchy> m_hierarchyArray;
        char m_hierarchyArray[0x18]; // 0x160        
        float framestalltime; // 0x178        
        Vector m_vecRootMin; // 0x17c        
        Vector m_vecRootMax; // 0x188        
        [[maybe_unused]] std::uint8_t pad_0x194[0x4]; // 0x194
        // m_vecBoneWorldMin has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<Vector> m_vecBoneWorldMin;
        char m_vecBoneWorldMin[0x18]; // 0x198        
        // m_vecBoneWorldMax has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<Vector> m_vecBoneWorldMax;
        char m_vecBoneWorldMax[0x18]; // 0x1b0        
        animationsystem::CAnimSequenceParams m_sequenceParams; // 0x1c8        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CAnimDesc, m_name) == 0x0);
    static_assert(offsetof(CAnimDesc, m_flags) == 0x10);
    static_assert(offsetof(CAnimDesc, fps) == 0x18);
    static_assert(offsetof(CAnimDesc, m_Data) == 0x20);
    static_assert(offsetof(CAnimDesc, m_movementArray) == 0xf8);
    static_assert(offsetof(CAnimDesc, m_xInitialOffset) == 0x110);
    static_assert(offsetof(CAnimDesc, m_eventArray) == 0x130);
    static_assert(offsetof(CAnimDesc, m_activityArray) == 0x148);
    static_assert(offsetof(CAnimDesc, m_hierarchyArray) == 0x160);
    static_assert(offsetof(CAnimDesc, framestalltime) == 0x178);
    static_assert(offsetof(CAnimDesc, m_vecRootMin) == 0x17c);
    static_assert(offsetof(CAnimDesc, m_vecRootMax) == 0x188);
    static_assert(offsetof(CAnimDesc, m_vecBoneWorldMin) == 0x198);
    static_assert(offsetof(CAnimDesc, m_vecBoneWorldMax) == 0x1b0);
    static_assert(offsetof(CAnimDesc, m_sequenceParams) == 0x1c8);
    
    static_assert(sizeof(CAnimDesc) == 0x1d0);
};
