#pragma once
#include "source2sdk/server/CBaseEntity.hpp"
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
    // Size: 0x4d8
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CAI_ChangeHintGroup : public server::CBaseEntity
    {
    public:
        int32_t m_iSearchType; // 0x4b8        
        [[maybe_unused]] std::uint8_t pad_0x4bc[0x4]; // 0x4bc
        CUtlSymbolLarge m_strSearchName; // 0x4c0        
        CUtlSymbolLarge m_strNewHintGroup; // 0x4c8        
        float m_flRadius; // 0x4d0        
        [[maybe_unused]] std::uint8_t pad_0x4d4[0x4];
        
        // Datamap fields:
        // void InputActivate; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAI_ChangeHintGroup because it is not a standard-layout class
    static_assert(sizeof(CAI_ChangeHintGroup) == 0x4d8);
};
