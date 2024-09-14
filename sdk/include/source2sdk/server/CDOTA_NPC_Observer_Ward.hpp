#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CDOTA_BaseNPC_Additive.hpp"
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
    // Size: 0x1820
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_NPC_Observer_Ward : public server::CDOTA_BaseNPC_Additive
    {
    public:
        int32_t m_iDuration; // 0x1810        
        bool m_bPlacedInSpawnBox; // 0x1814        
        [[maybe_unused]] std::uint8_t pad_0x1815[0x3]; // 0x1815
        entity2::GameTime_t m_flSpawnTime; // 0x1818        
        [[maybe_unused]] std::uint8_t pad_0x181c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_NPC_Observer_Ward because it is not a standard-layout class
    static_assert(sizeof(CDOTA_NPC_Observer_Ward) == 0x1820);
};
