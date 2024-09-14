#pragma once
#include "source2sdk/animgraphlib/CAnimComponentUpdater.hpp"
#include "source2sdk/animgraphlib/CAnimNodePath.hpp"
#include "source2sdk/animgraphlib/WeightList.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xa8
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CRagdollComponentUpdater : public animgraphlib::CAnimComponentUpdater
    {
    public:
        // m_ragdollNodePaths has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<animgraphlib::CAnimNodePath> m_ragdollNodePaths;
        char m_ragdollNodePaths[0x18]; // 0x30        
        // m_boneIndices has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<int32_t> m_boneIndices;
        char m_boneIndices[0x18]; // 0x48        
        // m_boneNames has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CUtlString> m_boneNames;
        char m_boneNames[0x18]; // 0x60        
        // m_weightLists has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<animgraphlib::WeightList> m_weightLists;
        char m_weightLists[0x18]; // 0x78        
        float m_flSpringFrequencyMin; // 0x90        
        float m_flSpringFrequencyMax; // 0x94        
        float m_flMaxStretch; // 0x98        
        bool m_bSolidCollisionAtZeroWeight; // 0x9c        
        [[maybe_unused]] std::uint8_t pad_0x9d[0xb];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CRagdollComponentUpdater because it is not a standard-layout class
    static_assert(sizeof(CRagdollComponentUpdater) == 0xa8);
};
