#pragma once
#include "source2sdk/animlib/CNmBoneMask__SerializedData_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animlib
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x88
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CNmSkeleton
    {
    public:
        CGlobalSymbol m_ID; // 0x0        
        // m_boneIDs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlLeanVector<CGlobalSymbol> m_boneIDs;
        char m_boneIDs[0x10]; // 0x8        
        // m_parentIndices has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<int32_t> m_parentIndices;
        char m_parentIndices[0x18]; // 0x18        
        // m_parentSpaceReferencePose has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CTransform> m_parentSpaceReferencePose;
        char m_parentSpaceReferencePose[0x18]; // 0x30        
        // m_modelSpaceReferencePose has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CTransform> m_modelSpaceReferencePose;
        char m_modelSpaceReferencePose[0x18]; // 0x48        
        int32_t m_numBonesToSampleAtLowLOD; // 0x60        
        [[maybe_unused]] std::uint8_t pad_0x64[0x4]; // 0x64
        // m_serializedMasks has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlLeanVector<animlib::CNmBoneMask__SerializedData_t> m_serializedMasks;
        char m_serializedMasks[0x10]; // 0x68        
        [[maybe_unused]] std::uint8_t pad_0x78[0x10];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CNmSkeleton, m_ID) == 0x0);
    static_assert(offsetof(CNmSkeleton, m_boneIDs) == 0x8);
    static_assert(offsetof(CNmSkeleton, m_parentIndices) == 0x18);
    static_assert(offsetof(CNmSkeleton, m_parentSpaceReferencePose) == 0x30);
    static_assert(offsetof(CNmSkeleton, m_modelSpaceReferencePose) == 0x48);
    static_assert(offsetof(CNmSkeleton, m_numBonesToSampleAtLowLOD) == 0x60);
    static_assert(offsetof(CNmSkeleton, m_serializedMasks) == 0x68);
    
    static_assert(sizeof(CNmSkeleton) == 0x88);
};
