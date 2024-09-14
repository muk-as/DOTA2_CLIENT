#pragma once
#include "source2sdk/animgraphlib/CAnimTagBase.hpp"
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
    // Size: 0x70
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MPropertyFriendlyName "Cloth Settings Tag"
    #pragma pack(push, 1)
    class CClothSettingsAnimTag : public animgraphlib::CAnimTagBase
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x50[0x8]; // 0x50
        // metadata: MPropertyFriendlyName "Stiffness"
        // metadata: MPropertyAttributeRange "0 1"
        float m_flStiffness; // 0x58        
        // metadata: MPropertyFriendlyName "EaseIn"
        // metadata: MPropertyAttributeRange "0 1"
        float m_flEaseIn; // 0x5c        
        // metadata: MPropertyFriendlyName "EaseOut"
        // metadata: MPropertyAttributeRange "0 1"
        float m_flEaseOut; // 0x60        
        [[maybe_unused]] std::uint8_t pad_0x64[0x4]; // 0x64
        // metadata: MPropertyFriendlyName "VertexSet"
        CUtlString m_nVertexSet; // 0x68        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CClothSettingsAnimTag because it is not a standard-layout class
    static_assert(sizeof(CClothSettingsAnimTag) == 0x70);
};
