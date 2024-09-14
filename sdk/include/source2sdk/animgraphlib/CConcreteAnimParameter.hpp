#pragma once
#include "source2sdk/animationsystem/AnimParamButton_t.hpp"
#include "source2sdk/animationsystem/AnimParamNetworkSetting.hpp"
#include "source2sdk/animgraphlib/CAnimParameterBase.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x80
    // Has VTable
    // Is Abstract
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CConcreteAnimParameter : public animgraphlib::CAnimParameterBase
    {
    public:
        // metadata: MPropertyFriendlyName "Preview Button"
        animationsystem::AnimParamButton_t m_previewButton; // 0x70        
        // metadata: MPropertyFriendlyName "Network"
        animationsystem::AnimParamNetworkSetting m_eNetworkSetting; // 0x74        
        // metadata: MPropertyFriendlyName "Force Latest Value"
        bool m_bUseMostRecentValue; // 0x78        
        // metadata: MPropertyFriendlyName "Auto Reset"
        bool m_bAutoReset; // 0x79        
        // metadata: MPropertyFriendlyName "Game Writable"
        // metadata: MPropertyGroupName "+Permissions"
        // metadata: MPropertyAttrStateCallback
        bool m_bGameWritable; // 0x7a        
        // metadata: MPropertyFriendlyName "Graph Writable"
        // metadata: MPropertyGroupName "+Permissions"
        // metadata: MPropertyAttrStateCallback
        bool m_bGraphWritable; // 0x7b        
        [[maybe_unused]] std::uint8_t pad_0x7c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CConcreteAnimParameter because it is not a standard-layout class
    static_assert(sizeof(CConcreteAnimParameter) == 0x80);
};
