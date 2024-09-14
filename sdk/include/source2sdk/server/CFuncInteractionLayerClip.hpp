#pragma once
#include "source2sdk/server/CBaseModelEntity.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x7a0
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CFuncInteractionLayerClip : public server::CBaseModelEntity
    {
    public:
        bool m_bDisabled; // 0x788        
        [[maybe_unused]] std::uint8_t pad_0x789[0x7]; // 0x789
        CUtlSymbolLarge m_iszInteractsAs; // 0x790        
        CUtlSymbolLarge m_iszInteractsWith; // 0x798        
        
        // Datamap fields:
        // void InputEnable; // 0x0
        // void InputDisable; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CFuncInteractionLayerClip because it is not a standard-layout class
    static_assert(sizeof(CFuncInteractionLayerClip) == 0x7a0);
};
