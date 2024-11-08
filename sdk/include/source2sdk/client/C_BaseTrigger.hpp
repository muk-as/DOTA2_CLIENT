#pragma once
#include "source2sdk/client/C_BaseToggle.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x828
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MNetworkIncludeByName "m_spawnflags"
    // static metadata: MNetworkVarNames "bool m_bDisabled"
    // static metadata: MNetworkVarNames "bool m_bClientSidePredicted"
    #pragma pack(push, 1)
    class C_BaseTrigger : public client::C_BaseToggle
    {
    public:
        // metadata: MNetworkEnable
        bool m_bDisabled; // 0x820        
        // metadata: MNetworkEnable
        bool m_bClientSidePredicted; // 0x821        
        [[maybe_unused]] std::uint8_t pad_0x822[0x6];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_BaseTrigger because it is not a standard-layout class
    static_assert(sizeof(C_BaseTrigger) == 0x828);
};
